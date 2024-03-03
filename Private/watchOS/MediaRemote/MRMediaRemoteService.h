//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRMediaRemoteService_h
#define MRMediaRemoteService_h
@import Foundation;

#include "MRXPCConnection.h"

@class NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRMediaRemoteService : NSObject {
  /* instance variables */
  const struct { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; void * x8; } * clientModule;
  const struct { void * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; } * browsableContentEndpoint;
  const struct { void * x0; undefined * x1; undefined * x2; undefined * x3; } * voiceRecordingEndpoint;
  const struct { void * x0; id /* block */ x1; } * televisionEndpoint;
  const struct { void * x0; undefined * x1; } * agentEndpoint;
}

@property (retain, nonatomic) MRXPCConnection *mrXPCConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSXPCListenerEndpoint *uiServiceEndpoint;

/* instance methods */
- (void)getDeviceInfoForPlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (id)getActiveSystemEndpointUIDForType:(long long)type;
- (id)UIServerEndpoint;
- (id)UIServiceRelayEndpoint;
- (void)setUIServiceRelayEndpoint:(id)endpoint;
- (BOOL)deviceSupportsUISessions;
- (id)groupSessionServerEndpoint;
- (void)joinGroupSessionWithToken:(id)token queue:(id)queue completion:(id /* block */)completion;
- (void)leaveGroupSessionWithIdentifier:(id)identifier queue:(id)queue completion:(id /* block */)completion;
- (void)userIdentityForDSID:(id)dsid queue:(id)queue completion:(id /* block */)completion;
- (id)applicationUserIdentity;
- (void)fetchParticipantsWithRequest:(id)request playerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (id)createTokenWithInvitationData:(id)data equivalentMediaIdentifier:(id)identifier;
- (void)sendEvent:(id)event queue:(id)queue completion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })imageDimensionsForArtworkData:(id)data;
- (void)resolvePlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (void)suspendDisconnectionPauseForConfiguration:(id)configuration queue:(id)queue completion:(id /* block */)completion;
@end

#endif /* MRMediaRemoteService_h */