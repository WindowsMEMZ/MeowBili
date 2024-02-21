//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAsyncSerialQueue_h
#define FCAsyncSerialQueue_h
@import Foundation;

@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;
@property (readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;

/* instance methods */
- (id)init;
- (id)initWithQualityOfService:(long long)service;
- (id)initWithUnderlyingQueue:(id)queue qualityOfService:(long long)service;
- (void)enqueueBlock:(id /* block */)block;
- (void)withQualityOfService:(long long)service enqueueBlock:(id /* block */)block;
- (void)enqueueBlockForMainThread:(id /* block */)thread;
- (void)withQualityOfService:(long long)service enqueueBlockForMainThread:(id /* block */)thread;
- (void)enqueueOperation:(id)operation;
- (void)cancelAllBlocks;
@end

#endif /* FCAsyncSerialQueue_h */