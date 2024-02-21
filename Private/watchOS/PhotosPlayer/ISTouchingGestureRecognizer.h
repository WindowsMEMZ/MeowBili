//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISTouchingGestureRecognizer_h
#define ISTouchingGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@interface ISTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic) unsigned long long _touchCount;
@property (nonatomic) unsigned long long _beginRequestID;
@property (nonatomic) struct CGPoint { double x0; double x1; } _initialPointInView;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) double extraMinimumTouchDuration;
@property (nonatomic) BOOL requireSingleTouch;
@property (nonatomic) double maximumTouchMovement;
@property (readonly, nonatomic) double distanceFromInitialPoint;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)_incrementTouchesBy:(unsigned long long)by;
- (void)_decrementTouchesBy:(unsigned long long)by;
- (void)_setTouchCount:(unsigned long long)count;
- (void)_beginWithRequestID:(unsigned long long)id;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesChanged:(id)changed withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (void)setEnabled:(BOOL)enabled;
- (void)reset;
- (void)_setInitialPointInView:(struct CGPoint { double x0; double x1; })view;
- (void)_updateDistanceFromInitialPoint;
- (void)_setBeginRequestID:(unsigned long long)id;
@end

#endif /* ISTouchingGestureRecognizer_h */