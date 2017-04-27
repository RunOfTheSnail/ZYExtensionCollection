//
//  UIView+Extension.h
//  分类
//
//  Created by zhangyan on 16/7/26.
//  Copyright © 2016年 zhangyan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)

/** 控件的 X */
@property (nonatomic, assign)CGFloat x;
/** 控件的 Y */
@property (nonatomic, assign)CGFloat y;
/** 控件的 width */
@property (nonatomic, assign)CGFloat width;
/** 控件的 height*/
@property (nonatomic, assign)CGFloat height;
/** 控件的 size*/
@property (nonatomic, assign)CGSize size;
/** 控件的 centerX*/
@property (nonatomic, assign) CGFloat centerX;
/** 控件的 centerY*/
@property (nonatomic, assign) CGFloat centerY;
/** 控件的 origin */
@property (nonatomic, assign) CGPoint origin;

/** 通过贝赛尔曲线切圆 */
- (void)processedIntoRound;


@end
