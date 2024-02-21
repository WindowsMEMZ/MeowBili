//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTritiumFaceAnimatorSingleShotStep_h
#define NTKTritiumFaceAnimatorSingleShotStep_h
@import Foundation;

#include "NTKTritiumFaceAnimatorBaseStep.h"

@interface NTKTritiumFaceAnimatorSingleShotStep : NTKTritiumFaceAnimatorBaseStep {
  /* instance variables */
  double _previousProgress;
  id /* block */ _singleShot;
  unsigned long long _state;
}

/* class methods */
+ (id)stepWithTritiumOnFrameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range tritiumOffFrameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range performStepWithDuration:(id /* block */)duration;

/* instance methods */
- (id)init;
- (void)willTransitionToTritiumOnFromFaceView:(id)view;
- (void)willTransitionToTritiumOffFromFaceView:(id)view;
- (void)setIsTritiumOn:(BOOL)on progress:(double)progress faceView:(id)view;
@end

#endif /* NTKTritiumFaceAnimatorSingleShotStep_h */