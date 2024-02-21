//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBJetsamPropertyManager_h
#define RBJetsamPropertyManager_h
@import Foundation;

#include "RBEntitlementManaging-Protocol.h"
#include "RBJetsamPropertyManaging-Protocol.h"

@class NSDictionary, NSString;

@interface RBJetsamPropertyManager : NSObject<RBJetsamPropertyManaging> {
  /* instance variables */
  NSObject<RBEntitlementManaging> *_entitlementManager;
  NSDictionary *_xpcServices;
  id _xpcServicesGlobal;
  NSDictionary *_xpcServicesSys;
  id _xpcServicesSysGlobal;
  NSDictionary *_extensionPoints;
  id _extensionPointsGlobal;
  NSDictionary *_externalExtensionPoints;
  id _externalExtensionPointsGlobal;
  NSDictionary *_applications;
  id _applicationsGlobal;
  NSDictionary *_applicationsSys;
  id _applicationsSysGlobal;
  NSDictionary *_daemons;
  id _daemonsGlobal;
  NSDictionary *_angels;
  id _angelsGlobal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (int)testTaskLimitForPid:(int)pid;
+ (id)testJetsamProperties;
+ (id)unmanagedJetsamProperties;

/* instance methods */
- (id)initWithEntitlementManager:(id)manager;
- (id)initWithEntitlementManager:(id)manager properties:(id)properties;
- (id)jetsamPropertiesForProcess:(int)process identity:(id)identity bundleProperties:(id)properties isPlatformBinary:(BOOL)binary;
@end

#endif /* RBJetsamPropertyManager_h */