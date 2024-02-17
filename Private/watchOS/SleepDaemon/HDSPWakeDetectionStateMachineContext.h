//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPWakeDetectionStateMachineContext_h
#define HDSPWakeDetectionStateMachineContext_h
@import Foundation;

#include "HKSPStateMachineContext.h"

@interface HDSPWakeDetectionStateMachineContext : HKSPStateMachineContext

@property (readonly, nonatomic) unsigned long long type;

/* class methods */
+ (id)contextWithType:(unsigned long long)type;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HDSPWakeDetectionStateMachineContext_h */