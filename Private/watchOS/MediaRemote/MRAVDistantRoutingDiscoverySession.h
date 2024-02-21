//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVDistantRoutingDiscoverySession_h
#define MRAVDistantRoutingDiscoverySession_h
@import Foundation;

#include "MRAVRoutingDiscoverySession.h"
#include "MRAVDistantEndpoint.h"
#include "MRAVDistantRoutingDiscoveryClientProtocol-Protocol.h"
#include "MRAVLocalEndpoint.h"

@class NSArray, NSDate, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession<MRAVDistantRoutingDiscoveryClientProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  unsigned int _endpointFeatures;
  unsigned int _discoveryMode;
  NSDate *_discoveryModeDate;
  BOOL _enableThrottling;
  NSString *_routingContextUID;
  int _serviceResetNotifyToken;
  BOOL _hostedRoutingConnectionDidInitialize;
  NSDate *_hostedRoutingConnectionDate;
  NSArray *_notificationTokens;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (readonly, nonatomic) NSArray *distantEndpoints;
@property (readonly, nonatomic) NSArray *distantOutputDevices;
@property (retain, nonatomic) MRAVLocalEndpoint *localEndpoint;
@property (retain, nonatomic) MRAVDistantEndpoint *distantLocalEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceInterface;
+ (id)clientInterface;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_registerForPerRoutingContextNotifications;
- (void)dealloc;
- (unsigned int)endpointFeatures;
- (unsigned int)discoveryMode;
- (void)setDiscoveryMode:(unsigned int)mode;
- (BOOL)devicePresenceDetected;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (id)routingContextUID;
- (void)setRoutingContextUID:(id)uid;
- (void)availableEndpointsDidChange:(id)change;
- (void)availableOutputDevicesDidChange:(id)change;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)completion;
- (id)_hostedRoutingConnection;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)endpoints;
- (void)_notifyEndpointsChanged;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)devices;
- (void)_reloadAvailableDistantOutputDevices;
- (BOOL)_shouldAddLocalEndpoint;
- (id)_resolveDistantEndpoints:(id)endpoints;
- (id)_resolveEndpoints:(id)endpoints;
@end

#endif /* MRAVDistantRoutingDiscoverySession_h */