#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2020/7/8 15:18 PM
# @Author  : MADAO
import unittest
from test_int import IntValueTestCase
from test_ten_int import TenIntValueTestCase
from test_double import DoubleValueTestCase
from test_ten_double import TenDoubleValueTestCase
from test_string import StringValueTestCase
from test_ten_string import TenStringValueTestCase
from test_list import IntListTestCase, FloatListTestCase, StringListTestCase
from test_object import ObjectValueTestCase, ObjectListTestCase

if __name__ == '__main__':
    suite = unittest.TestSuite()

    # # int
    # suite.addTest(IntValueTestCase("testEncode"))
    # suite.addTest(IntValueTestCase("testDecode"))

    # # Ten int
    # suite.addTest(TenIntValueTestCase("testEncode"))
    # suite.addTest(TenIntValueTestCase("testDecode"))

    # # double
    # suite.addTest(DoubleValueTestCase("testEncode"))
    # suite.addTest(DoubleValueTestCase("testDecode"))

    # # Ten double
    # suite.addTest(TenDoubleValueTestCase("testEncode"))
    # suite.addTest(TenDoubleValueTestCase("testDecode"))

    # # String
    # suite.addTest(StringValueTestCase("testEncode"))
    # suite.addTest(StringValueTestCase("testDecode"))

    # # Ten String
    # suite.addTest(TenStringValueTestCase("testEncode"))
    # suite.addTest(TenStringValueTestCase("testDecode"))

    # # list
    # suite.addTest(IntListTestCase("testEncode"))
    # suite.addTest(IntListTestCase("testDecode"))

    # suite.addTest(FloatListTestCase("testEncode"))
    # suite.addTest(FloatListTestCase("testDecode"))

    # suite.addTest(StringListTestCase("testEncode"))
    # suite.addTest(StringListTestCase("testDecode"))

    suite.addTest(ObjectValueTestCase("testEncode"))
    suite.addTest(ObjectValueTestCase("testDecode"))

    suite.addTest(ObjectListTestCase("testEncode"))
    suite.addTest(ObjectListTestCase("testDecode"))

    runner = unittest.TextTestRunner()
    runner.run(suite)
    
    # unittest.main() 
        