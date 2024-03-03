//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 232.0.0.0.0
//
#ifndef TCSAppMonitor_h
#define TCSAppMonitor_h
@import Foundation;

#include "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#include "TCSTinCanUserDefaults.h"

@class NSHashTable, NSString;

@interface TCSAppMonitor : NSObject<LSApplicationWorkspaceObserverProtocol> {
  /* instance variables */
  NSHashTable *_observers;
  TCSTinCanUserDefaults *_defaults;
}

@property (nonatomic) BOOL appIsInstalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)shouldAppBeInstalled;
+ (BOOL)_isAppRestrictedForRegion;
+ (BOOL)_isAppRestrictedForStoreDemoInCurentLocale;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)applicationsDidInstall:(id)install;
- (void)applicationsDidUninstall:(id)uninstall;
- (BOOL)_isAppInstalled;
- (BOOL)_applicationProxiesContainTinCanApp:(id)app;
- (void)_handleDeviceFirstUnlock;
- (void)_updateUserDefaults;
- (void)_updateCompanionWithAppIsInstalled:(BOOL)installed;
@end

#endif /* TCSAppMonitor_h */