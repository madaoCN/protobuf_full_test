//
//  NDListTests.m
//  NDProtoTestTests
//
//  Created by 梁宪松 on 2020/7/9.
//  Copyright © 2020 madao. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "NDIntListModel.h"
#import "NDFloatListModel.h"
#import "NDStringListModel.h"
#import "TestModel.pbobjc.h"
#import "NDTestConfig.h"

@interface NDListTests : XCTestCase

/// 执行时间
@property (nonatomic, assign) CFAbsoluteTime execTime;

@property (nonatomic, assign) NSInteger testTimes;

@property (nonatomic, strong) NSNumber *intValue;

@property (nonatomic, strong) NSNumber *floatValue;

@property (nonatomic, strong) NSString *stringValue;

@property (nonatomic, assign) NSInteger dataSize;

@property (nonatomic, strong) NSArray<NSNumber *> *intValues;

@property (nonatomic, strong) NSArray<NSNumber *> *floatValues;

@property (nonatomic, strong) NSArray<NSString *> *stringValues;

@end

@implementation NDListTests

- (void)setUp {
    
    self.testTimes = TEST_TIMES;
    self.execTime = 0;
    self.intValue = [NSNumber numberWithInt:INT_VALUE];;
    self.floatValue = [NSNumber numberWithFloat:DOUBLE_VALUE];
    self.stringValue = STRING_VALUE;
    self.dataSize = TEST_DATA_SIZE;
    
    NSMutableArray<NSNumber *> *intValues = [[NSMutableArray alloc] init];
    NSMutableArray<NSNumber *> *floatValues = [[NSMutableArray alloc] init];
    NSMutableArray<NSString *> *stringValues = [[NSMutableArray alloc] init];
    for (int i = 0; i < self.dataSize; i ++) {
        [intValues addObject:self.intValue];
        [floatValues addObject:self.floatValue];
        [stringValues addObject:self.stringValue];
    }
    
    self.intValues = intValues;
    self.stringValues = stringValues;
    self.stringValues = stringValues;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)resetExecTime
{
    self.execTime = 0;
}

- (void)testIntListModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        IntListModel *model = [[IntListModel alloc] init];
        
        for (int i = 0; i < self.dataSize; i++) {
            [model.intValuesArray addValue:INT_VALUE];
        }
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        Int64Model *model = [[Int64Model alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDIntListModel *model = [[NDIntListModel alloc] init];
        model.intValues = self.intValues;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDIntListModel *model = [NDIntListModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDIntListModel *model = [[NDIntListModel alloc] init];
        model.intValues = self.intValues;
        
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDIntListModel *model = [NDIntListModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Int列表 类型MJExtension 解码时间: %f", self.execTime);
}

- (void)testFloatListModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        FloatListModel *model = [[FloatListModel alloc] init];
        
        for (int i = 0; i < self.dataSize; i++) {
            [model.floatValuesArray addValue:self.floatValue.floatValue];
        }
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        FloatListModel *model = [[FloatListModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDFloatListModel *model = [[NDFloatListModel alloc] init];
        model.floatValues = self.floatValues;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDFloatListModel *model = [NDFloatListModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDFloatListModel *model = [[NDFloatListModel alloc] init];
        model.floatValues = self.floatValues;
        
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDFloatListModel *model = [NDFloatListModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"Float列表 类型MJExtension 解码时间: %f", self.execTime);
}


- (void)testStringListModel {
    
    // -------------  protobuf -------------
    [self resetExecTime];
    NSData *protoData = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        StringListModel *model = [[StringListModel alloc] init];
        
        for (int i = 0; i < self.dataSize; i++) {
            [model.stringValuesArray addObject:self.stringValue];
        }
        protoData = [model data];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型protobuf 编码时间: %f", self.execTime);
    
    [self resetExecTime];
    // 解码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        StringListModel *model = [[StringListModel alloc] initWithData:protoData error:nil];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型protobuf 解码时间: %f", self.execTime);
    
    // -------------  YYModel -------------
    [self resetExecTime];
    NSString *yymodelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        NDStringListModel *model = [[NDStringListModel alloc] init];
        model.stringValues = self.stringValues;
        yymodelString = [model yy_modelToJSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型YYModel 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDStringListModel *model = [NDStringListModel yy_modelWithJSON:yymodelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型YYModel 解码时间: %f", self.execTime);
    
    // -------------  MJExtension -------------
    [self resetExecTime];
    NSString *mjModelString = nil;
    // 编码
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDStringListModel *model = [[NDStringListModel alloc] init];
        model.stringValues = self.stringValues;
        
        mjModelString = [model mj_JSONString];
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型MJExtension 编码时间: %f", self.execTime);
    
    // 解码
    [self resetExecTime];
    for (int i = 0; i < self.testTimes; i++) {
        CFAbsoluteTime tick = CFAbsoluteTimeGetCurrent();
        
        NDStringListModel *model = [NDFloatListModel mj_objectWithKeyValues:mjModelString];
        
        self.execTime += CFAbsoluteTimeGetCurrent() - tick;
    }
    NSLog(@"String列表 类型MJExtension 解码时间: %f", self.execTime);
}
@end
