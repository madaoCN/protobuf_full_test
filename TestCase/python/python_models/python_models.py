#!/usr/bin/env python
# -*- coding: utf-8 -*-

class IntModel():
    def __init__(self, intValue):
        self.intValue = intValue

class TenInt64Model():
    def __init__(self, intValue):
        self.intValue1 = intValue
        self.intValue2 = intValue
        self.intValue3 = intValue
        self.intValue4 = intValue
        self.intValue5 = intValue
        self.intValue6 = intValue

class DoubleModel():
    def __init__(self, doubleValue=0.0):
        self.doubleValue = doubleValue

class TenDoubleModel():
    def __init__(self, doubleValue=0.0):
        self.doubleValue1 = doubleValue
        self.doubleValue2 = doubleValue
        self.doubleValue3 = doubleValue
        self.doubleValue4 = doubleValue
        self.doubleValue5 = doubleValue
        self.doubleValue6 = doubleValue
        self.doubleValue7 = doubleValue
        self.doubleValue8 = doubleValue
        self.doubleValue9 = doubleValue
        self.doubleValue10 = doubleValue

class StringModel():
    def __init__(self, stringValue = ""):
        self.stringValue = stringValue

class TenStringModel():
    def __init__(self, stringValue = ""):
        self.stringValue1 = stringValue
        self.stringValue2 = stringValue
        self.stringValue3 = stringValue
        self.stringValue4 = stringValue
        self.stringValue5 = stringValue
        self.stringValue6 = stringValue
        self.stringValue7 = stringValue
        self.stringValue8 = stringValue
        self.stringValue9 = stringValue
        self.stringValue10 = stringValue

class IntListModel():
    def __init__(self, intList = []):
        self.intList = intList

class FloatListModel():
    def __init__(self, floatList = []):
        self.floatList = floatList

class StringListModel():
    def __init__(self, stringList = []):
        self.stringList = stringList

# 嵌套类型    
class PhoneNumber():
    def __init__(self, number = ""):
        self.number = number

    def __repr__(self):
        return repr((self.number))

class Person():
    def __init__(self, name = "", id = 0.0, email = "", phone = []):
        self.name = name
        self.id = id
        self.email = email
        self.phone = phone

class AddressBook():
    def __init__(self, people = []):
        self.people = people

def dictToObject(d, name="Person"):
    if isinstance(d, list):
        d = [dictToObject(x) for x in d]
    if not isinstance(d, dict):
        return d
    class C(object):
        pass
    o = C()
    for k in d:
        o.__dict__[k] = dictToObject(d[k])
    return o

# 字典转对象
# def dictToObject(d, name="object"):
#     from collections import namedtuple
#     for k,v in d.items():
#         if isinstance(v, dict):
#             d[k] = dictToObject(v)
#     return namedtuple(name, d.keys())(*d.values())

if __name__ == '__main__':
    import json

    # 序列化
    phone_list = [PhoneNumber(number="13055424951") for _ in range(10)]
    person = Person(phone=phone_list)
    json_str = json.dumps(person, default=lambda x : x.__dict__,)

    # 反序列化
    obj = dictToObject(json.loads(json_str), name="Person")
    print(obj)
    print(obj.id)