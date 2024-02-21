//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBProductivityPanGestureRecognizer_h
#define _UIKBProductivityPanGestureRecognizer_h
@import Foundation;

#include "UIPanGestureRecognizer.h"
#include "_UIGestureRecognizerTransformAnalyzer.h"

@class NSMutableDictionary, NSMutableSet;

@interface _UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) double beginPanTimestamp;
@property (nonatomic) struct CGPoint { double x0; double x1; } beginPanCentroid;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (retain, nonatomic) NSMutableSet *shiftTouches;
@property (retain, nonatomic) _UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations;
@property (nonatomic) BOOL tooMuchSingleMovement;

/* class methods */
+ (id)productivityPanGestureRecognizerWithTarget:(id)target action:(SEL)action delegate:(id)delegate;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithCoder:(id)coder;
- (BOOL)isShiftOrMoreKeyForTouch:(id)touch;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (struct CGPoint { double x0; double x1; })centroidOfTouches:(id)touches;
@end

#endif /* _UIKBProductivityPanGestureRecognizer_h */