//
//  ViewController.h
//  FunFacts
//
//  Created by LiaoWenwen on 11/5/15.
//  Copyright (c) 2015 LiaoWenwen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLable;
@property (strong, nonatomic) FactBook *factbook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

