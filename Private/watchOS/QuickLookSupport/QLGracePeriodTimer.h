//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLGracePeriodTimer_h
#define QLGracePeriodTimer_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface QLGracePeriodTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_callbackQueue;
  double _delay;
  NSObject<OS_dispatch_source> *_timer;
}

@property (copy) id /* block */ action;

/* instance methods */
- (id)initWithAction:(id /* block */)action callbackQueue:(id)queue delay:(double)delay;
- (void)_createTimer;
- (void)_suppress;
- (void)arm;
- (void)suppress;
@end

#endif /* QLGracePeriodTimer_h */