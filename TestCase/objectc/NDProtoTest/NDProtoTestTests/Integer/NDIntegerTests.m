//
//  NDIntegerTests.m
//  NDProtoTestTests
//
//  Created by 梁宪松 on 2020/7/9.
//  Copyright © 2020 madao. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "NDInt64Model.h"
#import "NDTenInt64Model.h"
#import "TestModel.pbobjc.h"
#import "NDTestConfig.h"

@interface NDIntegerTests : XCTestCase

/// 执行时间
@property (nonatomic, assign) CFAbsoluteTime execTime;

@property (nonatomic, assign) NSInteger testTimes;

@end

@implementation NDIntegerTests

- (void)setUp {
    
    self.testTimes = TEST_TIMES;
    self.execTime = 0;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)resetExecTime
{
    self.execTime = 0;
}

- (void)testInt64Model {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        Int64Model *model = [[Int64Model alloc] init];
        model.int64Value = INT_VALUE;
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        Int64Model *model = [[Int64Model alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDInt64Model *model = [[NDInt64Model alloc] init];
        model.int64Value = INT_VALUE;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDInt64Model *model = [NDInt64Model yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDInt64Model *model = [[NDInt64Model alloc] init];
        model.int64Value = INT_VALUE;
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDInt64Model *model = [NDInt64Model mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int 类型MJExtension 解码时间: %f", self.execTime);
}

- (void)testTenIntModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        TenInt64Model *model = [[TenInt64Model alloc] init];
        model.int64Value1 = INT_VALUE;
        model.int64Value2 = INT_VALUE;
        model.int64Value3 = INT_VALUE;
        model.int64Value4 = INT_VALUE;
        model.int64Value5 = INT_VALUE;
        model.int64Value6 = INT_VALUE;
        model.int64Value7 = INT_VALUE;
        model.int64Value8 = INT_VALUE;
        model.int64Value9 = INT_VALUE;
        model.int64Value10 = INT_VALUE;
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        TenInt64Model *model = [[TenInt64Model alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDTenInt64Model *model = [[NDTenInt64Model alloc] init];
        model.int64Value1 = INT_VALUE;
        model.int64Value2 = INT_VALUE;
        model.int64Value3 = INT_VALUE;
        model.int64Value4 = INT_VALUE;
        model.int64Value5 = INT_VALUE;
        model.int64Value6 = INT_VALUE;
        model.int64Value7 = INT_VALUE;
        model.int64Value8 = INT_VALUE;
        model.int64Value9 = INT_VALUE;
        model.int64Value10 = INT_VALUE;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenInt64Model *model = [NDTenInt64Model yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDTenInt64Model *model = [[NDTenInt64Model alloc] init];
        model.int64Value1 = INT_VALUE;
        model.int64Value2 = INT_VALUE;
        model.int64Value3 = INT_VALUE;
        model.int64Value4 = INT_VALUE;
        model.int64Value5 = INT_VALUE;
        model.int64Value6 = INT_VALUE;
        model.int64Value7 = INT_VALUE;
        model.int64Value8 = INT_VALUE;
        model.int64Value9 = INT_VALUE;
        model.int64Value10 = INT_VALUE;
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenInt64Model *model = [NDTenInt64Model mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Int 类型MJExtension 解码时间: %f", self.execTime);
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
        NSLog(@"test");
    }];
}

@end
