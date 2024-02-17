//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKFoundationRuntimeStrategy_h
#define GKFoundationRuntimeStrategy_h
@import Foundation;

#include "GKDaemonProxy.h"
#include "GKGameSessionService-Protocol.h"
#include "GKRuntimeStrategy-Protocol.h"
#include "GKUtilityService-Protocol.h"
#include "GKUtilityServicePrivate-Protocol.h"

@interface GKFoundationRuntimeStrategy : NSObject<GKRuntimeStrategy> {
  /* instance variables */
  GKDaemonProxy *_daemonProxy;
}

@property (readonly) BOOL shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) NSObject<GKGameSessionService> *gameSessionService;
@property (readonly) NSObject<GKUtilityService> *utilityService;
@property (readonly) NSObject<GKUtilityServicePrivate> *utilityServicePrivate;

/* instance methods */
- (id)initWithDaemonProxy:(id)proxy;
- (id)localPlayer;
- (void)requestClientsRemoteImageDataForURL:(id)url queue:(id)queue reply:(id /* block */)reply;
@end

#endif /* GKFoundationRuntimeStrategy_h */