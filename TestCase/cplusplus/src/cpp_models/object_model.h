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
    float id_;
    string email;
    vector<PhoneNumber> phoneArr;

    Person() {
        name = "梁meme";
        id_ = 999999.999999;
        email = "591710551@qq.com";

        for (int i = 0; i < 10; ++i) {
            phoneArr.push_back(PhoneNumber());
        }
    }

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        model["name"] = this->name;
        model["id"] = this->id_;
        model["email"] = this->email;

        for (int i = 0; i < this->phoneArr.size(); ++i) {
            model["phoneArr"][i] = this->phoneArr[i].number;
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
        this->id_ = value["id"].asFloat();
        this->email = value["email"].asString();

        this->phoneArr.clear();
        for (int i = 0; i < value["phoneArr"].size(); ++i) {
            PhoneNumber phoneNumber;
            phoneNumber.number = value["phoneArr"][i].asString();
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
            arr.PushBack(rapidjson::StringRef(this->phoneArr[i].number.c_str()), allocator);
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
        this->id_ = document["id"].GetFloat();
        this->email = document["email"].GetString();

        this->phoneArr.clear();
        const rapidjson::Value& arr = document["phoneArr"];
        for (int i = 0; i < arr.Size(); ++i) {
            PhoneNumber number;
            number.number = arr[i].GetString();
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
};

#endif //CPLUSPLUS_OBJECT_MODEL_H
