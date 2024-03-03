//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureInternalSinkConfiguration_h
#define FigCaptureInternalSinkConfiguration_h
@import Foundation;

#include "FigCaptureSinkConfiguration.h"

@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration

@property (readonly, nonatomic) int subType;

/* instance methods */
- (id)initWithSinkSubType:(int)type;
- (int)sinkType;
@end

#endif /* FigCaptureInternalSinkConfiguration_h */