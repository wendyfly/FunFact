//
//  ViewController.m
//  FunFacts
//
//  Created by LiaoWenwen on 11/5/15.
//  Copyright (c) 2015 LiaoWenwen. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.factbook = [[FactBook alloc] init];
    self.colorWheel = [[ColorWheel alloc] init];
    self.funFactLable.text = [self.factbook randomFact];
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLable.text = [self.factbook randomFact];
    }

@end
