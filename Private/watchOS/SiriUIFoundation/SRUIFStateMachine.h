//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef SRUIFStateMachine_h
#define SRUIFStateMachine_h
@import Foundation;

#include "SRUIFStateMachineDelegate-Protocol.h"

@class NSMutableDictionary;

@interface SRUIFStateMachine : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableDictionary *endStatesByEventByStartState;
@property (weak, nonatomic) NSObject<SRUIFStateMachineDelegate> *delegate;

/* instance methods */
- (id)initWithInitialState:(long long)state;
- (void)_setState:(long long)state forEvent:(long long)event eventTimeStamp:(double)stamp;
- (id)_descriptionForEvent:(long long)event;
- (void)addTransitionFromState:(long long)state toState:(long long)state forEvent:(long long)event;
- (id)_endStateNumberFromDictionary:(id)dictionary forEvent:(long long)event;
- (void)performTransitionForEvent:(long long)event;
- (void)performTransitionForEvent:(long long)event eventTimeStamp:(double)stamp;
- (void)_setState:(long long)state;
- (id)_endStatesByEventByStartState;
@end

#endif /* SRUIFStateMachine_h */