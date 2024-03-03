//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPDevicePowerMonitor_h
#define HDSPDevicePowerMonitor_h
@import Foundation;

#include "HDSPNotificationObserver-Protocol.h"

@class HKSPObserverSet, NSNumber, NSString;

@interface HDSPDevicePowerMonitor : NSObject<HDSPNotificationObserver>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (retain, nonatomic) NSNumber *isChargingOverride;
@property (retain, nonatomic) NSNumber *batteryLevelOverride;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) float batteryLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCallbackScheduler:(id)scheduler;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)notificationListener:(id)listener didReceiveNotificationWithName:(id)name;
@end

#endif /* HDSPDevicePowerMonitor_h */