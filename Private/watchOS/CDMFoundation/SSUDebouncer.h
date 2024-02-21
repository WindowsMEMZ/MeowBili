//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SSUDebouncer_h
#define SSUDebouncer_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSUDebouncer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_delayTimer;
@property (readonly, nonatomic) double _timeWindowSeconds;
@property (copy, nonatomic) id /* block */ _handler;

/* instance methods */
- (id)initWithCoalescingTimeWindow:(double)window handler:(id /* block */)handler;
- (void)resetDelayTimer;
- (void)restartDelayTimer:(id)timer;
- (void)signalEventReceived:(id)received;
@end

#endif /* SSUDebouncer_h */