// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_models/testModel.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Person;
@class Person_PhoneNumber;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - TestModelRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface TestModelRoot : GPBRootObject
@end

#pragma mark - Int64Model

typedef GPB_ENUM(Int64Model_FieldNumber) {
  Int64Model_FieldNumber_Int64Value = 1,
};

GPB_FINAL @interface Int64Model : GPBMessage

@property(nonatomic, readwrite) int64_t int64Value;

@end

#pragma mark - TenInt64Model

typedef GPB_ENUM(TenInt64Model_FieldNumber) {
  TenInt64Model_FieldNumber_Int64Value1 = 1,
  TenInt64Model_FieldNumber_Int64Value2 = 2,
  TenInt64Model_FieldNumber_Int64Value3 = 3,
  TenInt64Model_FieldNumber_Int64Value4 = 4,
  TenInt64Model_FieldNumber_Int64Value5 = 5,
  TenInt64Model_FieldNumber_Int64Value6 = 6,
  TenInt64Model_FieldNumber_Int64Value7 = 7,
  TenInt64Model_FieldNumber_Int64Value8 = 8,
  TenInt64Model_FieldNumber_Int64Value9 = 9,
  TenInt64Model_FieldNumber_Int64Value10 = 10,
};

GPB_FINAL @interface TenInt64Model : GPBMessage

@property(nonatomic, readwrite) int64_t int64Value1;

@property(nonatomic, readwrite) int64_t int64Value2;

@property(nonatomic, readwrite) int64_t int64Value3;

@property(nonatomic, readwrite) int64_t int64Value4;

@property(nonatomic, readwrite) int64_t int64Value5;

@property(nonatomic, readwrite) int64_t int64Value6;

@property(nonatomic, readwrite) int64_t int64Value7;

@property(nonatomic, readwrite) int64_t int64Value8;

@property(nonatomic, readwrite) int64_t int64Value9;

@property(nonatomic, readwrite) int64_t int64Value10;

@end

#pragma mark - DoubleModel

typedef GPB_ENUM(DoubleModel_FieldNumber) {
  DoubleModel_FieldNumber_DoubleValue = 1,
};

GPB_FINAL @interface DoubleModel : GPBMessage

@property(nonatomic, readwrite) double doubleValue;

@end

#pragma mark - TenDoubleModel

typedef GPB_ENUM(TenDoubleModel_FieldNumber) {
  TenDoubleModel_FieldNumber_DoubleValue1 = 1,
  TenDoubleModel_FieldNumber_DoubleValue2 = 2,
  TenDoubleModel_FieldNumber_DoubleValue3 = 3,
  TenDoubleModel_FieldNumber_DoubleValue4 = 4,
  TenDoubleModel_FieldNumber_DoubleValue5 = 5,
  TenDoubleModel_FieldNumber_DoubleValue6 = 6,
  TenDoubleModel_FieldNumber_DoubleValue7 = 7,
  TenDoubleModel_FieldNumber_DoubleValue8 = 8,
  TenDoubleModel_FieldNumber_DoubleValue9 = 9,
  TenDoubleModel_FieldNumber_DoubleValue10 = 10,
};

GPB_FINAL @interface TenDoubleModel : GPBMessage

@property(nonatomic, readwrite) double doubleValue1;

@property(nonatomic, readwrite) double doubleValue2;

@property(nonatomic, readwrite) double doubleValue3;

@property(nonatomic, readwrite) double doubleValue4;

@property(nonatomic, readwrite) double doubleValue5;

@property(nonatomic, readwrite) double doubleValue6;

@property(nonatomic, readwrite) double doubleValue7;

@property(nonatomic, readwrite) double doubleValue8;

@property(nonatomic, readwrite) double doubleValue9;

@property(nonatomic, readwrite) double doubleValue10;

@end

#pragma mark - StringModel

typedef GPB_ENUM(StringModel_FieldNumber) {
  StringModel_FieldNumber_StringValue = 1,
};

/**
 * 单个字符串
 **/
GPB_FINAL @interface StringModel : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue;

@end

#pragma mark - TenStringModel

typedef GPB_ENUM(TenStringModel_FieldNumber) {
  TenStringModel_FieldNumber_StringValue1 = 1,
  TenStringModel_FieldNumber_StringValue2 = 2,
  TenStringModel_FieldNumber_StringValue3 = 3,
  TenStringModel_FieldNumber_StringValue4 = 4,
  TenStringModel_FieldNumber_StringValue5 = 5,
  TenStringModel_FieldNumber_StringValue6 = 6,
  TenStringModel_FieldNumber_StringValue7 = 7,
  TenStringModel_FieldNumber_StringValue8 = 8,
  TenStringModel_FieldNumber_StringValue9 = 9,
  TenStringModel_FieldNumber_StringValue10 = 10,
};

/**
 * 10个字符串
 **/
GPB_FINAL @interface TenStringModel : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue1;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue2;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue3;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue4;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue5;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue6;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue7;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue8;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue9;

@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue10;

@end

#pragma mark - IntListModel

typedef GPB_ENUM(IntListModel_FieldNumber) {
  IntListModel_FieldNumber_IntValuesArray = 1,
};

/**
 * 列表数据
 **/
GPB_FINAL @interface IntListModel : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *intValuesArray;
/** The number of items in @c intValuesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger intValuesArray_Count;

@end

#pragma mark - FloatListModel

typedef GPB_ENUM(FloatListModel_FieldNumber) {
  FloatListModel_FieldNumber_FloatValuesArray = 1,
};

/**
 * 浮点数列表
 **/
GPB_FINAL @interface FloatListModel : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBFloatArray *floatValuesArray;
/** The number of items in @c floatValuesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger floatValuesArray_Count;

@end

#pragma mark - StringListModel

typedef GPB_ENUM(StringListModel_FieldNumber) {
  StringListModel_FieldNumber_StringValuesArray = 1,
};

/**
 * 字符串列表
 **/
GPB_FINAL @interface StringListModel : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *stringValuesArray;
/** The number of items in @c stringValuesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger stringValuesArray_Count;

@end

#pragma mark - Person

typedef GPB_ENUM(Person_FieldNumber) {
  Person_FieldNumber_Name = 1,
  Person_FieldNumber_Id_p = 2,
  Person_FieldNumber_Email = 3,
  Person_FieldNumber_PhoneArray = 4,
};

/**
 * 嵌套
 **/
GPB_FINAL @interface Person : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) float id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *email;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Person_PhoneNumber*> *phoneArray;
/** The number of items in @c phoneArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger phoneArray_Count;

@end

#pragma mark - Person_PhoneNumber

typedef GPB_ENUM(Person_PhoneNumber_FieldNumber) {
  Person_PhoneNumber_FieldNumber_Number = 1,
};

GPB_FINAL @interface Person_PhoneNumber : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *number;

@end

#pragma mark - AddressBook

typedef GPB_ENUM(AddressBook_FieldNumber) {
  AddressBook_FieldNumber_PersonArray = 1,
};

GPB_FINAL @interface AddressBook : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Person*> *personArray;
/** The number of items in @c personArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger personArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
