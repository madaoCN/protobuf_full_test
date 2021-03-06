# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto_models/testModel.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto_models/testModel.proto',
  package='testModel',
  syntax='proto3',
  serialized_options=b'H\001',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1cproto_models/testModel.proto\x12\ttestModel\" \n\nInt64Model\x12\x12\n\nint64Value\x18\x01 \x01(\x03\"\xe2\x01\n\rTenInt64Model\x12\x13\n\x0bint64Value1\x18\x01 \x01(\x03\x12\x13\n\x0bint64Value2\x18\x02 \x01(\x03\x12\x13\n\x0bint64Value3\x18\x03 \x01(\x03\x12\x13\n\x0bint64Value4\x18\x04 \x01(\x03\x12\x13\n\x0bint64Value5\x18\x05 \x01(\x03\x12\x13\n\x0bint64Value6\x18\x06 \x01(\x03\x12\x13\n\x0bint64Value7\x18\x07 \x01(\x03\x12\x13\n\x0bint64Value8\x18\x08 \x01(\x03\x12\x13\n\x0bint64Value9\x18\t \x01(\x03\x12\x14\n\x0cint64Value10\x18\n \x01(\x03\"\"\n\x0b\x44oubleModel\x12\x13\n\x0b\x64oubleValue\x18\x01 \x01(\x01\"\xed\x01\n\x0eTenDoubleModel\x12\x14\n\x0c\x64oubleValue1\x18\x01 \x01(\x01\x12\x14\n\x0c\x64oubleValue2\x18\x02 \x01(\x01\x12\x14\n\x0c\x64oubleValue3\x18\x03 \x01(\x01\x12\x14\n\x0c\x64oubleValue4\x18\x04 \x01(\x01\x12\x14\n\x0c\x64oubleValue5\x18\x05 \x01(\x01\x12\x14\n\x0c\x64oubleValue6\x18\x06 \x01(\x01\x12\x14\n\x0c\x64oubleValue7\x18\x07 \x01(\x01\x12\x14\n\x0c\x64oubleValue8\x18\x08 \x01(\x01\x12\x14\n\x0c\x64oubleValue9\x18\t \x01(\x01\x12\x15\n\rdoubleValue10\x18\n \x01(\x01\"\"\n\x0bStringModel\x12\x13\n\x0bstringValue\x18\x01 \x01(\t\"\xed\x01\n\x0eTenStringModel\x12\x14\n\x0cstringValue1\x18\x01 \x01(\t\x12\x14\n\x0cstringValue2\x18\x02 \x01(\t\x12\x14\n\x0cstringValue3\x18\x03 \x01(\t\x12\x14\n\x0cstringValue4\x18\x04 \x01(\t\x12\x14\n\x0cstringValue5\x18\x05 \x01(\t\x12\x14\n\x0cstringValue6\x18\x06 \x01(\t\x12\x14\n\x0cstringValue7\x18\x07 \x01(\t\x12\x14\n\x0cstringValue8\x18\x08 \x01(\t\x12\x14\n\x0cstringValue9\x18\t \x01(\t\x12\x15\n\rstringValue10\x18\n \x01(\t\"%\n\x0cIntListModel\x12\x15\n\tintValues\x18\x01 \x03(\x05\x42\x02\x10\x01\")\n\x0e\x46loatListModel\x12\x17\n\x0b\x66loatValues\x18\x01 \x03(\x02\x42\x02\x10\x01\"\'\n\x0fStringListModel\x12\x14\n\x0cstringValues\x18\x01 \x03(\t\"~\n\x06Person\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\n\n\x02id\x18\x02 \x01(\x02\x12\r\n\x05\x65mail\x18\x03 \x01(\t\x12,\n\x05phone\x18\x04 \x03(\x0b\x32\x1d.testModel.Person.PhoneNumber\x1a\x1d\n\x0bPhoneNumber\x12\x0e\n\x06number\x18\x01 \x01(\t\"0\n\x0b\x41\x64\x64ressBook\x12!\n\x06person\x18\x01 \x03(\x0b\x32\x11.testModel.PersonB\x02H\x01\x62\x06proto3'
)




_INT64MODEL = _descriptor.Descriptor(
  name='Int64Model',
  full_name='testModel.Int64Model',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='int64Value', full_name='testModel.Int64Model.int64Value', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=43,
  serialized_end=75,
)


_TENINT64MODEL = _descriptor.Descriptor(
  name='TenInt64Model',
  full_name='testModel.TenInt64Model',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='int64Value1', full_name='testModel.TenInt64Model.int64Value1', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value2', full_name='testModel.TenInt64Model.int64Value2', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value3', full_name='testModel.TenInt64Model.int64Value3', index=2,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value4', full_name='testModel.TenInt64Model.int64Value4', index=3,
      number=4, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value5', full_name='testModel.TenInt64Model.int64Value5', index=4,
      number=5, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value6', full_name='testModel.TenInt64Model.int64Value6', index=5,
      number=6, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value7', full_name='testModel.TenInt64Model.int64Value7', index=6,
      number=7, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value8', full_name='testModel.TenInt64Model.int64Value8', index=7,
      number=8, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value9', full_name='testModel.TenInt64Model.int64Value9', index=8,
      number=9, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='int64Value10', full_name='testModel.TenInt64Model.int64Value10', index=9,
      number=10, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=78,
  serialized_end=304,
)


_DOUBLEMODEL = _descriptor.Descriptor(
  name='DoubleModel',
  full_name='testModel.DoubleModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='doubleValue', full_name='testModel.DoubleModel.doubleValue', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=306,
  serialized_end=340,
)


_TENDOUBLEMODEL = _descriptor.Descriptor(
  name='TenDoubleModel',
  full_name='testModel.TenDoubleModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='doubleValue1', full_name='testModel.TenDoubleModel.doubleValue1', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue2', full_name='testModel.TenDoubleModel.doubleValue2', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue3', full_name='testModel.TenDoubleModel.doubleValue3', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue4', full_name='testModel.TenDoubleModel.doubleValue4', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue5', full_name='testModel.TenDoubleModel.doubleValue5', index=4,
      number=5, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue6', full_name='testModel.TenDoubleModel.doubleValue6', index=5,
      number=6, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue7', full_name='testModel.TenDoubleModel.doubleValue7', index=6,
      number=7, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue8', full_name='testModel.TenDoubleModel.doubleValue8', index=7,
      number=8, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue9', full_name='testModel.TenDoubleModel.doubleValue9', index=8,
      number=9, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='doubleValue10', full_name='testModel.TenDoubleModel.doubleValue10', index=9,
      number=10, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=343,
  serialized_end=580,
)


_STRINGMODEL = _descriptor.Descriptor(
  name='StringModel',
  full_name='testModel.StringModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stringValue', full_name='testModel.StringModel.stringValue', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=582,
  serialized_end=616,
)


_TENSTRINGMODEL = _descriptor.Descriptor(
  name='TenStringModel',
  full_name='testModel.TenStringModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stringValue1', full_name='testModel.TenStringModel.stringValue1', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue2', full_name='testModel.TenStringModel.stringValue2', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue3', full_name='testModel.TenStringModel.stringValue3', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue4', full_name='testModel.TenStringModel.stringValue4', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue5', full_name='testModel.TenStringModel.stringValue5', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue6', full_name='testModel.TenStringModel.stringValue6', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue7', full_name='testModel.TenStringModel.stringValue7', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue8', full_name='testModel.TenStringModel.stringValue8', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue9', full_name='testModel.TenStringModel.stringValue9', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stringValue10', full_name='testModel.TenStringModel.stringValue10', index=9,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=619,
  serialized_end=856,
)


_INTLISTMODEL = _descriptor.Descriptor(
  name='IntListModel',
  full_name='testModel.IntListModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='intValues', full_name='testModel.IntListModel.intValues', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=858,
  serialized_end=895,
)


_FLOATLISTMODEL = _descriptor.Descriptor(
  name='FloatListModel',
  full_name='testModel.FloatListModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='floatValues', full_name='testModel.FloatListModel.floatValues', index=0,
      number=1, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=897,
  serialized_end=938,
)


_STRINGLISTMODEL = _descriptor.Descriptor(
  name='StringListModel',
  full_name='testModel.StringListModel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stringValues', full_name='testModel.StringListModel.stringValues', index=0,
      number=1, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=940,
  serialized_end=979,
)


_PERSON_PHONENUMBER = _descriptor.Descriptor(
  name='PhoneNumber',
  full_name='testModel.Person.PhoneNumber',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='number', full_name='testModel.Person.PhoneNumber.number', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1078,
  serialized_end=1107,
)

_PERSON = _descriptor.Descriptor(
  name='Person',
  full_name='testModel.Person',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='testModel.Person.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='id', full_name='testModel.Person.id', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='email', full_name='testModel.Person.email', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='phone', full_name='testModel.Person.phone', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[_PERSON_PHONENUMBER, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=981,
  serialized_end=1107,
)


_ADDRESSBOOK = _descriptor.Descriptor(
  name='AddressBook',
  full_name='testModel.AddressBook',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='person', full_name='testModel.AddressBook.person', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1109,
  serialized_end=1157,
)

_PERSON_PHONENUMBER.containing_type = _PERSON
_PERSON.fields_by_name['phone'].message_type = _PERSON_PHONENUMBER
_ADDRESSBOOK.fields_by_name['person'].message_type = _PERSON
DESCRIPTOR.message_types_by_name['Int64Model'] = _INT64MODEL
DESCRIPTOR.message_types_by_name['TenInt64Model'] = _TENINT64MODEL
DESCRIPTOR.message_types_by_name['DoubleModel'] = _DOUBLEMODEL
DESCRIPTOR.message_types_by_name['TenDoubleModel'] = _TENDOUBLEMODEL
DESCRIPTOR.message_types_by_name['StringModel'] = _STRINGMODEL
DESCRIPTOR.message_types_by_name['TenStringModel'] = _TENSTRINGMODEL
DESCRIPTOR.message_types_by_name['IntListModel'] = _INTLISTMODEL
DESCRIPTOR.message_types_by_name['FloatListModel'] = _FLOATLISTMODEL
DESCRIPTOR.message_types_by_name['StringListModel'] = _STRINGLISTMODEL
DESCRIPTOR.message_types_by_name['Person'] = _PERSON
DESCRIPTOR.message_types_by_name['AddressBook'] = _ADDRESSBOOK
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Int64Model = _reflection.GeneratedProtocolMessageType('Int64Model', (_message.Message,), {
  'DESCRIPTOR' : _INT64MODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.Int64Model)
  })
_sym_db.RegisterMessage(Int64Model)

TenInt64Model = _reflection.GeneratedProtocolMessageType('TenInt64Model', (_message.Message,), {
  'DESCRIPTOR' : _TENINT64MODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.TenInt64Model)
  })
_sym_db.RegisterMessage(TenInt64Model)

DoubleModel = _reflection.GeneratedProtocolMessageType('DoubleModel', (_message.Message,), {
  'DESCRIPTOR' : _DOUBLEMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.DoubleModel)
  })
_sym_db.RegisterMessage(DoubleModel)

TenDoubleModel = _reflection.GeneratedProtocolMessageType('TenDoubleModel', (_message.Message,), {
  'DESCRIPTOR' : _TENDOUBLEMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.TenDoubleModel)
  })
_sym_db.RegisterMessage(TenDoubleModel)

StringModel = _reflection.GeneratedProtocolMessageType('StringModel', (_message.Message,), {
  'DESCRIPTOR' : _STRINGMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.StringModel)
  })
_sym_db.RegisterMessage(StringModel)

TenStringModel = _reflection.GeneratedProtocolMessageType('TenStringModel', (_message.Message,), {
  'DESCRIPTOR' : _TENSTRINGMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.TenStringModel)
  })
_sym_db.RegisterMessage(TenStringModel)

IntListModel = _reflection.GeneratedProtocolMessageType('IntListModel', (_message.Message,), {
  'DESCRIPTOR' : _INTLISTMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.IntListModel)
  })
_sym_db.RegisterMessage(IntListModel)

FloatListModel = _reflection.GeneratedProtocolMessageType('FloatListModel', (_message.Message,), {
  'DESCRIPTOR' : _FLOATLISTMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.FloatListModel)
  })
_sym_db.RegisterMessage(FloatListModel)

StringListModel = _reflection.GeneratedProtocolMessageType('StringListModel', (_message.Message,), {
  'DESCRIPTOR' : _STRINGLISTMODEL,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.StringListModel)
  })
_sym_db.RegisterMessage(StringListModel)

Person = _reflection.GeneratedProtocolMessageType('Person', (_message.Message,), {

  'PhoneNumber' : _reflection.GeneratedProtocolMessageType('PhoneNumber', (_message.Message,), {
    'DESCRIPTOR' : _PERSON_PHONENUMBER,
    '__module__' : 'proto_models.testModel_pb2'
    # @@protoc_insertion_point(class_scope:testModel.Person.PhoneNumber)
    })
  ,
  'DESCRIPTOR' : _PERSON,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.Person)
  })
_sym_db.RegisterMessage(Person)
_sym_db.RegisterMessage(Person.PhoneNumber)

AddressBook = _reflection.GeneratedProtocolMessageType('AddressBook', (_message.Message,), {
  'DESCRIPTOR' : _ADDRESSBOOK,
  '__module__' : 'proto_models.testModel_pb2'
  # @@protoc_insertion_point(class_scope:testModel.AddressBook)
  })
_sym_db.RegisterMessage(AddressBook)


DESCRIPTOR._options = None
_INTLISTMODEL.fields_by_name['intValues']._options = None
_FLOATLISTMODEL.fields_by_name['floatValues']._options = None
# @@protoc_insertion_point(module_scope)
