//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSleepModeStateMachine_h
#define MTSleepModeStateMachine_h
@import Foundation;

#include "MTStateMachine.h"
#include "MTSleepModeStateMachineEventHandler-Protocol.h"
#include "MTSleepModeStateMachineInitialState.h"
#include "MTSleepModeStateMachineOffState.h"
#include "MTSleepModeStateMachineWaitingState.h"

@class NSString;

@interface MTSleepModeStateMachine : MTStateMachine<MTSleepModeStateMachineEventHandler>

@property (readonly, nonatomic) MTSleepModeStateMachineInitialState *initialState;
@property (readonly, nonatomic) MTSleepModeStateMachineOffState *offState;
@property (readonly, nonatomic) MTSleepModeStateMachineWaitingState *waitingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate infoProvider:(id)provider;
- (id)onStateWithSleepModeEndDate:(id)date;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)date;
- (id)stateMachineLog;
- (void)updateState:(BOOL)state;
- (void)sleepModeEnabled:(BOOL)enabled userRequested:(BOOL)requested date:(id)date;
- (void)userWokeUp;
- (id)sleepAlarm;
- (id)currentDate;
- (BOOL)isSleepModeEnabled:(BOOL *)enabled;
- (id)keepOffUntilDate;
- (BOOL)isUserAsleep;
- (BOOL)stateMachine:(id)machine engageSleepModeUntilDate:(id)date userEngaged:(BOOL)engaged;
- (BOOL)stateMachine:(id)machine disengageSleepModeUserRequested:(BOOL)requested;
- (void)stateMachine:(id)machine keepSleepModeOffUntilDate:(id)date;
- (void)stateMachineClearKeepSleepModeOff:(id)off;
- (void)stateMachine:(id)machine scheduleUpdateForSecondsFromNow:(double)now;
@end

#endif /* MTSleepModeStateMachine_h */