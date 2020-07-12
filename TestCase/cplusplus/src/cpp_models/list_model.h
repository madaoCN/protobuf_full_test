//
// Created by 梁宪松 on 2020-07-12.
//

#ifndef CPLUSPLUS_LIST_MODEL_H
#define CPLUSPLUS_LIST_MODEL_H

#include "base_model.h"

using namespace std;

class IntListModel: virtual public BaseModel {

public:
    vector<int64_t > intValues;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        for (int i = 0; i < this->intValues.size(); ++i) {
            model["intValues"][i] = this->intValues[i];
        }
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->intValues.clear();
        for (int i = 0; i < value["intValues"].size(); ++i) {
            this->intValues.push_back(value["intValues"][i].asInt64());
        }
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        rapidjson::Value arr(rapidjson::Type::kArrayType);
        for (int i = 0; i < this->intValues.size(); ++i) {
            arr.PushBack(this->intValues[i], allocator);
        }
        document.AddMember("intValues", arr, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        const rapidjson::Value& arr = document["intValues"];
        this->intValues.clear();
        for (int i = 0; i < arr.Size(); ++i) {
            this->intValues.push_back(arr[i].GetInt64());
        }
    }
};

class DoubleListModel: virtual public BaseModel {

public:
    vector<double > doubleValues;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        for (int i = 0; i < this->doubleValues.size(); ++i) {
            model["doubleValues"][i] = this->doubleValues[i];
        }
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->doubleValues.clear();
        for (int i = 0; i < value["doubleValues"].size(); ++i) {
            this->doubleValues.push_back(value["doubleValues"][i].asDouble());
        }
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        rapidjson::Value arr(rapidjson::Type::kArrayType);
        for (int i = 0; i < this->doubleValues.size(); ++i) {
            arr.PushBack(this->doubleValues[i], allocator);
        }
        document.AddMember("doubleValues", arr, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        const rapidjson::Value& arr = document["doubleValues"];
        this->doubleValues.clear();
        for (int i = 0; i < arr.Size(); ++i) {
            this->doubleValues.push_back(arr[i].GetDouble());
        }
    }
};

class StringListModel: virtual public BaseModel {

public:
    vector<string> stringValues;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        for (int i = 0; i < this->stringValues.size(); ++i) {
            model["stringValues"][i] = this->stringValues[i];
        }
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->stringValues.clear();
        for (int i = 0; i < value["stringValues"].size(); ++i) {
            this->stringValues.push_back(value["stringValues"][i].asString());
        }
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        rapidjson::Value arr(rapidjson::Type::kArrayType);
        for (int i = 0; i < this->stringValues.size(); ++i) {
            arr.PushBack(rapidjson::StringRef(this->stringValues[i].c_str()), allocator);
        }
        document.AddMember("stringValues", arr, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        const rapidjson::Value& arr = document["stringValues"];
        this->stringValues.clear();
        for (int i = 0; i < arr.Size(); ++i) {
            this->stringValues.push_back(arr[i].GetString());
        }
    }
};
#endif //CPLUSPLUS_LIST_MODEL_H
