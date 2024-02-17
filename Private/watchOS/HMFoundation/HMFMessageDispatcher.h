//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFMessageDispatcher_h
#define HMFMessageDispatcher_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageTransport.h"
#include "HMFMessageTransportDelegate-Protocol.h"
#include "HMFTimer.h"
#include "HMFTimerDelegate-Protocol.h"

@class NSDictionary, NSMutableOrderedSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher : HMFObject<HMFLogging, HMFTimerDelegate, HMFMessageTransportDelegate> {
  /* instance variables */
  struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
  NSMutableOrderedSet *_handlers;
  HMFTimer *_indexWatchdog;
  NSDictionary *_destinationHandlerIndexes;
  NSDictionary *_nameHandlerIndexes;
}

@property (readonly) BOOL indexed;
@property (nonatomic) BOOL shouldAutomaticallyIndex;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageTransport *transport;
@property (copy) NSSet *filterClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allMessagesForMessageNameTarget;
+ (id)logCategory;

/* instance methods */
- (void)dispatchMessage:(id)message target:(id)target;
- (void)sendMessage:(id)message target:(id)target;
- (void)sendMessage:(id)message target:(id)target responseQueue:(id)queue responseHandler:(id /* block */)handler;
- (void)sendMessage:(id)message target:(id)target andInvokeCompletionHandler:(id /* block */)handler;
- (void)sendMessage:(id)message target:(id)target responseQueue:(id)queue responseHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)sendMessageExpectingResponse:(id)response;
- (id)init;
- (id)initWithTransport:(id)transport;
- (BOOL)isIndexed;
- (void)index;
- (void)timerDidFire:(id)fire;
- (id)handlersForMessage:(id)message;
- (void)registerForMessage:(id)message receiver:(id)receiver selector:(SEL)selector;
- (void)registerForMessage:(id)message receiver:(id)receiver messageHandler:(id /* block */)handler;
- (void)registerForMessage:(id)message receiver:(id)receiver policies:(id)policies selector:(SEL)selector;
- (void)registerForMessage:(id)message targetUUID:(id)uuid receiver:(id)receiver policies:(id)policies selector:(SEL)selector;
- (void)registerForMessage:(id)message receiver:(id)receiver policies:(id)policies messageHandler:(id /* block */)handler;
- (void)deregisterForMessage:(id)message receiver:(id)receiver;
- (void)deregisterReceiver:(id)receiver;
- (void)dispatchMessage:(id)message;
- (void)sendMessage:(id)message;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (void)messageTransport:(id)transport didReceiveMessage:(id)message;
@end

#endif /* HMFMessageDispatcher_h */