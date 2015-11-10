//
//  FactBook.h
//  FunFacts
//
//  Created by LiaoWenwen on 11/7/15.
//  Copyright (c) 2015 LiaoWenwen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *fact;

- (NSString *)randomFact;

@end
