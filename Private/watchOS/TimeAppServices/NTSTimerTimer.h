//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSTimerTimer_h
#define NTSTimerTimer_h
@import Foundation;

@class CADisplayLink, MTTimerManager, NSMutableDictionary;

@interface NTSTimerTimer : NSObject {
  /* instance variables */
  CADisplayLink *_displayLink;
  NSMutableDictionary *_handlers;
  unsigned long long _nextToken;
  BOOL _appInForeground;
  MTTimerManager *_timerManager;
  BOOL _isObserving;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
  unsigned long long _updateErrorCount;
  BOOL _requestPending;
  BOOL _requestInProgress;
}

/* class methods */
+ (id)sharedTimerTimer;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_withTimerLock:(id /* block */)lock;
- (void)_startObserving;
- (void)_stopObserving;
- (id)startTimerUpdatesWithHandler:(id /* block */)handler;
- (void)stopTimerUpdatesForToken:(id)token;
- (void)_performPendingRequest;
- (void)_performRetry;
- (void)_endRequestWithError:(id)error;
- (void)_updateTimer;
- (void)_updateTimerForRetry:(BOOL)retry;
- (void)_tick:(id)_tick;
- (void)_invokeHandlers;
- (void)_appForegrounded:(id)foregrounded;
- (void)_appBackgrounded:(id)backgrounded;
- (void)_modelStateReset:(id)reset;
- (void)_modelStateChanged:(id)changed;
@end

#endif /* NTSTimerTimer_h */