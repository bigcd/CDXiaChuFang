//
//  CDMainHeadView.h
//  CDXiaChuFang
//
//  Created by chendi on 2017/8/20.
//  Copyright © 2017年 bbigcd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UIButtonClickWithTagBlock)(NSInteger tag, id item);

@class Content;
@interface CDMainHeadView : UIView

@property (nonatomic, copy) UIButtonClickWithTagBlock buttonClickWithTagBlock;
- (void)setContentWithItem:(Content *)item;

@end
