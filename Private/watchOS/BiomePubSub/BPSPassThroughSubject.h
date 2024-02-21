//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSPassThroughSubject_h
#define BPSPassThroughSubject_h
@import Foundation;

#include "BMBookmarkablePublisher.h"
#include "BPSCompletion.h"
#include "BPSSubject-Protocol.h"
#include "BPSSubscriber-Protocol.h"
#include "BPSSubscriberList.h"
#include "BPSSubscription.h"

@class NSMutableArray, NSString;

@interface BPSPassThroughSubject : BMBookmarkablePublisher<BPSSubject, BPSSubscriber> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions;
@property (nonatomic) BOOL hasAnyDownstreamDemand;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) BPSCompletion *completion;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSSubscription *sub;
@property (retain, nonatomic) NSObject<BPSSubscriber> *subscriber;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) NSMutableArray *nextEvents;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned int x1; } rlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)publisherWithPublisher:(id)publisher upstreams:(id)upstreams bookmarkState:(id)state;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)sendSubscription:(id)subscription;
- (void)acknowledgeDownstreamDemand;
- (void)subscribe:(id)subscribe;
- (void)sendValue:(id)value;
- (void)sendCompletion:(id)completion;
- (void)disassociate:(long long)disassociate;
- (void)receiveCompletion:(id)completion;
- (long long)receiveInput:(id)input;
- (void)receiveSubscription:(id)subscription;
- (void)cancel;
- (id)subscription;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmarkableUpstreams;
- (id)startWithSubscriber:(id)subscriber;
- (id)nextEvent;
- (BOOL)completed;
- (void)reset;
- (id)bookmark;
- (id)validateBookmark:(id)bookmark;
- (void)applyBookmark:(id)bookmark;
- (void)sendCompletion;
- (void)sendEvent:(id)event;
@end

#endif /* BPSPassThroughSubject_h */