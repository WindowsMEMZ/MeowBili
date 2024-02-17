//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKRateMetricSample_h
#define TISKRateMetricSample_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface TISKRateMetricSample : NSObject<NSSecureCoding>

@property (nonatomic) int countFactor;
@property (nonatomic) double durationFactor;

/* class methods */
+ (id)makeMetric;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)addToCounter:(int)counter;
- (void)addToDuration:(double)duration;
- (id)rate;
- (void)merge:(id)merge;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* TISKRateMetricSample_h */