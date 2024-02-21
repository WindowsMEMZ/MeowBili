//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepScheduleStateObject_h
#define HKSPSleepScheduleStateObject_h
@import Foundation;

#include "HKSPSyncAnchor-Protocol.h"
#include "HKSPXPCObject-Protocol.h"

@class NSString;

@interface HKSPSleepScheduleStateObject : NSObject<HKSPXPCObject>

@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithScheduleState:(unsigned long long)state syncAnchor:(id)anchor;
- (id)objectWithSyncAnchor:(id)anchor;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKSPSleepScheduleStateObject_h */