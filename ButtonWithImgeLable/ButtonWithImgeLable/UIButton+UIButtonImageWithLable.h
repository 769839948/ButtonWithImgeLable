//
//  UIButton+UIButtonImageWithLable.h
//  AutoLayout
//
//  Created by Jane on 8/20/15.
//  Copyright (c) 2015 Jane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (UIButtonImageWithLable)
- (void)setImage:(UIImage *)image withTitle:(NSString *)title forState:(UIControlState)stateType;
@end
