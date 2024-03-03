//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONavdRemoteProxy_h
#define GEONavdRemoteProxy_h
@import Foundation;

#include "GEONavdServerProxy.h"
#include "GEONavdProxyObserver-Protocol.h"
#include "GEONavdXPCInterface-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface GEONavdRemoteProxy : GEONavdServerProxy<GEONavdProxyObserver> {
  /* instance variables */
  NSXPCConnection *_connection;
  NSMutableArray *_observers;
  NSMutableDictionary *_handlers;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<GEONavdXPCInterface> *remoteObjectProxyThreadUnsafe;

/* instance methods */
- (id)init;
- (void)open;
- (void)close;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)statusWithCallback:(id /* block */)callback;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)update;
- (void)startMonitoringDestination:(id)destination forClient:(id)client uuid:(id)uuid handler:(id /* block */)handler;
- (void)requestRefreshForPlannedDestination:(id)destination client:(id)client;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)destination client:(id)client;
- (void)stopMonitoringDestination:(id)destination forClient:(id)client uuid:(id)uuid;
- (void)didPostUINotification:(unsigned long long)uinotification forDestination:(id)destination fromClient:(id)client;
- (void)forceCacheRefresh;
- (void)dealloc;
- (void)navdProxyReceivedData:(id)data ofType:(id)type;
- (void)navdProxyReceivedHypothesis:(id)hypothesis forClient:(id)client;
@end

#endif /* GEONavdRemoteProxy_h */