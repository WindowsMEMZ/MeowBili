//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EMActivityRegistryObserverWrapper_h
#define _EMActivityRegistryObserverWrapper_h
@import Foundation;

#include "EFCancelable-Protocol.h"
#include "EMActivityObserver_xpc-Protocol.h"
#include "EMActivityRegistry.h"
#include "EMRemoteConnection.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol EMActivityObserver;

@interface _EMActivityRegistryObserverWrapper : NSObject<EFCancelable, EMActivityObserver_xpc> {
  /* instance variables */
  NSObject<EFCancelable> *_observerCancelable;
  NSMutableDictionary *_trackedActivities;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) EMRemoteConnection *connection;
@property (weak) EMActivityRegistry *registry;
@property (weak) NSObject<EMActivityObserver> *observer;
@property (retain) NSArray *activities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection registry:(id)registry observer:(id)observer;
- (void)dealloc;
- (void)cancel;
- (void)_startObservingIfNecessary;
- (void)_resetWithCancelable:(id)cancelable;
- (void)_recover;
- (id)activityWithObjectID:(id)id;
- (void)startedActivity:(id)activity;
- (void)activityWithID:(id)id setUserInfoObject:(id)object forKey:(id)key;
- (void)activityWithID:(id)id setCompletedCount:(id)count totalCount:(id)count;
- (void)activityWithID:(id)id finishedWithError:(id)error;
- (void)removedActivityWithID:(id)id;
@end

#endif /* _EMActivityRegistryObserverWrapper_h */