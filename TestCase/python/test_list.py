#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2020/7/8 15:18 PM
# @Author  : MADAO
from proto_models import testModel_pb2 as testProto
from python_models import python_models
import unittest
import time 
import json
from test_config import TIMES, TEST_INT_LIST, TEST_FLOAT_LIST, TEST_STRING_LIST

class IntListTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):
        self.json_model = python_models.IntListModel(TEST_INT_LIST)
        self.json_model_str = json.dumps(self.json_model.__dict__)

        self.proto_model = self.genIntListModel()
        self.serialized = self.proto_model.SerializeToString()

    def genIntListModel(self):
        '''
        生成listModel
        '''
        model = testProto.IntListModel()
        model.intValues.extend(TEST_INT_LIST) 
        return model

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = self.genIntListModel()
            serialized = proto_model.SerializeToString()
            exec_time += time.time() - tick
        print("int列表类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            json.dumps(self.json_model.__dict__)
            exec_time += time.time() - tick
        print("int列表类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.IntListModel()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("Int列表类型 protobuf 解码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            boolModel = python_models.IntListModel(TEST_INT_LIST) 
            boolModel.__dict__ = json.loads(self.json_model_str)
            exec_time += time.time() - tick
        print("Int列表类型 json 解码用时: {}".format(exec_time))


class FloatListTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):
        self.json_model = python_models.FloatListModel(TEST_FLOAT_LIST)
        self.json_model_str = json.dumps(self.json_model.__dict__)

        self.proto_model = self.genFloatListModel()
        self.serialized = self.proto_model.SerializeToString()

    def genFloatListModel(self):
        '''
        生成listModel
        '''
        model = testProto.FloatListModel()
        model.floatValues.extend(TEST_FLOAT_LIST) 
        return model

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = self.genFloatListModel()
            serialized = proto_model.SerializeToString()
            exec_time += time.time() - tick
        print("float列表类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            exec_time += time.time() - tick
        print("float列表类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.FloatListModel()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("float列表类型 protobuf 解码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            model = python_models.FloatListModel(TEST_FLOAT_LIST) 
            model.__dict__ = json.loads(self.json_model_str)
            exec_time += time.time() - tick
        print("float列表类型 json 解码用时: {}".format(exec_time))


class StringListTestCase(unittest.TestCase):
    test_times = TIMES

    def setUp(self):
        self.json_model = python_models.StringListModel(TEST_STRING_LIST)
        self.json_model_str = json.dumps(self.json_model.__dict__)

        self.proto_model = self.genStringListModel()
        self.serialized = self.proto_model.SerializeToString()

    def genStringListModel(self):
        '''
        生成listModel
        '''
        model = testProto.StringListModel()
        model.stringValues.extend(TEST_STRING_LIST) 
        return model

    def testEncode(self):
        '''
        编码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = self.genStringListModel()
            serialized = proto_model.SerializeToString()
            exec_time += time.time() - tick
        print("string列表类型 protobuf 编码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            exec_time += time.time() - tick
        print("string列表类型 json 编码用时: {}".format(exec_time))

    def testDecode(self):
        '''
        解码
        '''
        # protobuf
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            proto_model = testProto.StringListModel()
            serialized = proto_model.ParseFromString(self.serialized)
            exec_time += time.time() - tick
        print("string列表类型 protobuf 解码用时: {}".format(exec_time))

        # json
        exec_time = 0
        for _ in range(self.test_times):
            tick = time.time()
            model = python_models.StringListModel(TEST_STRING_LIST) 
            model.__dict__ = json.loads(self.json_model_str)
            exec_time += time.time() - tick
        print("string列表类型 json 解码用时: {}".format(exec_time))