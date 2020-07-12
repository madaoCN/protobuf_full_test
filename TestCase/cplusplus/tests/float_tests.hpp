//
// Created by 梁宪松 on 2020-07-10.
//

#include <gtest/gtest.h>
#include <stdio.h>
#include <ctime>
#include "test_config.h"
#include "../src/cpp_models/float_model.h"

using namespace std;

class FloatTests: public ::testing::Test {

public:
    // 执行次数
    int testTimes = TEST_TIMES;

    // 执行时间
    double execTime = 0;

    // double 数值
    double doubleValue = DOUBLE_VALUE;

    void resetTime() {
        this->execTime = 0;
    }

protected:

    virtual void SetUp() {

    }

    virtual void TearDown() {

    }
};

TEST_F(FloatTests, testFloat) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::DoubleModel model;
        model.set_doublevalue(this->doubleValue);
        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\ndouble 类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::DoubleModel model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("double 类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        DoubleModel model;
        model.doubleValue = this->doubleValue;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("double 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        DoubleModel model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("double 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        DoubleModel model;
        model.doubleValue = this->doubleValue;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("double 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        DoubleModel model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("double 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}


TEST_F(FloatTests, testTenFloat) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::TenDoubleModel model;
        model.set_doublevalue1(this->doubleValue);
        model.set_doublevalue2(this->doubleValue);
        model.set_doublevalue3(this->doubleValue);
        model.set_doublevalue4(this->doubleValue);
        model.set_doublevalue5(this->doubleValue);
        model.set_doublevalue6(this->doubleValue);
        model.set_doublevalue7(this->doubleValue);
        model.set_doublevalue8(this->doubleValue);
        model.set_doublevalue9(this->doubleValue);
        model.set_doublevalue10(this->doubleValue);

        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nTen double 类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::TenInt64Model model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("Ten double 类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenDoubleModel model;
        model.doubleValue1 = this->doubleValue;
        model.doubleValue2 = this->doubleValue;
        model.doubleValue3 = this->doubleValue;
        model.doubleValue4 = this->doubleValue;
        model.doubleValue5 = this->doubleValue;
        model.doubleValue6 = this->doubleValue;
        model.doubleValue7 = this->doubleValue;
        model.doubleValue8 = this->doubleValue;
        model.doubleValue9 = this->doubleValue;
        model.doubleValue10 = this->doubleValue;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("Ten double 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenDoubleModel model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("Ten double 类型 rapidJson 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenDoubleModel model;
        model.doubleValue1 = this->doubleValue;
        model.doubleValue2 = this->doubleValue;
        model.doubleValue3 = this->doubleValue;
        model.doubleValue4 = this->doubleValue;
        model.doubleValue5 = this->doubleValue;
        model.doubleValue6 = this->doubleValue;
        model.doubleValue7 = this->doubleValue;
        model.doubleValue8 = this->doubleValue;
        model.doubleValue9 = this->doubleValue;
        model.doubleValue10 = this->doubleValue;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("Ten double 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        TenDoubleModel model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("Ten double 类型 jsoncpp 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}