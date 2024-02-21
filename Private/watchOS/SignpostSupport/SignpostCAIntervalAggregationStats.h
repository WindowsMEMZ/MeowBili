//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostCAIntervalAggregationStats_h
#define SignpostCAIntervalAggregationStats_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface SignpostCAIntervalAggregationStats : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long intervalCount;
@property (readonly, nonatomic) unsigned long long totalIntervalDurationNs;
@property (readonly, nonatomic) float averageIntervalDurationNs;
@property (readonly, nonatomic) float maxIntervalDurationNs;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_addAggregationStats:(id)stats;
- (void)_addDurationNsToAggregation:(unsigned long long)aggregation;
- (id)description;
- (id)debugDescription;
@end

#endif /* SignpostCAIntervalAggregationStats_h */