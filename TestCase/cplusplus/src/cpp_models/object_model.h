//
// Created by 梁宪松 on 2020-07-13.
//

#ifndef CPLUSPLUS_OBJECT_MODEL_H
#define CPLUSPLUS_OBJECT_MODEL_H

#include <iostream>

using namespace std;

class PhoneNumber {

public:
    string number;

    PhoneNumber() {

        number = "13055424952";
    }
};

class Person: virtual public BaseModel {

public:
    string name;
    double id_ = 9999.9999;
    string email;
    vector<PhoneNumber> phoneArr;

    Person() {
        this->name = "梁meme";
        this->id_ = 9999.9999;
        this->email = "591710551@qq.com";

        for (int i = 0; i < 10; ++i) {
            this->phoneArr.push_back(PhoneNumber());
        }
    }

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        model["name"] = this->name;
        model["id"] = this->id_;
        model["email"] = this->email;

        for (int i = 0; i < this->phoneArr.size(); ++i) {
            model["phoneArr"][i]["number"] = this->phoneArr[i].number;
        }
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->name = value["name"].asString();
        this->id_ = value["id"].asDouble();
        this->email = value["email"].asString();

        this->phoneArr.clear();
        for (int i = 0; i < value["phoneArr"].size(); ++i) {
            PhoneNumber phoneNumber;
            phoneNumber.number = value["phoneArr"][i]["number"].asString();
            this->phoneArr.push_back(phoneNumber);
        }
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();

        // 添加数据
        document.AddMember("name", rapidjson::StringRef(this->name.c_str()), allocator);
        document.AddMember("id", this->id_, allocator);
        document.AddMember("email", rapidjson::StringRef(this->email.c_str()), allocator);
        rapidjson::Value arr(rapidjson::Type::kArrayType);
        for (int i = 0; i < this->phoneArr.size(); ++i) {

            rapidjson::Value phone(rapidjson::Type::kObjectType);
            phone.SetObject();
            phone.AddMember("number", rapidjson::StringRef(this->phoneArr[i].number.c_str()), allocator);
            arr.PushBack(phone, allocator);
        }
        document.AddMember("phoneArr", arr, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->name = document["name"].GetString();
        this->id_ = document["id"].GetDouble();
        this->email = document["email"].GetString();

        this->phoneArr.clear();
        const rapidjson::Value& arr = document["phoneArr"];
        for (int i = 0; i < arr.Size(); ++i) {
            PhoneNumber number;
            number.number = arr[i]["number"].GetString();
            this->phoneArr.push_back(number);
        }
    }
};

class AddressBook {

public:
    vector<Person> personArr;

    AddressBook() {

        for (int i = 0; i < 10; ++i) {
            personArr.push_back(Person());
        }
    }


    std::string toJsonWithJsonCpp() {

        Json::Value root;

        for (int j = 0; j < this->personArr.size(); ++j) {

            Person person = this->personArr[j];
            Json::Value model;
            model["name"] = person.name;
            model["id"] = person.id_;
            model["email"] = person.email;

            for (int i = 0; i < person.phoneArr.size(); ++i) {
                model["phoneArr"][i]["number"] = person.phoneArr[i].number;
            }

            root["personArr"][j] = model;
        }

        return root.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        for (int i = 0; i < value["personArr"].size(); ++i) {
            Json::Value personValue = value["personArr"][i];

            Person person;

            person.name = personValue["name"].asString();
            person.id_ = personValue["id"].asDouble();
            person.email = personValue["email"].asString();

            person.phoneArr.clear();
            for (int i = 0; i < personValue["phoneArr"].size(); ++i) {
                PhoneNumber phoneNumber;
                phoneNumber.number = personValue["phoneArr"][i]["number"].asString();
                person.phoneArr.push_back(phoneNumber);
            }
        }
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();

        rapidjson::Value personArr(rapidjson::Type::kArrayType);
        // 添加数据
        for (int j = 0; j < this->personArr.size(); ++j) {

            Person person = this->personArr[j];
            rapidjson::Value personValue(rapidjson::Type::kObjectType);

            personValue.AddMember("name", rapidjson::StringRef(person.name.c_str()), allocator);
            personValue.AddMember("id", person.id_, allocator);
            personValue.AddMember("email", rapidjson::StringRef(person.email.c_str()), allocator);
            rapidjson::Value arr(rapidjson::Type::kArrayType);
            for (int i = 0; i < person.phoneArr.size(); ++i) {

                rapidjson::Value phone(rapidjson::Type::kObjectType);
                phone.SetObject();
                phone.AddMember("number", rapidjson::StringRef(person.phoneArr[i].number.c_str()), allocator);
                arr.PushBack(phone, allocator);
            }
            personValue.AddMember("phoneArr", arr, allocator);

            // 添加至 personArr
            personArr.PushBack(personValue, allocator);
        }

        // 添加 personArr
        document.AddMember("personArr", personArr, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        const rapidjson::Value& arr = document["personArr"];
        this->personArr.clear();

        for (int i = 0; i < arr.Size(); ++i) {
            Person person;
            const rapidjson::Value& personValue = arr[i];
            // 解析
            person.name = personValue["name"].GetString();
            person.id_ = personValue["id"].GetDouble();
            person.email = personValue["email"].GetString();

            person.phoneArr.clear();
            const rapidjson::Value& phoneArr = personValue["phoneArr"];
            for (int i = 0; i < phoneArr.Size(); ++i) {
                PhoneNumber number;
                number.number = phoneArr[i]["number"].GetString();
                person.phoneArr.push_back(number);
            }

            this->personArr.push_back(person);
        }
    }
};

#endif //CPLUSPLUS_OBJECT_MODEL_H
