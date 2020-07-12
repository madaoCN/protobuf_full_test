//
// Created by 梁宪松 on 2020-07-12.
//

#ifndef CPLUSPLUS_BASIC_MODEL_H
#define CPLUSPLUS_BASIC_MODEL_H

#include <json/json.h>
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

class BaseModel {

public:
    virtual std::string toJsonWithJsonCpp() { return NULL; };
    virtual void parseFromJsonValueWithJsonCpp(std::string) { };

    virtual std::string toJsonWithRapidJson() { return NULL; };
    virtual void parseFromJsonValueWithRapidJson(std::string) { };
};


#endif //CPLUSPLUS_BASIC_MODEL_H
