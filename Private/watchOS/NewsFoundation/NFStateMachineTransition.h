//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NFStateMachineTransition_h
#define NFStateMachineTransition_h
@import Foundation;

#include "NFStateMachine.h"
#include "NFStateMachineEvent.h"
#include "NFStateMachineState.h"

@protocol NFStateMachineContextType;

@interface NFStateMachineTransition : NSObject

@property (retain, nonatomic) NFStateMachine *stateMachine;
@property (retain, nonatomic) NFStateMachineState *fromState;
@property (retain, nonatomic) NFStateMachineState *toState;
@property (retain, nonatomic) NFStateMachineEvent *event;
@property (retain, nonatomic) NSObject<NFStateMachineContextType> *context;

/* instance methods */
- (id)initWithStateMachine:(id)machine event:(id)event fromState:(id)state toState:(id)state context:(id)context;
- (id)description;
@end

#endif /* NFStateMachineTransition_h */