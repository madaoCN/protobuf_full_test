//
//  NDAddressBook.h
//  NDProtoTest
//
//  Created by 梁宪松 on 2020/7/10.
//  Copyright © 2020 madao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>
#import <MJExtension/MJExtension.h>

NS_ASSUME_NONNULL_BEGIN

@interface NDPhoneNumber : NSObject<YYModel>

@property (nonatomic, strong) NSString *number;

@end

@interface NDPerson : NSObject<YYModel>

@property (nonatomic, strong) NSString *name;

@property (nonatomic, assign) float id_;

@property (nonatomic, strong) NSString *email;

@property (nonatomic, strong) NSArray <NDPhoneNumber *> *phoneArray;

@end

@interface NDAddressBook : NSObject<YYModel>

@property (nonatomic, strong) NSArray <NDPerson *> *personArray;

@end

NS_ASSUME_NONNULL_END
