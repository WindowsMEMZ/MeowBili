//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSystemService_h
#define FBSSystemService_h
@import Foundation;

#include "FBSOpenApplicationService.h"
#include "FBSSystemAppProxy.h"

@interface FBSSystemService : NSObject {
  /* instance variables */
  FBSSystemAppProxy *_systemAppProxy;
  FBSOpenApplicationService *_defaultOpenApplicationService;
}

/* class methods */
+ (id)sharedService;
+ (id)clientCallbackQueue;

/* instance methods */
- (id)init;
- (id)initWithEndpoint:(id)endpoint;
- (void)dealloc;
- (id)systemApplicationBundleIdentifier;
- (BOOL)isPasscodeLockedOrBlocked;
- (int)pidForApplication:(id)application;
- (BOOL)canOpenApplication:(id)application reason:(long long *)reason;
- (void)openApplication:(id)application options:(id)options withResult:(id /* block */)result;
- (void)sendActions:(id)actions withResult:(id /* block */)result;
- (void)terminateApplication:(id)application forReason:(long long)reason andReport:(BOOL)report withDescription:(id)description;
- (void)terminateApplication:(id)application forReason:(long long)reason andReport:(BOOL)report withDescription:(id)description completion:(id /* block */)completion;
- (void)terminateApplicationGroup:(long long)group forReason:(long long)reason andReport:(BOOL)report withDescription:(id)description;
- (void)terminateApplicationGroup:(long long)group forReason:(long long)reason andReport:(BOOL)report withDescription:(id)description completion:(id /* block */)completion;
- (void)openApplication:(id)application options:(id)options clientPort:(unsigned int)port withResult:(id /* block */)result;
- (void)openURL:(id)url application:(id)application options:(id)options clientPort:(unsigned int)port withResult:(id /* block */)result;
- (unsigned int)createClientPort;
- (void)cleanupClientPort:(unsigned int)port;
- (id)processHandleForApplication:(id)application;
- (id)badgeValueForBundleID:(id)id;
- (void)setBadgeValue:(id)value forBundleID:(id)id;
- (void)dataResetWithRequest:(id)request completion:(id /* block */)completion;
- (void)reboot;
- (void)shutdown;
- (void)shutdownWithOptions:(id)options;
- (void)setKeyboardFocusApplicationWithBundleID:(id)id pid:(int)pid completion:(id /* block */)completion;
- (void)setKeyboardFocusApplicationPID:(int)pid deferringToken:(id)token completion:(id /* block */)completion;
- (void)setKeyboardFocusApplicationPID:(int)pid completion:(id /* block */)completion;
@end

#endif /* FBSSystemService_h */