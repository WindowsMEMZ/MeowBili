//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOClientRankingModelFeature_h
#define GEOClientRankingModelFeature_h
@import Foundation;

#include "GEOClientRankingModelFeatureFunction.h"
#include "GEOClientRankingModelFeatureIdentifier.h"

@interface GEOClientRankingModelFeature : NSObject

@property (readonly, nonatomic) GEOClientRankingModelFeatureIdentifier *featureIdentifier;
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function;

/* instance methods */
- (id)init;
- (id)initWithFeatureIdentifier:(id)identifier function:(id)function;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)metadata;
@end

#endif /* GEOClientRankingModelFeature_h */