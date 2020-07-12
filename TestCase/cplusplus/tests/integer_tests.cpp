//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>
#include <stdio.h>
#include <ctime>
#include "test_config.h"
#include "../src/cpp_models/Int64_model.h"

using namespace std;

class IntegerTests: public ::testing::Test {

public:
    // 执行次数
    int testTimes = TEST_TIMES;

    // 执行时间
    double execTime = 0;

    // int 数值
    int64_t intValue = INT_VALUE;

    void resetTime() {
        this->execTime = 0;
    }

protected:

    virtual void SetUp() {

    }

    virtual void TearDown() {

    }
};

TEST_F(IntegerTests, testInt) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::Int64Model model;
        model.set_int64value(this->intValue);
        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nint类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::Int64Model model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("int类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Int64Model model;
        model.setInt64Value(this->intValue);

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("int类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Int64Model model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("int类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Int64Model model;
        model.setInt64Value(this->intValue);

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("int类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Int64Model model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("int类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}


TEST_F(IntegerTests, testTenInt) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::TenInt64Model model;
        model.set_int64value1(this->intValue);
        model.set_int64value2(this->intValue);
        model.set_int64value3(this->intValue);
        model.set_int64value4(this->intValue);
        model.set_int64value5(this->intValue);
        model.set_int64value6(this->intValue);
        model.set_int64value7(this->intValue);
        model.set_int64value8(this->intValue);
        model.set_int64value9(this->intValue);
        model.set_int64value10(this->intValue);

        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nTen int类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

     //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::TenInt64Model model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("Ten int类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenInt64Model model;
        model.int64Value1 = this->intValue;
        model.int64Value2 = this->intValue;
        model.int64Value3 = this->intValue;
        model.int64Value4 = this->intValue;
        model.int64Value5 = this->intValue;
        model.int64Value6 = this->intValue;
        model.int64Value7 = this->intValue;
        model.int64Value8 = this->intValue;
        model.int64Value9 = this->intValue;
        model.int64Value10 = this->intValue;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("Ten int类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenInt64Model model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("Ten int类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenInt64Model model;
        model.int64Value1 = this->intValue;
        model.int64Value2 = this->intValue;
        model.int64Value3 = this->intValue;
        model.int64Value4 = this->intValue;
        model.int64Value5 = this->intValue;
        model.int64Value6 = this->intValue;
        model.int64Value7 = this->intValue;
        model.int64Value8 = this->intValue;
        model.int64Value9 = this->intValue;
        model.int64Value10 = this->intValue;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("Ten int类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenInt64Model model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("Ten int类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}
