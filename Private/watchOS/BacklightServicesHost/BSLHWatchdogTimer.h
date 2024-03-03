//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BSLHWatchdogTimer_h
#define BSLHWatchdogTimer_h
@import Foundation;

#include "BLSHWatchdogDelegate-Protocol.h"
#include "BLSHWatchdogProvider.h"
#include "BLSHWatchdogTiming-Protocol.h"
#include "SWSystemSleepObserver-Protocol.h"

@class BSAbsoluteMachTimer, NSString;

@interface BSLHWatchdogTimer : NSObject<SWSystemSleepObserver, BLSHWatchdogTiming> {
  /* instance variables */
  BSAbsoluteMachTimer *_timer;
  NSObject<BLSHWatchdogDelegate> *_delegate;
  BLSHWatchdogProvider *_provider;
  double _lock_timeout;
  double _lock_watchdogStart;
  BOOL _lock_sleepImminentSinceScheduled;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_invalidated;
  unsigned long long _lock_invalidationReason;
}

@property (nonatomic) BOOL sleepImminentSinceScheduled;
@property (readonly, nonatomic) BOOL sleepImminentWhenScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) unsigned long long invalidationReason;
@property (readonly, copy, nonatomic) NSString *explanation;

/* instance methods */
- (id)initWithExplanation:(id)explanation delegate:(id)delegate provider:(id)provider;
- (void)dealloc;
- (void)scheduleWithTimeout:(double)timeout;
- (void)timerFired;
- (void)invalidate:(unsigned long long)invalidate;
- (BOOL)isInvalidated;
- (BOOL)hasSleepBeenImminentSinceScheduled;
- (void)systemSleepMonitorSleepRequestAborted:(id)aborted;
- (void)systemSleepMonitorWillWakeFromSleep:(id)sleep;
- (void)systemSleepMonitorDidWakeFromSleep:(id)sleep;
- (BOOL)wasSleepImminentWhenScheduled;
@end

#endif /* BSLHWatchdogTimer_h */