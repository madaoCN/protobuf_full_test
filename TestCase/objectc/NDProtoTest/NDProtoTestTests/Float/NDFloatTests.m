//
//  NDFloatTests.m
//  NDProtoTestTests
//
//  Created by 梁宪松 on 2020/7/9.
//  Copyright © 2020 madao. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "NDDoubleModel.h"
#import "NDTenDoubleModel.h"
#import "TestModel.pbobjc.h"
#import "NDTestConfig.h"

@interface NDFloatTests : XCTestCase

/// 执行时间
@property (nonatomic, assign) CFAbsoluteTime execTime;

@property (nonatomic, assign) NSInteger testTimes;

@property (nonatomic, assign) double doubleValue;

@end

@implementation NDFloatTests

- (void)setUp {
    
    self.testTimes = TEST_TIMES;
    self.execTime = 0;
    self.doubleValue = DOUBLE_VALUE;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)resetExecTime
{
    self.execTime = 0;
}

- (void)testDoubleModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        DoubleModel *model = [[DoubleModel alloc] init];
        model.doubleValue = self.doubleValue;
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        DoubleModel *model = [[DoubleModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDDoubleModel *model = [[NDDoubleModel alloc] init];
        model.doubleValue = self.doubleValue;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDDoubleModel *model = [NDDoubleModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDDoubleModel *model = [[NDDoubleModel alloc] init];
        model.doubleValue = self.doubleValue;
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDDoubleModel *model = [NDDoubleModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Double 类型MJExtension 解码时间: %f", self.execTime);
}


- (void)testTenDoubleModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        TenDoubleModel *model = [[TenDoubleModel alloc] init];
        model.doubleValue1 = self.doubleValue;
        model.doubleValue2 = self.doubleValue;
        model.doubleValue3 = self.doubleValue;
        model.doubleValue4 = self.doubleValue;
        model.doubleValue5 = self.doubleValue;
        model.doubleValue6 = self.doubleValue;
        model.doubleValue7 = self.doubleValue;
        model.doubleValue8 = self.doubleValue;
        model.doubleValue9 = self.doubleValue;
        model.doubleValue10 = self.doubleValue;

        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        TenDoubleModel *model = [[TenDoubleModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenDoubleModel *model = [[NDTenDoubleModel alloc] init];
        model.doubleValue1 = self.doubleValue;
        model.doubleValue2 = self.doubleValue;
        model.doubleValue3 = self.doubleValue;
        model.doubleValue4 = self.doubleValue;
        model.doubleValue5 = self.doubleValue;
        model.doubleValue6 = self.doubleValue;
        model.doubleValue7 = self.doubleValue;
        model.doubleValue8 = self.doubleValue;
        model.doubleValue9 = self.doubleValue;
        model.doubleValue10 = self.doubleValue;
        
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenDoubleModel *model = [NDTenDoubleModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenDoubleModel *model = [[NDTenDoubleModel alloc] init];
        model.doubleValue1 = self.doubleValue;
        model.doubleValue2 = self.doubleValue;
        model.doubleValue3 = self.doubleValue;
        model.doubleValue4 = self.doubleValue;
        model.doubleValue5 = self.doubleValue;
        model.doubleValue6 = self.doubleValue;
        model.doubleValue7 = self.doubleValue;
        model.doubleValue8 = self.doubleValue;
        model.doubleValue9 = self.doubleValue;
        model.doubleValue10 = self.doubleValue;
        
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDTenDoubleModel *model = [NDTenDoubleModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Ten Double 类型MJExtension 解码时间: %f", self.execTime);
}
@end
