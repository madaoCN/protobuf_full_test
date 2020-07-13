//
// Created by 梁宪松 on 2020-07-13.
//

#ifndef CPLUSPLUS_OBJECT_TESTS_H
#define CPLUSPLUS_OBJECT_TESTS_H

#include <gtest/gtest.h>
#include <stdio.h>
#include <ctime>
#include "test_config.h"
#include "../src/cpp_models/object_model.h"

using namespace std;

class ObjectTests: public ::testing::Test {

public:
    // 执行次数
    int testTimes = TEST_TIMES;

    // 执行时间
    double execTime = 0;

    // 通讯录
    AddressBook addressBook;

    Person person;

    void resetTime() {
        this->execTime = 0;
    }

    // 初始化pb person
    testModel::Person generateProtoPerson() {

        testModel::Person model;
        model.set_name(person.name);
        model.set_email(person.email);
        model.set_id(person.id_);

        for (int i = 0; i < person.phoneArr.size(); ++i) {
            testModel::Person_PhoneNumber phoneNumber;
            model.add_phone()->set_number(person.phoneArr[i].number);
        }
        return model;
    }

protected:

    virtual void SetUp() {

    }

    virtual void TearDown() {

    }
};

TEST_F(ObjectTests, testSingleObject) {

    // ------------  protobuf
    this->resetTime();
    // 编码
    string serializeString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        testModel::Person model = this->generateProtoPerson();
        model.SerializeToString(&serializeString);

        this->execTime += clock() - tick;
    }
    printf("\nobject 类型 protobuf 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    //解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        // 编码
        testModel::Person model;
        model.ParseFromString(serializeString);

        this->execTime += clock() - tick;
    }
    printf("object 类型 protobuf 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ rapidJson
    // 编码
    this->resetTime();
    string rapidJsonString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Person model;
        rapidJsonString = model.toJsonWithRapidJson();

        this->execTime += clock() - tick;
    }
    printf("object 类型 rapidJson 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Person model;
        model.parseFromJsonValueWithRapidJson(rapidJsonString);

        this->execTime += clock() - tick;
    }
    printf("object 类型 rapidJson 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // ------------ jsoncpp
    // 编码
    this->resetTime();
    string jsonCppString;
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Person model;
        jsonCppString = model.toJsonWithJsonCpp();

        this->execTime += clock() - tick;
    }
    printf("object 类型 jsoncpp 编码时间：%f\n", this->execTime / CLOCKS_PER_SEC);

    // 解码
    this->resetTime();
    for (int i = 0; i < this->testTimes; ++i) {

        clock_t tick = clock();

        Person model;
        model.parseFromJsonValueWithJsonCpp(jsonCppString);

        this->execTime += clock() - tick;
    }
    printf("object 类型 jsoncpp 解码时间：%f\n", this->execTime / CLOCKS_PER_SEC);
}

#endif //CPLUSPLUS_OBJECT_TESTS_H
