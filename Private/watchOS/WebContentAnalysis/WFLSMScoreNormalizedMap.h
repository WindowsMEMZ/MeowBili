//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFLSMScoreNormalizedMap_h
#define WFLSMScoreNormalizedMap_h
@import Foundation;

#include "WFLSMMap.h"

@interface WFLSMScoreNormalizedMap : WFLSMMap {
  /* instance variables */
  float * maxScore;
  float * minScore;
}

/* instance methods */
- (id)initWithMap:(struct __LSMMap *)map;
- (id)evaluate:(id)evaluate;
- (void)dealloc;
@end

#endif /* WFLSMScoreNormalizedMap_h */