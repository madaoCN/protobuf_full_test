//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>
#include <stdio.h>
#include <ctime>
#include "test_config.h"
#include "../src/cpp_models/string_model.h"

using namespace std;

class StringTests: public ::testing::Test {

public:
    // 执行次数
    int testTimes = TEST_TIMES;

    // 执行时间
    double execTime = 0;

    // string 数值
    string stringValue = STRING_VALUE;

    void resetTime() {
        this->execTime = 0;
    }

protected:

    virtual void SetUp() {

    }

    virtual void TearDown() {

    }
};


TEST_F(StringTests, testString) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::StringModel model;
        model.set_stringvalue(this->stringValue);
        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nstring 类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::StringModel model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("string 类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        StringModel model;
        model.stringValue = this->stringValue;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("string 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        StringModel model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("string 类型 rapidJson 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        StringModel model;
        model.stringValue = this->stringValue;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("string 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        StringModel model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("string 类型 jsoncpp 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}


TEST_F(StringTests, testTenString) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::TenStringModel model;
        model.set_stringvalue1(this->stringValue);
        model.set_stringvalue2(this->stringValue);
        model.set_stringvalue3(this->stringValue);
        model.set_stringvalue4(this->stringValue);
        model.set_stringvalue5(this->stringValue);
        model.set_stringvalue6(this->stringValue);
        model.set_stringvalue7(this->stringValue);
        model.set_stringvalue8(this->stringValue);
        model.set_stringvalue9(this->stringValue);
        model.set_stringvalue10(this->stringValue);

        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nTen string 类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::TenStringModel model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("Ten string 类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenStringModel model;
        model.stringValue1 = this->stringValue;
        model.stringValue2 = this->stringValue;
        model.stringValue3 = this->stringValue;
        model.stringValue4 = this->stringValue;
        model.stringValue5 = this->stringValue;
        model.stringValue6 = this->stringValue;
        model.stringValue7 = this->stringValue;
        model.stringValue8 = this->stringValue;
        model.stringValue9 = this->stringValue;
        model.stringValue10 = this->stringValue;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("Ten string 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenStringModel model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("Ten string 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenStringModel model;
        model.stringValue1 = this->stringValue;
        model.stringValue2 = this->stringValue;
        model.stringValue3 = this->stringValue;
        model.stringValue4 = this->stringValue;
        model.stringValue5 = this->stringValue;
        model.stringValue6 = this->stringValue;
        model.stringValue7 = this->stringValue;
        model.stringValue8 = this->stringValue;
        model.stringValue9 = this->stringValue;
        model.stringValue10 = this->stringValue;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("Ten string 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenStringModel model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("Ten string 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}