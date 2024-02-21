//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDXPCService_h
#define PDXPCService_h
@import Foundation;

#include "PDXPCApplicationInfo.h"
#include "PDXPCServiceExportedInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface PDXPCService : NSObject<PDXPCServiceExportedInterface> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSXPCConnection *_connection;
  NSString *_className;
  BOOL _callbacksSuspended;
}

@property (readonly, nonatomic) int remoteProcessIdentifier;
@property (readonly, nonatomic) NSString *remoteProcessApplicationIdentifier;
@property (readonly, nonatomic) PDXPCApplicationInfo *remoteProcessApplicationInfo;
@property (readonly, nonatomic) NSString *remoteProcessBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConnection:(id)connection;
- (void)activated;
- (id)connection;
- (void)clearConnectionReference;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)serviceResumed;
- (void)serviceSuspended;
@end

#endif /* PDXPCService_h */