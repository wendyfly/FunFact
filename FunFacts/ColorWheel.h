//
//  ColorWheel.h
//  FunFacts
//
//  Created by LiaoWenwen on 11/8/15.
//  Copyright (c) 2015 LiaoWenwen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
