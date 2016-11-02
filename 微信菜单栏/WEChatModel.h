//
//  WEChatModel.h
//  微信菜单栏
//
//  Created by 可米小子 on 16/11/2.
//  Copyright © 2016年 可米小子. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WEChatModel : NSObject

@property (nonatomic,copy) NSString *imageName;
@property (nonatomic,copy) NSString *itemName;

+ (instancetype)MenuModelWithDict:(NSDictionary *)dict;


@end
