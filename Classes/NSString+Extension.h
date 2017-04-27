//
//  NSString+Extension.h
//  分类
//
//  Created by zhangyan on 16/7/26.
//  Copyright © 2016年 zhangyan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (Extension)

/**
 *  给定一个宽度和字体计算出整体文字的高度
 *
 *  @param font font
 *  @param maxW 文字范围的宽度
 *
 *  @return 最终计算的文字的范围
 */
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW;

/**
 *  计算一行文字的宽度
 *
 *  @param font font
 *
 *  @return 最终计算的文字的范围
 */
- (CGSize)sizeWithFont:(UIFont *)font;

/**
 *  判断是不是电话号码
 *
 *  @return 返回判断的结果
 */
- (BOOL)isPhone;

/**
 *  判断是不是身份证
 *
 *  @return 返回判断的结果
 */
- (BOOL)isIDCard;

/**
 *  判断是不是IP地址
 *
 *  @return 返回判断的结果
 */
- (BOOL)isIPAddress;

/**
 *  判断是不是qq
 *
 *  @return 返回的BOOL，确定是不是qq
 */
- (BOOL)isQQ;

@end
