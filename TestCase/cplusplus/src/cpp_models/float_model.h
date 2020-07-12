//
// Created by 梁宪松 on 2020-07-12.
//

#ifndef CPLUSPLUS_FLOAT_MODEL_H
#define CPLUSPLUS_FLOAT_MODEL_H

#include "base_model.h"
#include <string>

class DoubleModel: virtual public BaseModel {

public:
    double doubleValue;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        model["doubleValue"] = this->doubleValue;
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->doubleValue = value["doubleValue"].asDouble();
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("doubleValue", this->doubleValue, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->doubleValue = document["doubleValue"].GetDouble();
    }
};

class TenDoubleModel: virtual public BaseModel {

public:
    double doubleValue1;
    double doubleValue2;
    double doubleValue3;
    double doubleValue4;
    double doubleValue5;
    double doubleValue6;
    double doubleValue7;
    double doubleValue8;
    double doubleValue9;
    double doubleValue10;

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        // 解析
        model["doubleValue1"] = this->doubleValue1;
        model["doubleValue2"] = this->doubleValue2;
        model["doubleValue3"] = this->doubleValue3;
        model["doubleValue4"] = this->doubleValue4;
        model["doubleValue5"] = this->doubleValue5;
        model["doubleValue6"] = this->doubleValue6;
        model["doubleValue7"] = this->doubleValue7;
        model["doubleValue8"] = this->doubleValue8;
        model["doubleValue9"] = this->doubleValue9;
        model["doubleValue10"] = this->doubleValue10;

        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->doubleValue1 = value["doubleValue1"].asDouble();
        this->doubleValue2 = value["doubleValue2"].asDouble();
        this->doubleValue3 = value["doubleValue3"].asDouble();
        this->doubleValue4 = value["doubleValue4"].asDouble();
        this->doubleValue5 = value["doubleValue5"].asDouble();
        this->doubleValue6 = value["doubleValue6"].asDouble();
        this->doubleValue7 = value["doubleValue7"].asDouble();
        this->doubleValue8 = value["doubleValue8"].asDouble();
        this->doubleValue9 = value["doubleValue9"].asDouble();
        this->doubleValue10 = value["doubleValue10"].asDouble();

    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("doubleValue1", this->doubleValue1, allocator);
        document.AddMember("doubleValue2", this->doubleValue2, allocator);
        document.AddMember("doubleValue3", this->doubleValue3, allocator);
        document.AddMember("doubleValue4", this->doubleValue4, allocator);
        document.AddMember("doubleValue5", this->doubleValue5, allocator);
        document.AddMember("doubleValue6", this->doubleValue6, allocator);
        document.AddMember("doubleValue7", this->doubleValue7, allocator);
        document.AddMember("doubleValue8", this->doubleValue8, allocator);
        document.AddMember("doubleValue9", this->doubleValue9, allocator);
        document.AddMember("doubleValue10", this->doubleValue10, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->doubleValue1 = document["doubleValue1"].GetDouble();
        this->doubleValue2 = document["doubleValue2"].GetDouble();
        this->doubleValue3 = document["doubleValue3"].GetDouble();
        this->doubleValue4 = document["doubleValue4"].GetDouble();
        this->doubleValue5 = document["doubleValue5"].GetDouble();
        this->doubleValue6 = document["doubleValue6"].GetDouble();
        this->doubleValue7 = document["doubleValue7"].GetDouble();
        this->doubleValue8 = document["doubleValue8"].GetDouble();
        this->doubleValue9 = document["doubleValue9"].GetDouble();
        this->doubleValue10 = document["doubleValue10"].GetDouble();
    }
};

#endif //CPLUSPLUS_FLOAT_MODEL_H
