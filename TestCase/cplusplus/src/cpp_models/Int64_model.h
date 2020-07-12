//
// Created by 梁宪松 on 2020-07-10.
//

#ifndef CPLUSPLUS_INT64MODEL_H
#define CPLUSPLUS_INT64MODEL_H

#include "base_model.h"
#include <string>

class Int64Model: virtual public BaseModel {

    int64_t int64Value;

public:
    int64_t getInt64Value() const {
        return int64Value;
    }

    void setInt64Value(int64_t int64Value) {
        Int64Model::int64Value = int64Value;
    }

    std::string toJsonWithJsonCpp() {

        Json::Value model;
        model["int64Value"] = this->int64Value;
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->int64Value = value["int64Value"].asInt64();
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("int64Value", this->getInt64Value(), allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->int64Value = document["int64Value"].GetInt64();
    }
};

class TenInt64Model: virtual public BaseModel {

public:
    int64_t int64Value1;
    int64_t int64Value2;
    int64_t int64Value3;
    int64_t int64Value4;
    int64_t int64Value5;
    int64_t int64Value6;
    int64_t int64Value7;
    int64_t int64Value8;
    int64_t int64Value9;
    int64_t int64Value10;


    std::string toJsonWithJsonCpp() {

        Json::Value model;
        // 解析
        model["int64Value1"] = this->int64Value1;
        model["int64Value2"] = this->int64Value2;
        model["int64Value3"] = this->int64Value3;
        model["int64Value4"] = this->int64Value4;
        model["int64Value5"] = this->int64Value5;
        model["int64Value6"] = this->int64Value6;
        model["int64Value7"] = this->int64Value7;
        model["int64Value8"] = this->int64Value8;
        model["int64Value9"] = this->int64Value9;
        model["int64Value10"] = this->int64Value10;
        return model.toStyledString();
    }

    void parseFromJsonValueWithJsonCpp(std::string jsonString) {

        Json::CharReaderBuilder readerBuilder;
        Json::Value value;
        std::unique_ptr<Json::CharReader> const jsonReader(readerBuilder.newCharReader());
        bool res = jsonReader->parse(jsonString.c_str(), jsonString.c_str() + jsonString.length(), &value, NULL);

        // 解析
        this->int64Value1 = value["int64Value1"].asInt64();
        this->int64Value2 = value["int64Value2"].asInt64();
        this->int64Value3 = value["int64Value3"].asInt64();
        this->int64Value4 = value["int64Value4"].asInt64();
        this->int64Value5 = value["int64Value5"].asInt64();
        this->int64Value6 = value["int64Value6"].asInt64();
        this->int64Value7 = value["int64Value7"].asInt64();
        this->int64Value8 = value["int64Value8"].asInt64();
        this->int64Value9 = value["int64Value9"].asInt64();
        this->int64Value10 = value["int64Value10"].asInt64();
    }

    std::string toJsonWithRapidJson() {

        rapidjson::StringBuffer stringBuffer;
        rapidjson::Document document;
        rapidjson::Document::AllocatorType &allocator = document.GetAllocator();

        document.SetObject();
        // 添加数据
        document.AddMember("int64Value1", this->int64Value1, allocator);
        document.AddMember("int64Value2", this->int64Value2, allocator);
        document.AddMember("int64Value3", this->int64Value3, allocator);
        document.AddMember("int64Value4", this->int64Value4, allocator);
        document.AddMember("int64Value5", this->int64Value5, allocator);
        document.AddMember("int64Value6", this->int64Value6, allocator);
        document.AddMember("int64Value7", this->int64Value7, allocator);
        document.AddMember("int64Value8", this->int64Value8, allocator);
        document.AddMember("int64Value9", this->int64Value9, allocator);
        document.AddMember("int64Value10", this->int64Value10, allocator);

        rapidjson::Writer<rapidjson::StringBuffer> writer(stringBuffer);
        document.Accept(writer);

        return stringBuffer.GetString();
    }

    void parseFromJsonValueWithRapidJson(std::string jsonString) {

        rapidjson::Document document;
        document.Parse(jsonString.c_str());

        // 解析
        this->int64Value1 = document["int64Value1"].GetInt64();
        this->int64Value2 = document["int64Value2"].GetInt64();
        this->int64Value3 = document["int64Value3"].GetInt64();
        this->int64Value4 = document["int64Value4"].GetInt64();
        this->int64Value5 = document["int64Value5"].GetInt64();
        this->int64Value6 = document["int64Value6"].GetInt64();
        this->int64Value7 = document["int64Value7"].GetInt64();
        this->int64Value8 = document["int64Value8"].GetInt64();
        this->int64Value9 = document["int64Value9"].GetInt64();
        this->int64Value10 = document["int64Value10"].GetInt64();
    }
};

#endif //CPLUSPLUS_INT64MODEL_H
