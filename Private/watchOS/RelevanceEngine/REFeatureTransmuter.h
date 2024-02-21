//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REFeatureTransmuter_h
#define REFeatureTransmuter_h
@import Foundation;

#include "REFeatureMap.h"
#include "REFeatureMapGenerator.h"
#include "REFeatureSet.h"

@class NSArray, NSLock, NSMutableOrderedSet;

@interface REFeatureTransmuter : NSObject {
  /* instance variables */
  REFeatureSet *_inputSet;
  REFeatureSet *_outputSet;
  NSArray *_orderedFeatures;
  REFeatureMapGenerator *_orderedFeatureMapGenerator;
  REFeatureMap *_scratchValues;
  unsigned long long * _scratchTaggedValues;
  REFeatureMapGenerator *_outputFeatureMapGenerator;
  NSMutableOrderedSet *_featureValuesCache;
  NSLock *_featureValuesCacheLock;
}

@property (readonly, nonatomic) REFeatureSet *inputFeatures;
@property (readonly, nonatomic) REFeatureSet *outputFeatures;

/* instance methods */
- (id)initWithInputFeatures:(id)features outputFeatures:(id)features outputFeatureMapGenerator:(id)generator;
- (void)dealloc;
- (BOOL)_supportedFeature:(id)feature;
- (id)_buildGraph;
- (id)transformFeatureMaps:(id)maps;
@end

#endif /* REFeatureTransmuter_h */