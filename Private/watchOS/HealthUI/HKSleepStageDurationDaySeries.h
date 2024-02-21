//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepStageDurationDaySeries_h
#define HKSleepStageDurationDaySeries_h
@import Foundation;

#include "HKSleepStageDurationSeries.h"

@class NSCalendar;

@interface HKSleepStageDurationDaySeries : HKSleepStageDurationSeries

@property (retain, nonatomic) NSCalendar *currentCalendar;

/* instance methods */
- (id)init;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)configuration;
- (id)_buildSleepDurationCoordinateWithDurationValue:(double)value sleepValue:(long long)value barLocationIndex:(long long)index startOfCalendarDay:(id)day xAxisTransform:(id)transform yAxisTransform:(id)transform userInfo:(id)info;
@end

#endif /* HKSleepStageDurationDaySeries_h */