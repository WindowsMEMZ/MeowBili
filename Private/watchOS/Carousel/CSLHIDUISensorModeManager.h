//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLHIDUISensorModeManager_h
#define CSLHIDUISensorModeManager_h
@import Foundation;

#include "BLSHLocalCountingAssertionAttributeHandler.h"
#include "CSLHIDUISensorMode.h"
#include "CSLHIDUISensorModePreferenceObserver.h"
#include "CSLHIDUISensorModeProvider.h"
#include "CSLHIDUISensorModeProviding-Protocol.h"

@class NSString;

@interface CSLHIDUISensorModeManager : BLSHLocalCountingAssertionAttributeHandler<CSLHIDUISensorModeProviding> {
  /* instance variables */
  CSLHIDUISensorModeProvider *_sensorModeProvider;
  CSLHIDUISensorModePreferenceObserver *_preferenceObserver;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_alwaysOnGesturesEnabledWithPrefs;
  BOOL _lock_active[10];
  BOOL _lock_dirty;
}

@property (readonly, nonatomic) CSLHIDUISensorMode *sensorMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

/* instance methods */
- (id)initForService:(id)service;
- (long long)typeForEntry:(id)entry;
- (id)countingTargetForEntry:(id)entry;
- (void)activateWithFirstEntry:(id)entry;
- (void)deactivateWithFinalEntry:(id)entry;
- (void)activate:(BOOL)activate withEntry:(id)entry;
- (void)updateHIDUISensorMode;
@end

#endif /* CSLHIDUISensorModeManager_h */