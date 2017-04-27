//
//  UIImage+Extension.h
//  分类
//
//  Created by zhangyan on 16/7/26.
//  Copyright © 2016年 zhangyan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)
/**
 *  自由拉伸一张图片,类似于聊天气泡的拉伸，也可以使用xcode进行分割
 *
 *  @param name 图片名字
 *  @param left 左边开始位置比例  值范围0-1
 *  @param top  上边开始位置比例  值范围0-1
 *
 *  @return 拉伸后的Image
 */
+ (UIImage *)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top;

/**
 *  根据颜色和大小获取Image 颜色转化成图片
 *
 *  @param color 颜色
 *  @param size  大小
 *
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
/**
 *  根据图片和颜色返回一张加深颜色以后的图片
 */
+ (UIImage *)colorizeImage:(UIImage *)baseImage withColor:(UIColor *)theColor;
/**
 *  根据图片返回一张高斯模糊的图片
 *
 *  @param blur 模糊系数
 *
 *  @return 新的图片
 */
- (UIImage *)boxblurImageWithBlur:(CGFloat)blur;
/**
 *  自由改变Image的大小
 *
 *  @param size 目的大小
 *
 *  @return 修改后的Image
 */
- (UIImage *)cropImageWithSize:(CGSize)size;

/**
 *  纠正图片的方向，场景拍照上传图片的时候，上传的图片方向可能发生改变
 *
 *  @param aImage 选择的图片
 *
 *  @return 加工之后的图片
 */

- (UIImage *)fixOrientation:(UIImage *)aImage;

/** 给定一张图片，给定一个范围，获取图片的某一部分 */
/**
 *  给定一张图片，给定一个范围，获取图片的某一部分
 *
 *  @param rect 给定的范围
 *
 *  @return 返回切割后的图片
 */
- (UIImage *)clipImageinRect: (CGRect) rect;

@end
