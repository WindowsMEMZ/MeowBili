//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDQuantitySampleAttenuationProvider_h
#define HDQuantitySampleAttenuationProvider_h
@import Foundation;

#include "HDProfile.h"
#include "HDQuantitySampleAttenuationEngineDelegate-Protocol.h"
#include "HDQuantitySampleOverlapProcessor.h"

@class HKQuantityType;

@interface HDQuantitySampleAttenuationProvider : NSObject<HDQuantitySampleAttenuationEngineDelegate> {
  /* instance variables */
  HKQuantityType *_quantityType;
  HDProfile *_profile;
  HDQuantitySampleOverlapProcessor *_overlapProcessor;
}

/* instance methods */
- (id)initWithQuantityType:(id)type profile:(id)profile;
- (long long)loadAttenuationSamples:(struct { double x0; double x1; double x2; BOOL x3; long long x4; } *)samples anchorTime:(double)time errorOut:(id *)out;
@end

#endif /* HDQuantitySampleAttenuationProvider_h */