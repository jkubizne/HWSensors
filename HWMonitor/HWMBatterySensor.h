//
//  HWMBatterySensor.h
//  HWMonitor
//
//  Created by Kozlek on 14.11.13.
//  Copyright (c) 2013 kozlek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "HWMSensor.h"


@interface HWMBatterySensor : HWMSensor

@property (nonatomic) int64_t service;
@property (nonatomic) int32_t selector;

@end