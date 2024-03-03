//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHealthStoreEndpoint_h
#define HDHealthStoreEndpoint_h
@import Foundation;

#include "HDDaemon.h"
#include "HDHealthStoreServer.h"
#include "HDProfileReadyObserver-Protocol.h"
#include "HKHealthStoreEndpointInterface-Protocol.h"
#include "_HKXPCExportable-Protocol.h"

@class HDXPCClient, HKProfileIdentifier, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject<HDProfileReadyObserver, HKHealthStoreEndpointInterface, _HKXPCExportable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_connectionQueue;
  NSMutableArray *_serverCompletionsAwaitingProfileReady;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDXPCClient *client;
@property (readonly, nonatomic) HDHealthStoreServer *server;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)endpointWithClient:(id)client healthDaemon:(id)daemon;

/* instance methods */
- (id)initWithClient:(id)client daemon:(id)daemon;
- (void)remote_serverForConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)invalidate;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (void)profileDidBecomeReady:(id)ready;
@end

#endif /* HDHealthStoreEndpoint_h */