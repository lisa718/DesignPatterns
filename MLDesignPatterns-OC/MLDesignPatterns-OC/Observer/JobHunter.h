//
//  JobHunter.h
//  MLDesignPatterns-OC
//
//  Created by mjpc on 2017/10/13.
//  Copyright © 2017年 mali. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ObserverProtocol.h"

@interface JobHunter : NSObject<ObserverProtocol>

- (instancetype)initWithName:(NSString *)name;

@end
