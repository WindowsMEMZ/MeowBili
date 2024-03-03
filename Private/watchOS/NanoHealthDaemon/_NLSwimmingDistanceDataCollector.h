//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef _NLSwimmingDistanceDataCollector_h
#define _NLSwimmingDistanceDataCollector_h
@import Foundation;

#include "NLSwimmingDataCollector.h"

@interface _NLSwimmingDistanceDataCollector : NLSwimmingDataCollector
/* class methods */
+ (id)observedType;
+ (id)domain;

/* instance methods */
- (id)quantitySampleFromSwimData:(id)data toSwimData:(id)data startDate:(id)date endDate:(id)date;
@end

#endif /* _NLSwimmingDistanceDataCollector_h */