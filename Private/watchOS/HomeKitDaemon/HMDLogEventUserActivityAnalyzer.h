//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLogEventUserActivityAnalyzer_h
#define HMDLogEventUserActivityAnalyzer_h
@import Foundation;

#include "HMDHouseholdActivityLogEventContributor.h"
#include "HMDAggregationAnalysisEventContributing-Protocol.h"
#include "HMDEventCounterGroup.h"
#include "HMDTimeBasedFlagsManager.h"

@interface HMDLogEventUserActivityAnalyzer : HMDHouseholdActivityLogEventContributor<HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;

/* class methods */
+ (id)managedEventCounterRequestGroups;
+ (id)logCategory;

/* instance methods */
- (id)initWithEventCountersManager:(id)manager flagsManager:(id)manager dateProvider:(id)provider;
- (void)didReceiveEventFromDispatcher:(id)dispatcher;
- (void)_handleReadWriteLogEvent:(id)event;
- (void)updateLinkTypeActivityCountsForReadWriteLogEvent:(id)event;
- (void)_handleAccessoryPairingLogEvent:(id)event;
- (void)_handleAddActionSetLogEvent:(id)event;
- (void)_handleAddTriggerLogEvent:(id)event;
- (void)_handleActionSetRunLogEvent:(id)event;
- (void)_handleCameraStreamLogEvent:(id)event;
- (void)_handleCameraClipRequestLogEvent:(id)event;
- (BOOL)_isUserSource:(unsigned long long)source;
- (BOOL)_isTriggerSource:(unsigned long long)source;
- (void)markActiveForEventName:(id)name logEvent:(id)event;
- (void)populateAggregationAnalysisLogEvent:(id)event;
- (void)resetAggregationAnalysisContext;
- (void)populateLogEvent:(id)event forHomeWithUUID:(id)uuid associatedToDate:(id)date;
- (void)contributeLogEvent:(id)event toSerializedMetric:(id)metric;
- (void)deserializeLogEvent:(id)event fromSerializedMetric:(id)metric;
- (void)contributeLogEvent:(id)event toCoreAnalyticsEvent:(id)event;
- (void)coalesceLogEvent:(id)event fromSourceEvent:(id)event;
- (void)finishCoalescingLogEvent:(id)event;
@end

#endif /* HMDLogEventUserActivityAnalyzer_h */