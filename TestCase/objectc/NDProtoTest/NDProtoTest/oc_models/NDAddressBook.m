//
//  NDAddressBook.m
//  NDProtoTest
//
//  Created by 梁宪松 on 2020/7/10.
//  Copyright © 2020 madao. All rights reserved.
//

#import "NDAddressBook.h"


@implementation NDPhoneNumber

- (instancetype)init
{
    if (self = [super init]) {
        self.number = @"13055424951";
    }
    return self;
}

@end

@implementation NDPerson

- (instancetype)init
{
    if (self = [super init]) {
        self.name = @"梁meme";
        self.id_ = 99999.99999;
        self.email = @"591710551@qq.com";
        
        NSMutableArray *arr = [[NSMutableArray alloc] init];
        for (int i = 0; i < 10; i++) {
            [arr addObject:[[NDPhoneNumber alloc] init]];
        }
        self.phoneArray = arr;
    }
    return self;
}

+ (NSDictionary *)mj_replacedKeyFromPropertyName
{
    return @{
        @"id_" : @"id"
    };
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{
        @"phoneArray": NDPhoneNumber.class
    };
}

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper
{
    return @{
        @"id_" : @"id"
    };
}

+ (NSDictionary *)modelContainerPropertyGenericClass {
    return @{
        @"phoneArray" : NDPhoneNumber.class
    };
}

@end

@implementation NDAddressBook

- (instancetype)init
{
    if (self = [super init]) {

        NSMutableArray *arr = [[NSMutableArray alloc] init];
        for (int i = 0; i < 10; i++) {
            [arr addObject:[[NDPerson alloc] init]];
        }
        self.personArray = arr;
    }
    return self;
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{
        @"personArray":NDPerson.class
    };
}

+ (NSDictionary *)modelContainerPropertyGenericClass {
    return @{
        @"personArray" : NDPerson.class
    };
}

@end
