//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVPowerBudget_h
#define HVPowerBudget_h
@import Foundation;

#include "HVPowerBudgetThrottlingState.h"
#include "NSObject-Protocol.h"

@class NSDate;
@protocol OS_os_log;

@interface HVPowerBudget : NSObject {
  /* instance variables */
  HVPowerBudgetThrottlingState *_throttlingState;
  NSDate *_lastPlugInTime;
  NSObject<NSObject> *_batteryObserver;
  atomic BOOL _discretionaryWorkInProgress;
  NSObject<OS_os_log> *_log;
}

/* class methods */
+ (id)defaultBudget;
+ (void)setCanDoWorkOverrideForTesting:(id)testing;

/* instance methods */
- (id)initWithThrottleBudget:(id)budget;
- (id)init;
- (void)dealloc;
- (void)refillThrottleBudget;
- (unsigned char)canDoDiscretionaryWork;
- (void)doDiscretionaryWork:(id /* block */)work orElse:(id /* block */)else;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void)didConsumeAnExtraBudgetedOperation;
- (id)throttlingState;
@end

#endif /* HVPowerBudget_h */