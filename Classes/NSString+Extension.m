//
//  NSString+Extension.m
//  分类
//
//  Created by zhangyan on 16/7/26.
//  Copyright © 2016年 zhangyan. All rights reserved.
//

#import "NSString+Extension.h"

@implementation NSString (Extension)
/**
 *  给定一个宽度和字体计算出整体文字的高度
 *
 *  @param font font
 *  @param maxW 文字范围的宽度
 *
 *  @return 最终计算的文字的范围
 */
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW
{
    NSMutableDictionary *attrs = [NSMutableDictionary dictionary];
    attrs[NSFontAttributeName] = font;
    CGSize maxSize = CGSizeMake(maxW, MAXFLOAT);
    
    // 获得系统版本
    if ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0) {
        return [self boundingRectWithSize:maxSize options:NSStringDrawingUsesLineFragmentOrigin attributes:attrs context:nil].size;
    } else {
        return [self sizeWithFont:font constrainedToSize:maxSize];
    }
}

/**
 *  计算一行文字的宽度
 *
 *  @param font font
 *
 *  @return 最终计算的文字的范围
 */
- (CGSize)sizeWithFont:(UIFont *)font
{
    return [self sizeWithFont:font maxW:MAXFLOAT];
}


// ---------------------------------------------------------------------------------------
// 通过正则表达式判断是不是符合规范
- (BOOL)match:(NSString *)pattern
{
    // 1、创建正则表达式
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:0 error:nil];
    // 2、测试字符串
    NSArray *array = [regex matchesInString:self options:0 range:NSMakeRange(0, self.length)];
    
    return array.count > 0;
}


/**
 *  判断是不是电话号码
 *
 *  @return 返回判断的结果
 */
- (BOOL)isPhone
{
    return [self match:@"^[1][3578]\\d{9}$"];
}

/**
 *  判断是不是身份证
 *
 *  @return 返回判断的结果
 */
- (BOOL)isIDCard
{
    return [self match:@"^[0-9]{15}$)|([0-9]{17}([0-9]|X)$"];
}

/**
 *  判断是不是IP地址
 *
 *  @return 返回判断的结果
 */
- (BOOL)isIPAddress
{
    return [self match:@"((2[0-4]\\d|25[0-5]|[01]?\\d\\d?)\\.){3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)"];
}

/**
 *  判断是不是qq
 *
 *  @return 返回的BOOL，确定是不是qq
 */
- (BOOL)isQQ
{
    return [self match:@"^[1-9]\\d{4,10}$"];
}

/**
 *  判断是不是电话号码
 *
 *  @return 返回的BOOL，确定是不是电话号码
 */
- (BOOL)isPhoneNum
{
    return [self match:@"^[1][3578]\\d{9}$"];
}

@end
