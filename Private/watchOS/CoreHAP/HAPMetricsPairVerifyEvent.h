//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPMetricsPairVerifyEvent_h
#define HAPMetricsPairVerifyEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSUUID;

@interface HAPMetricsPairVerifyEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *linkType;
@property (readonly, nonatomic) unsigned long long durationInMS;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessory:(id)accessory forLinkType:(id)type durationInMS:(unsigned long long)ms reason:(id)reason pvError:(id)error;
@end

#endif /* HAPMetricsPairVerifyEvent_h */