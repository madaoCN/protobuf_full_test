//
// Created by 梁宪松 on 2020-07-12.
//

#include <gtest/gtest.h>
#include <stdio.h>
#include <ctime>
#include "test_config.h"
#include "../src/cpp_models/list_model.h"

using namespace std;

class ListTests: public ::testing::Test {

public:
    // 执行次数
    int testTimes = TEST_TIMES;

    // 数据量
    int testDataSize = TEST_DATA_SIZE;

    // 执行时间
    double execTime = 0;

    // int 数值
    int64_t intValue = INT_VALUE;
    vector<int64_t> intList;

    // double 数值
    double doubleValue = DOUBLE_VALUE;
    vector<double> doubleList;

    // string 数值
    string stringValue = STRING_VALUE;
    vector<string> stringList;

    void resetTime() {
        this->execTime = 0;
    }

protected:

    virtual void SetUp() {

        for (int i = 0; i < this->testDataSize; ++i) {
            intList.push_back(this->intValue);
            doubleList.push_back(this->doubleValue);
            stringList.push_back(this->stringValue);
        }
    }

    virtual void TearDown() {

    }
};

TEST_F(ListTests, testIntList) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::IntListModel model;
        for (int j = 0; j < this->intList.size(); ++j) {
            model.add_intvalues(this->intList[j]);
        }

        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\n列表 int类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::IntListModel model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("列表 int类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        IntListModel model;
        model.intValues = this->intList;

        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("列表 int类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        IntListModel model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("列表 int类型 rapidJson 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        IntListModel model;
        model.intValues = this->intList;

        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("列表 int类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        IntListModel model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("列表 int类型 jsoncpp 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}