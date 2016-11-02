//
//  WEChatModel.m
//  微信菜单栏
//
//  Created by 可米小子 on 16/11/2.
//  Copyright © 2016年 可米小子. All rights reserved.
//

#import "WEChatModel.h"

@implementation WEChatModel

- (instancetype)initWithDict:(NSDictionary *)dict{
    if (self == [super init]) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+ (instancetype)MenuModelWithDict:(NSDictionary *)dict{
    return [[self alloc] initWithDict:dict];
}



@end
