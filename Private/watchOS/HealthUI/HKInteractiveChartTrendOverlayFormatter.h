//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartTrendOverlayFormatter_h
#define HKInteractiveChartTrendOverlayFormatter_h
@import Foundation;

#include "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartTrendOverlayFormatter : HKInteractiveChartDataFormatter
/* instance methods */
- (id)formattedSelectedRangeLabelDataWithChartData:(id)data context:(long long)context;
- (BOOL)_displayTypeIsSleep;
@end

#endif /* HKInteractiveChartTrendOverlayFormatter_h */