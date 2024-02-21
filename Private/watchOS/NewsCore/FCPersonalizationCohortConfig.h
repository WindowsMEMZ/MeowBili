//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersonalizationCohortConfig_h
#define FCPersonalizationCohortConfig_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface FCPersonalizationCohortConfig : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL considerPublisherTopicAggregates;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) BOOL enableUndampening;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double exponentialFavoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double globalWeightHalfLife;
@property (nonatomic) double globalWeightInitialMultiplier;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) BOOL undampenOnlyAboveBaselineMembership;
@property (nonatomic) double userBaseline;
@property (nonatomic) BOOL useRelativePersonalizationValue;
@property (nonatomic) BOOL useExponentialFavoritedBoost;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithConfigDictionary:(id)dictionary;
- (id)initWithConsiderPublisherTopicAggregates:(BOOL)aggregates dilutionFactor:(double)factor enableUndampening:(BOOL)undampening favoritedBoost:(double)boost exponentialFavoritedBoost:(double)boost globalWeight:(double)weight globalWeightHalfLife:(double)life globalWeightInitialMultiplier:(double)multiplier paddingFactor:(double)factor preBaselineCurvature:(double)curvature postBaselineCurvature:(double)curvature undampenOnlyAboveBaselineMembership:(BOOL)membership userBaseline:(double)baseline useRelativePersonalizationValue:(BOOL)value useExponentialFavoritedBoost:(BOOL)boost;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FCPersonalizationCohortConfig_h */