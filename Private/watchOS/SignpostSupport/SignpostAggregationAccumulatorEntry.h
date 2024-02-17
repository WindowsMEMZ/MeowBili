//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostAggregationAccumulatorEntry_h
#define SignpostAggregationAccumulatorEntry_h
@import Foundation;

#include "SignpostAggregation.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SignpostAggregationAccumulatorEntry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationCreationErrorCounts;
@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationAdditionErrorCounts;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *aggregationDescription;
@property (readonly, nonatomic) NSString *aggregationSignature;
@property (readonly, nonatomic) BOOL includeRawIntervals;
@property (readonly, nonatomic) NSDictionary *aggregationCreationErrorCounts;
@property (readonly, nonatomic) NSDictionary *aggregationAdditionErrorCounts;
@property (readonly, nonatomic) SignpostAggregation *accumulatedAggregation;

/* class methods */
+ (void)_bumpErrorCount:(id)count countDict:(id)dict;

/* instance methods */
- (id)_initWithSubsystem:(id)subsystem category:(id)category name:(id)name aggregationDescription:(id)description includeRawIntervals:(BOOL)intervals;
- (void)_handleInterval:(id)interval;
@end

#endif /* SignpostAggregationAccumulatorEntry_h */