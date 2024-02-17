//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEclipseStateMachineEventHandler_Protocol_h
#define CSLEclipseStateMachineEventHandler_Protocol_h
@import Foundation;

@protocol CSLEclipseStateMachineEventHandler <NSObject>
/* instance methods */
- (void)backlightOnForUnlockingCrownSwiped;
- (void)backlightDidTurnOff;
- (void)crownScrolledWithAmount:(double)amount;
- (void)wakeGestureRecognized:(id)recognized;
- (BOOL)preHandleButtonSingle;
- (BOOL)preHandleButtonChorded;
- (BOOL)handleTap:(id)tap;
- (void)setTheaterModeEnabled:(BOOL)enabled;
- (void)setCharging:(BOOL)charging;
@end

#endif /* CSLEclipseStateMachineEventHandler_Protocol_h */