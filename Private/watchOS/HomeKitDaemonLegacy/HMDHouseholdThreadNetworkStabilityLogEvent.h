//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdThreadNetworkStabilityLogEvent_h
#define HMDHouseholdThreadNetworkStabilityLogEvent_h
@import Foundation;

#include "HMMHomeLogEvent.h"
#include "HMDThreadNetworkStatusReport.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long numStabilityReporters;
@property (readonly, nonatomic) HMDThreadNetworkStatusReport *threadNetworkStatusReport;
@property (readonly, nonatomic) unsigned long long threadNetworkUptime;
@property (readonly, nonatomic) unsigned long long threadNetworkDowntime;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) unsigned long long numNetworkSignatures;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHomeUUID:(id)uuid numStabilityReporters:(unsigned long long)reporters threadNetworkStatusReport:(id)report threadNetworkUptime:(unsigned long long)uptime threadNetworkDowntime:(unsigned long long)downtime numReadWrites:(unsigned long long)writes numReadErrors:(unsigned long long)errors numWriteErrors:(unsigned long long)errors numSessionErrors:(unsigned long long)errors;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
@end

#endif /* HMDHouseholdThreadNetworkStabilityLogEvent_h */