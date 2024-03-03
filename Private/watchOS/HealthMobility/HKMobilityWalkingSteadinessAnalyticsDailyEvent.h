//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMobilityWalkingSteadinessAnalyticsDailyEvent_h
#define HKMobilityWalkingSteadinessAnalyticsDailyEvent_h
@import Foundation;

#include "HKAnalyticsEvent-Protocol.h"

@class NSString;
@protocol HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider;

@interface HKMobilityWalkingSteadinessAnalyticsDailyEvent : NSObject<HKAnalyticsEvent>

@property (retain, nonatomic) NSObject<HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> *dataSource;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

/* instance methods */
- (id)initWithDataSource:(id)source;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)source error:(id *)error;
@end

#endif /* HKMobilityWalkingSteadinessAnalyticsDailyEvent_h */