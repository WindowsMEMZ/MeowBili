//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTRoutineManagerRegistrantScenarioTrigger_h
#define RTRoutineManagerRegistrantScenarioTrigger_h
@import Foundation;

#include "RTRoutineManagerRegistrant.h"

@class NSDictionary, NSMutableDictionary;

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant {
  /* instance variables */
  NSMutableDictionary *__scenarioTriggerHandlers;
}

@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (readonly, copy, nonatomic) NSDictionary *scenarioTriggerHandlers;
@property (readonly, nonatomic) BOOL registered;

/* instance methods */
- (id)init;
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)types handler:(id /* block */)handler;
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)types;
- (void)onScenarioTriggers:(id)triggers error:(id)error;
@end

#endif /* RTRoutineManagerRegistrantScenarioTrigger_h */