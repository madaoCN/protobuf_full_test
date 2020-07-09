#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2020/7/8 15:18 PM
# @Author  : MADAO
from proto_models import testModel_pb2 as testProto
from python_models import python_models
import unittest
import time 
import json
from test_config import TIMES, TEST_STRING, PERSON_LIST

class ObjectValueTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):

        # json 对象
        self.json_model = PERSON_LIST[0]
        self.json_model_str = json.dumps(self.json_model, default=lambda x : x.__dict__,)

        # proto对象
        self.proto_model = self.genObjectModel()
        self.serialized = self.proto_model.SerializeToString()

    def genObjectModel(self):
        proto_model = testProto.Person()
        proto_model.name = self.json_model.name
        proto_model.id = self.json_model.id
        proto_model.email = self.json_model.email

        # phone num 对象
        for phone in self.json_model.phone:
            proto_phone = testProto.Person.PhoneNumber()
            proto_phone.number = phone.number
            proto_model.phone.append(proto_phone)
        return proto_model

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            
            proto_model = self.genObjectModel()
            serialized = proto_model.SerializeToString()

            exec_time += time.time() - tick
        print("object类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()

            json.dumps(self.json_model, default=lambda x : x.__dict__,)

            exec_time += time.time() - tick
        print("object类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.Person()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("object类型 protobuf 解码用时: {}".format(exec_time))

        # json
        from collections import namedtuple
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            model = python_models.dictToObject(json.loads(self.json_model_str), name="Person")
            exec_time += time.time() - tick
        print("object类型 json 解码用时: {}".format(exec_time))


class ObjectListTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):

        # json 对象
        self.json_model = python_models.AddressBook(PERSON_LIST)
        self.json_model_str = json.dumps(self.json_model, default=lambda x : x.__dict__,)

        # proto对象
        self.proto_model = self.genObjectModel()
        self.serialized = self.proto_model.SerializeToString()

    def genObjectModel(self):
        model = testProto.AddressBook()
        for person in self.json_model.people:
            proto_model = testProto.Person()
            proto_model.name = person.name
            proto_model.id = person.id
            proto_model.email = person.email

            # phone num 对象
            for phone in person.phone:
                proto_phone = testProto.Person.PhoneNumber()
                proto_phone.number = phone.number
                proto_model.phone.append(proto_phone)
            model.person.append(proto_model)
        return model

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            
            proto_model = self.genObjectModel()
            serialized = proto_model.SerializeToString()

            exec_time += time.time() - tick
        print("object列表类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()

            json.dumps(self.json_model, default=lambda x : x.__dict__,)

            exec_time += time.time() - tick
        print("object列表类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.AddressBook()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("object列表类型 protobuf 解码用时: {}".format(exec_time))

        # json
        from collections import namedtuple
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            model = python_models.dictToObject(json.loads(self.json_model_str), name="AddressBook")
            exec_time += time.time() - tick
        print("object列表类型 json 解码用时: {}".format(exec_time))