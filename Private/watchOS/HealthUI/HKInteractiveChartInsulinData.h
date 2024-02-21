//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartInsulinData_h
#define HKInteractiveChartInsulinData_h
@import Foundation;

#include "HKGraphSeriesChartData-Protocol.h"

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject<HKGraphSeriesChartData>

@property (nonatomic) double basalValue;
@property (readonly, nonatomic) double bolusValue;
@property (nonatomic) double totalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* HKInteractiveChartInsulinData_h */