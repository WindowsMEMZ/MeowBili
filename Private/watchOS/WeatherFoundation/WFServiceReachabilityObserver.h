//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFServiceReachabilityObserver_h
#define WFServiceReachabilityObserver_h
@import Foundation;

@class NSHashTable, NSMutableDictionary, NWPathEvaluator;
@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject

@property (retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property (nonatomic) long long reachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NWPathEvaluator *serviceReachabilityEvaluator;
@property (readonly) BOOL isServiceAvailable;

/* class methods */
+ (id)sharedObserver;

/* instance methods */
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (BOOL)removeObserver:(id)observer;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)addBlockObserver:(id /* block */)observer;
- (BOOL)removeBlockObserverWithHandle:(id)handle;
- (void)_setupReachability;
- (void)_deliverReachabilityUpdate:(long long)update;
- (void)removeAllObservers;
@end

#endif /* WFServiceReachabilityObserver_h */