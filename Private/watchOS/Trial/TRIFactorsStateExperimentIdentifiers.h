//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFactorsStateExperimentIdentifiers_h
#define TRIFactorsStateExperimentIdentifiers_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface TRIFactorsStateExperimentIdentifiers : NSObject<NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

/* instance methods */
- (id)initWithExperimentId:(id)id deploymentId:(int)id;
- (id)initWithExperimentId:(id)id deploymentId:(int)id treatmentId:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToIdentifiers:(id)identifiers;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRIFactorsStateExperimentIdentifiers_h */