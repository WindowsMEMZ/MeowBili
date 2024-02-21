//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _RETrueConstantCondition_h
#define _RETrueConstantCondition_h
@import Foundation;

#include "RECondition.h"

@interface _RETrueConstantCondition : RECondition
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_notCondition;
- (BOOL)_acceptsFeatureMap:(id)map predictionSet:(id)set explanation:(id *)explanation;
- (id)_inflectionFeatureValuePairs;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _RETrueConstantCondition_h */