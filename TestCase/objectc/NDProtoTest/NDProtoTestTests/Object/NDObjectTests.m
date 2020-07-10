//
//  NDObjectTests.m
//  NDProtoTestTests
//
//  Created by 梁宪松 on 2020/7/10.
//  Copyright © 2020 madao. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "NDAddressBook.h"
#import "TestModel.pbobjc.h"
#import "NDTestConfig.h"

@interface NDObjectTests : XCTestCase

/// 执行时间
@property (nonatomic, assign) CFAbsoluteTime execTime;

@property (nonatomic, assign) NSInteger testTimes;

@property (nonatomic, strong) NDAddressBook *addressBook;

@property (nonatomic, strong) NDPerson *person;

@end

@implementation NDObjectTests

- (void)setUp {
    
    self.testTimes = TEST_TIMES;
    self.execTime = 0;
    
    self.person = [[NDPerson alloc] init];
    self.addressBook = [[NDAddressBook alloc] init];
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)resetExecTime
{
    self.execTime = 0;
}

- (Person *)generatePerson
{
    Person *model = [[Person alloc] init];
    model.email = self.person.email;
    model.id_p = self.person.id_;
    model.name = self.person.name;
    for (NDPhoneNumber *pNumber in self.person.phoneArray) {
        Person_PhoneNumber *protoPNumber = [[Person_PhoneNumber alloc] init];
        protoPNumber.number = pNumber.number;
        [model.phoneArray addObject:protoPNumber];
    }
    return model;
}

- (AddressBook *)generateAddressBook
{
    AddressBook *book = [[AddressBook alloc] init];
    for (NDPerson *p in self.addressBook.personArray) {
        
        [book.personArray addObject:[self generatePerson]];
    }
    return book;
}

- (void)testObjectModel
{
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        Person *model = [self generatePerson];
        protoData = [model data];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        Person *model = [[Person alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDPerson *model = [[NDPerson alloc] init];
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDPerson *model = [NDPerson yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDPerson *model = [[NDPerson alloc] init];
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDPerson *model = [NDPerson mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象 类型MJExtension 解码时间: %f", self.execTime);
}

- (void)testObjectListModel
{
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        AddressBook *model = [self generateAddressBook];
        protoData = [model data];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        AddressBook *model = [[AddressBook alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDAddressBook *model = [[NDAddressBook alloc] init];
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDAddressBook *model = [NDAddressBook yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDAddressBook *model = [[NDAddressBook alloc] init];
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDAddressBook *model = [NDAddressBook mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"对象列表 类型MJExtension 解码时间: %f", self.execTime);
}
@end
