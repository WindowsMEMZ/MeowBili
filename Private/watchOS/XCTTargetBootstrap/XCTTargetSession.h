//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22515.0.0.0.0
//
#ifndef XCTTargetSession_h
#define XCTTargetSession_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "XCTInternalEntitlementChecking-Protocol.h"
#include "XCTMessagingChannel_DaemonToUIProcess-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject<NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess, XCTInternalEntitlementChecking>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) NSXPCListener *clientListener;
@property (retain) NSObject<XCTConnectionAccepting> *connectionHandler;
@property (readonly) id /* block */ registrationHandler;
@property BOOL targetIsRegistering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServiceName:(id)name registrationHandler:(id /* block */)handler;
- (id)initWithDaemonConnection:(id)connection registrationHandler:(id /* block */)handler;
- (void)connect;
- (void)registerForBootstrap;
- (void)_on_queue_connect;
- (BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)path error:(id *)error;
- (void)_on_queue_startListeningForClientConnections;
- (id)_on_queue_getListenerEndpoint;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)path protocolVersion:(unsigned long long)version reply:(id /* block */)reply;
- (BOOL)isInternallyEntitledConnection:(id)connection;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* XCTTargetSession_h */