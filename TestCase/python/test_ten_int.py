#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2020/7/8 15:18 PM
# @Author  : MADAO
from proto_models import testModel_pb2 as testProto
from python_models import python_models
import unittest
import time 
import json
from test_config import TIMES

class TenIntValueTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):
        self.value = 99999

        self.json_model = python_models.TenInt64Model(intValue=self.value)
        self.json_model_str = json.dumps(self.json_model.__dict__)

        self.proto_model = testProto.TenInt64Model()
        self.proto_model.int64Value1 = self.value
        self.proto_model.int64Value2 = self.value
        self.proto_model.int64Value3 = self.value
        self.proto_model.int64Value4 = self.value
        self.proto_model.int64Value5 = self.value
        self.proto_model.int64Value6 = self.value
        self.proto_model.int64Value7 = self.value
        self.proto_model.int64Value8 = self.value
        self.proto_model.int64Value9 = self.value
        self.proto_model.int64Value10 = self.value

        self.serialized = self.proto_model.SerializeToString()

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            serialized = self.proto_model.SerializeToString()
            exec_time += time.time() - tick
        print("Ten Int类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            json.dumps(self.json_model.__dict__)
            exec_time += time.time() - tick
        print("Ten Int类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.TenInt64Model()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("Ten Int类型 protobuf 解码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            boolModel = python_models.TenInt64Model(intValue=self.value) 
            boolModel.__dict__ = json.loads(self.json_model_str)
            exec_time += time.time() - tick
        print("Ten Int类型 json 解码用时: {}".format(exec_time))