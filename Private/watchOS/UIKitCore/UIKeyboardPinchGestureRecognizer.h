//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardPinchGestureRecognizer_h
#define UIKeyboardPinchGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "UIKeyboardPinchGestureRecognizerDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {
  /* instance variables */
  double _pinchSeparationValues[4];
  NSMutableSet *_activeTouches;
  NSMutableDictionary *_initialTouchPoints;
  double _beginPinchTimestamp;
}

@property (readonly, nonatomic) BOOL pinchDetected;
@property (readonly, nonatomic) double initialPinchSeparation;
@property (weak, nonatomic) NSObject<UIKeyboardPinchGestureRecognizerDelegate> *pinchDelegate;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (BOOL)canPreventGestureRecognizer:(id)recognizer;
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (void)resetPinchCalculations;
- (void)interpretTouchesForSplit;
- (double)finalProgressForInitialProgress:(double)progress;
@end

#endif /* UIKeyboardPinchGestureRecognizer_h */