//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITouchesBeganObserverGestureRecognizer_h
#define _UITouchesBeganObserverGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@interface _UITouchesBeganObserverGestureRecognizer : UIGestureRecognizer
/* instance methods */
- (BOOL)_affectedByGesture:(id)gesture;
- (BOOL)canPreventGestureRecognizer:(id)recognizer;
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)shouldReceiveEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
@end

#endif /* _UITouchesBeganObserverGestureRecognizer_h */