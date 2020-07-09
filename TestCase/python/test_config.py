#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2020/7/8 15:18 PM
# @Author  : MADAO
from python_models.python_models import PhoneNumber, Person, AddressBook

# 运行次数
TIMES = 1000

TEST_STRING = "https://www.jianshu.com/u/00be556128d1"

TEST_INT_LIST = [
    999999 for _ in range(10)
]

TEST_FLOAT_LIST = [
    999999.999999 for _ in range(10)
]

TEST_STRING_LIST = [
    TEST_STRING for _ in range(10)
]

PHONE_NUM_LIST = [
    PhoneNumber(number="13055424951") for _ in range(10)
]

PERSON_LIST = [
    Person(name="梁么么", id=9999.9999, email="591710552@qq.com", phone = PHONE_NUM_LIST) for _ in range(10)
]

ADD_BOOK = AddressBook(people=PERSON_LIST)