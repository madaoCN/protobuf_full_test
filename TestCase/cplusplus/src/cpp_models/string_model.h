//
// Created by 梁宪松 on 2020-07-12.
//

#ifndef CPLUSPLUS_STRING_MODEL_H
#define CPLUSPLUS_STRING_MODEL_H

#include "base_model.h"
#include <string>

using namespace std;
class StringModel: virtual public BaseModel {

public:
    std::string stringValue;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        model["stringValue"] = this->stringValue;
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->stringValue = value["stringValue"].asString();
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("stringValue", rapidjson::StringRef(this->stringValue.c_str()), allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->stringValue = document["stringValue"].GetString();
    }
};

class TenStringModel: virtual public BaseModel {

public:
    string stringValue1;
    string stringValue2;
    string stringValue3;
    string stringValue4;
    string stringValue5;
    string stringValue6;
    string stringValue7;
    string stringValue8;
    string stringValue9;
    string stringValue10;


    std::string toJsonWithJsonCpp() {

        Json::Value model;
        // 解析
        model["stringValue1"] = this->stringValue1;
        model["stringValue2"] = this->stringValue2;
        model["stringValue3"] = this->stringValue3;
        model["stringValue4"] = this->stringValue4;
        model["stringValue5"] = this->stringValue5;
        model["stringValue6"] = this->stringValue6;
        model["stringValue7"] = this->stringValue7;
        model["stringValue8"] = this->stringValue8;
        model["stringValue9"] = this->stringValue9;
        model["stringValue10"] = this->stringValue10;
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->stringValue1 = value["stringValue1"].asString();
        this->stringValue2 = value["stringValue2"].asString();
        this->stringValue3 = value["stringValue3"].asString();
        this->stringValue4 = value["stringValue4"].asString();
        this->stringValue5 = value["stringValue5"].asString();
        this->stringValue6 = value["stringValue6"].asString();
        this->stringValue7 = value["stringValue7"].asString();
        this->stringValue8 = value["stringValue8"].asString();
        this->stringValue9 = value["stringValue9"].asString();
        this->stringValue10 = value["stringValue10"].asString();
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("stringValue1", rapidjson::StringRef(this->stringValue1.c_str()), allocator);
        document.AddMember("stringValue2", rapidjson::StringRef(this->stringValue2.c_str()), allocator);
        document.AddMember("stringValue3", rapidjson::StringRef(this->stringValue3.c_str()), allocator);
        document.AddMember("stringValue4", rapidjson::StringRef(this->stringValue4.c_str()), allocator);
        document.AddMember("stringValue5", rapidjson::StringRef(this->stringValue5.c_str()), allocator);
        document.AddMember("stringValue6", rapidjson::StringRef(this->stringValue6.c_str()), allocator);
        document.AddMember("stringValue7", rapidjson::StringRef(this->stringValue7.c_str()), allocator);
        document.AddMember("stringValue8", rapidjson::StringRef(this->stringValue8.c_str()), allocator);
        document.AddMember("stringValue9", rapidjson::StringRef(this->stringValue9.c_str()), allocator);
        document.AddMember("stringValue10", rapidjson::StringRef(this->stringValue10.c_str()), allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->stringValue1 = document["stringValue1"].GetString();
        this->stringValue2 = document["stringValue2"].GetString();
        this->stringValue3 = document["stringValue3"].GetString();
        this->stringValue4 = document["stringValue4"].GetString();
        this->stringValue5 = document["stringValue5"].GetString();
        this->stringValue6 = document["stringValue6"].GetString();
        this->stringValue7 = document["stringValue7"].GetString();
        this->stringValue8 = document["stringValue8"].GetString();
        this->stringValue9 = document["stringValue9"].GetString();
        this->stringValue10 = document["stringValue10"].GetString();
    }
};

#endif //CPLUSPLUS_STRING_MODEL_H
