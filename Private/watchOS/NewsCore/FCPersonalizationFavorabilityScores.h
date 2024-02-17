//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersonalizationFavorabilityScores_h
#define FCPersonalizationFavorabilityScores_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NTPBPublisherFavorabilityScores;

@interface FCPersonalizationFavorabilityScores : NSObject<NSSecureCoding> {
  /* instance variables */
  NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
}

@property (retain, nonatomic) NSDictionary *tagIDToScores;
@property (readonly, nonatomic) unsigned long long count;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPBFavorabilityScores:(id)scores;
- (id)init;
- (id)scoreForTagID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCPersonalizationFavorabilityScores_h */