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

class DoubleValueTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):
        self.value = 99999.99999
        self.json_model = python_models.DoubleModel(doubleValue=self.value)
        self.json_model_str = json.dumps(self.json_model.__dict__)

        self.proto_model = testProto.DoubleModel()
        self.proto_model.doubleValue = self.value
        self.serialized = self.proto_model.SerializeToString()

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.DoubleModel()
            proto_model.doubleValue = self.value
            serialized = proto_model.SerializeToString()
            exec_time += time.time() - tick
        print("double类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            json.dumps(self.json_model.__dict__)
            exec_time += time.time() - tick
        print("double类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.DoubleModel()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("double类型 protobuf 解码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            boolModel = python_models.DoubleModel(doubleValue=self.value) 
            boolModel.__dict__ = json.loads(self.json_model_str)
            exec_time += time.time() - tick
        print("double类型 json 解码用时: {}".format(exec_time))