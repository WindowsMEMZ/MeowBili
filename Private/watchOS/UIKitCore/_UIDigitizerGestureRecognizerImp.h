//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDigitizerGestureRecognizerImp_h
#define _UIDigitizerGestureRecognizerImp_h
@import Foundation;

#include "_UIDigitizerGestureRecognizerImpDelegate-Protocol.h"

@class NSTimer;

@interface _UIDigitizerGestureRecognizerImp : NSObject

@property (weak, nonatomic) NSObject<_UIDigitizerGestureRecognizerImpDelegate> *delegate;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double maximumPressDuration;
@property (nonatomic) struct CGPoint { double x0; double x1; } digitizerLocation;
@property (nonatomic) long long numberOfActiveTouches;
@property (nonatomic) double pressEndToTouchBeginDuration;
@property (nonatomic) double touchEndToPressEndDuration;
@property (nonatomic) double touchEndTime;
@property (nonatomic) double pressBeginTime;
@property (nonatomic) double pressEndTime;
@property (nonatomic) double lastRecognitionTime;
@property (weak, nonatomic) NSTimer *minimumPressDurationTimer;
@property (weak, nonatomic) NSTimer *waitingForTouchesAfterPressTimer;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesChanged:(id)changed withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (BOOL)_shouldReportDigitizerLocation;
- (void)reset;
- (void)_minimumPressDurationTimerFired:(id)fired;
- (void)_waitingForTouchesAfterPressTimerFired:(id)fired;
- (struct CGPoint { double x0; double x1; })defaultDigitizerLocation;
- (BOOL)_senderOfPressesHasTouchSurface:(id)surface withEvent:(id)event;
- (BOOL)_senderOfPressesIsSoftwareRemoteWithEvent:(id)event;
@end

#endif /* _UIDigitizerGestureRecognizerImp_h */