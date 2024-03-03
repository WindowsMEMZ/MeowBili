//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.2.1.0.0
//
#ifndef STSProgressArcLayer_h
#define STSProgressArcLayer_h
@import Foundation;

#include "CALayer.h"

@interface STSProgressArcLayer : CALayer

@property (nonatomic) double radius;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;

/* instance methods */
- (id)init;
- (void)drawInContext:(struct CGContext *)context;
@end

#endif /* STSProgressArcLayer_h */