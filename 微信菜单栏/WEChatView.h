//
//  WEChatView.h
//  微信菜单栏
//
//  Created by 可米小子 on 16/11/2.
//  Copyright © 2016年 可米小子. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ItemsClickBlock)(NSString *str, NSInteger tag);
typedef void(^BackViewTapBlock)();

@interface WEChatView : UIView

@property (nonatomic,copy) ItemsClickBlock itemsClickBlock;
@property (nonatomic,copy) BackViewTapBlock backViewTapBlock;

/**
 *  menu
 *
 *  @param frame            菜单frame
 *  @param target           将在在何控制器弹出
 *  @param dataArray        菜单项内容
 *  @param itemsClickBlock  点击某个菜单项的blick
 *  @param backViewTapBlock 点击背景遮罩的block
 *
 *  @return 返回创建对象
 */
+ (WEChatView *)createMenuWithFrame:(CGRect)frame target:(UIViewController *)target dataArray:(NSArray *)dataArray itemsClickBlock:(void(^)(NSString *str, NSInteger tag))itemsClickBlock backViewTap:(void(^)())backViewTapBlock;

/**
 *  展示菜单
 *
 *  @param isShow YES:展示  NO:隐藏
 */
+ (void)showMenuWithAnimation:(BOOL)isShow;

/**
 *  隐藏菜单
 */
+ (void)hidden;
/**
 *  移除菜单
 */
+ (void)clearMenu;

@end
