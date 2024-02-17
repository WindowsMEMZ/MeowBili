//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAbstractMinimumRangeScalingRule_h
#define HKAbstractMinimumRangeScalingRule_h
@import Foundation;

#include "HKInteractiveChartsAxisScalingRule-Protocol.h"
#include "HKValueRange.h"

@class NSDictionary, NSNumber, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject<HKInteractiveChartsAxisScalingRule>

@property (readonly, nonatomic) double defaultYAxisRange;
@property (retain, nonatomic) HKValueRange *axisBounds;
@property (readonly, nonatomic) NSNumber *anchorValue;
@property (readonly, nonatomic) NSDictionary *axisRangeOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)yValueRangeForRange:(id)range zoomLevel:(long long)level;
- (id)yAxisBounds;
- (id)noDataStartingRange;
- (double)_rangeForZoomLevel:(long long)level;
@end

#endif /* HKAbstractMinimumRangeScalingRule_h */