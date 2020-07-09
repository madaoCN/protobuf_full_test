//
//  NDStringTests.m
//  NDProtoTestTests
//
//  Created by 梁宪松 on 2020/7/9.
//  Copyright © 2020 madao. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "NDStringModel.h"
#import "NDTenStringModel.h"
#import "TestModel.pbobjc.h"
#import "NDTestConfig.h"

@interface NDStringTests : XCTestCase

/// 执行时间
@property (nonatomic, assign) CFAbsoluteTime execTime;

@property (nonatomic, assign) NSInteger testTimes;

@property (nonatomic, strong) NSString *stringValue;

@end

@implementation NDStringTests

- (void)setUp {
    
    self.testTimes = TEST_TIMES;
    self.execTime = 0;
    self.stringValue = STRING_VALUE;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)resetExecTime
{
    self.execTime = 0;
}

- (void)testStringModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        StringModel *model = [[StringModel alloc] init];
        model.stringValue = self.stringValue;
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        StringModel *model = [[StringModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDStringModel *model = [[NDStringModel alloc] init];
        model.stringValue = self.stringValue;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDStringModel *model = [NDStringModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDStringModel *model = [[NDStringModel alloc] init];
        model.stringValue = self.stringValue;
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDStringModel *model = [NDStringModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String 类型MJExtension 解码时间: %f", self.execTime);
}

- (void)testTenStringModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        TenStringModel *model = [[TenStringModel alloc] init];
        model.stringValue1 = self.stringValue;
        model.stringValue2 = self.stringValue;
        model.stringValue3 = self.stringValue;
        model.stringValue4 = self.stringValue;
        model.stringValue5 = self.stringValue;
        model.stringValue6 = self.stringValue;
        model.stringValue7 = self.stringValue;
        model.stringValue8 = self.stringValue;
        model.stringValue9 = self.stringValue;
        model.stringValue10 = self.stringValue;

        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        TenStringModel *model = [[TenStringModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenStringModel *model = [[NDTenStringModel alloc] init];
        model.stringValue1 = self.stringValue;
        model.stringValue2 = self.stringValue;
        model.stringValue3 = self.stringValue;
        model.stringValue4 = self.stringValue;
        model.stringValue5 = self.stringValue;
        model.stringValue6 = self.stringValue;
        model.stringValue7 = self.stringValue;
        model.stringValue8 = self.stringValue;
        model.stringValue9 = self.stringValue;
        model.stringValue10 = self.stringValue;
        
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenStringModel *model = [NDTenStringModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenStringModel *model = [[NDTenStringModel alloc] init];
        model.stringValue1 = self.stringValue;
        model.stringValue2 = self.stringValue;
        model.stringValue3 = self.stringValue;
        model.stringValue4 = self.stringValue;
        model.stringValue5 = self.stringValue;
        model.stringValue6 = self.stringValue;
        model.stringValue7 = self.stringValue;
        model.stringValue8 = self.stringValue;
        model.stringValue9 = self.stringValue;
        model.stringValue10 = self.stringValue;
        
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenStringModel *model = [NDTenStringModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten String 类型MJExtension 解码时间: %f", self.execTime);
}
@end
