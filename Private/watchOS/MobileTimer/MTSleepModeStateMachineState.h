//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSleepModeStateMachineState_h
#define MTSleepModeStateMachineState_h
@import Foundation;

#include "MTStateMachineState.h"
#include "MTSleepModeStateMachineEventHandler-Protocol.h"

@class NSString;

@interface MTSleepModeStateMachineState : MTStateMachineState<MTSleepModeStateMachineEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateState:(BOOL)state;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (id)determineNextState:(BOOL)state;
- (void)sleepModeEnabled:(BOOL)enabled userRequested:(BOOL)requested date:(id)date;
- (void)userWokeUp;
- (id)nextSleepModeEndDate;
- (id)nextSleepModeEndDateAfterDate:(id)date;
- (id)nextSleepModeStartDate;
- (id)nextSleepModeStartDateAfterDate:(id)date;
@end

#endif /* MTSleepModeStateMachineState_h */