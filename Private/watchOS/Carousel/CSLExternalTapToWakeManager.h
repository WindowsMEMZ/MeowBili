//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLExternalTapToWakeManager_h
#define CSLExternalTapToWakeManager_h
@import Foundation;

#include "CSLChargingChangeObserver-Protocol.h"
#include "CSLChargingManager.h"

@class NSString;

@interface CSLExternalTapToWakeManager : NSObject<CSLChargingChangeObserver>

@property (readonly, weak, nonatomic) CSLChargingManager *chargingManager;
@property BOOL disableExternalTapToWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithChargingManager:(id)manager;
- (void)onCharger;
- (void)offCharger;
- (void)tapToWakeStateChanged;
- (void)_loadPreferencesAndUpdateIfNecessary;
- (void)_main_loadPreferencesAndUpdateIfNecessary;
- (void)_main_updateExternalTapToWake;
- (void)_addPreferencesObserver;
- (void)_removePreferencesObserver;
@end

#endif /* CSLExternalTapToWakeManager_h */