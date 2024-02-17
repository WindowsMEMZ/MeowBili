//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDListUnsubscribeHandler_h
#define EDListUnsubscribeHandler_h
@import Foundation;

@class EMListUnsubscribeDetector;
@protocol EFScheduler;

@interface EDListUnsubscribeHandler : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _detectorLock;
}

@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler;
@property (readonly, nonatomic) EMListUnsubscribeDetector *detector;

/* class methods */
+ (id)log;

/* instance methods */
- (id)init;
- (void)ignoreWithCommand:(id)command completion:(id /* block */)completion;
- (void)unsubscribeWithCommand:(id)command completion:(id /* block */)completion;
- (void)unsubscribeMailtoWithCommand:(id)command completion:(id /* block */)completion;
- (void)unsubscribeHTMLWithCommand:(id)command timeout:(double)timeout completion:(id /* block */)completion;
@end

#endif /* EDListUnsubscribeHandler_h */