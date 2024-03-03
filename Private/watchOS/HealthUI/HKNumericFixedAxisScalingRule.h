//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNumericFixedAxisScalingRule_h
#define HKNumericFixedAxisScalingRule_h
@import Foundation;

#include "HKAbstractFixedAxisScalingRule.h"
#include "HKInteractiveChartNumericDefaultAxisBoundsProvider-Protocol.h"
#include "HKValueRange.h"

@interface HKNumericFixedAxisScalingRule : HKAbstractFixedAxisScalingRule<HKInteractiveChartNumericDefaultAxisBoundsProvider>

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;

/* class methods */
+ (id)ruleWithDefaultAxisBounds:(id)bounds axisBoundsOverrides:(id)overrides;
+ (id)ruleWithDefaultAxisBounds:(id)bounds axisBoundsOverrides:(id)overrides noDataAxisBounds:(id)bounds;

/* instance methods */
- (id)noDataStartingRange;
- (id)description;
@end

#endif /* HKNumericFixedAxisScalingRule_h */