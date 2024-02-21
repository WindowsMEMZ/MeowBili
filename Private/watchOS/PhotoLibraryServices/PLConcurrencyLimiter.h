//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLConcurrencyLimiter_h
#define PLConcurrencyLimiter_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLConcurrencyLimiter : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
  NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
  NSObject<OS_dispatch_queue> *_highQOSAssetIngestQueue;
  NSObject<OS_dispatch_queue> *_exclusiveMomentsQueue;
  NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
  NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
  NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

/* class methods */
+ (void)configureListTrackingForDispatchQueue:(id)queue;
+ (void)reportBlockEnqueued:(id /* block */)enqueued onQueue:(id)queue forLibrary:(id)library;
+ (void)reportBlockDequeuedOnQueue:(id)queue;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)queue;
+ (id)sharedLimiter;
+ (BOOL)isRunningUnderLimiter;

/* instance methods */
- (undefined *)_callOutForQoS:(unsigned int)s fromQueue:(id)queue;
- (id)_nextQueueForQoS:(unsigned int)s libraryRole:(unsigned long long)role;
- (id)_queuesTrackingBlocks;
- (void)_handleUnexpectedQoSClass:(unsigned int)sclass;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)queue;
- (void)_sync:(id /* block */)_sync identifyingBlock:(id /* block */)block libraryRole:(unsigned long long)role libraryForTelemetry:(id)telemetry;
- (void)_async:(id /* block */)_async identifyingBlock:(id /* block */)block libraryRole:(unsigned long long)role libraryForTelemetry:(id)telemetry;
- (id)init;
- (id)sharedUtilityQueue;
- (id)sharedBackgroundQueue;
- (id)debugDescription;
- (long long)maxConcurrency;
- (void)asyncPerformOnContext:(id)context identifyingBlock:(id /* block */)block block:(id /* block */)block;
- (void)dispatchAsync:(id)async block:(id /* block */)block;
- (void)sync:(id /* block */)sync identifyingBlock:(id /* block */)block library:(id)library;
- (void)async:(id /* block */)async identifyingBlock:(id /* block */)block library:(id)library;
@end

#endif /* PLConcurrencyLimiter_h */