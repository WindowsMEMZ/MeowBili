//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLDataDensityClustering_h
#define PLDataDensityClustering_h
@import Foundation;

#include "PLDataClustering.h"

@interface PLDataDensityClustering : PLDataClustering

@property (nonatomic) double maximumDistance;
@property (nonatomic) unsigned long long minimumNumberOfObjects;

/* instance methods */
- (id)init;
@end

#endif /* PLDataDensityClustering_h */