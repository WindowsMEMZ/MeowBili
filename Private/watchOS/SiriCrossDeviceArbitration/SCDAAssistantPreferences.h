//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAAssistantPreferences_h
#define SCDAAssistantPreferences_h
@import Foundation;

@class AFInstanceContext;
@protocol OS_dispatch_queue;

@interface SCDAAssistantPreferences : NSObject {
  /* instance variables */
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForInternalPrefs;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForLanguageCode;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForOutputVoice;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForNanoPrefs;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForAssistantEnablement;
  struct atomic_flag { atomic  _Value; BOOL x0; } _registeredForDictationEnablement;
  NSObject<OS_dispatch_queue> *_navTokenQueue;
  BOOL _navTokenIsValid;
  int _navToken;
  AFInstanceContext *_instanceContext;
}

/* class methods */
+ (id)sharedPreferencesWithInstanceContext:(id)context;
+ (id)sharedPreferences;

/* instance methods */
- (id)initWithInstanceContext:(id)context;
- (id)init;
- (void)_preferencesDidChangeExternally;
- (BOOL)myriadCoordinationEnabled;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)setMyriadCoordinationEnabled:(BOOL)enabled;
- (BOOL)disableMyriadBLEActivity;
- (BOOL)myriadDuckingEnabled;
- (void)setMyriadDuckingEnabled:(BOOL)enabled;
- (id)myriadDeviceGroup;
- (void)setMyriadDeviceGroup:(id)group;
- (BOOL)myriadServerHasProvisioned;
- (void)setMyriadServerHasProvisioned:(BOOL)provisioned;
- (BOOL)myriadServerProvisioning;
- (void)setMyriadServerProvisioning:(BOOL)provisioning;
- (unsigned char)myriadDeviceClass;
- (void)setMyriadDeviceClass:(unsigned char)class;
- (int)myriadConstantGoodness;
- (void)setMyriadConstantGoodness:(int)goodness;
- (float)myriadDeviceAdjust;
- (void)setMyriadDeviceAdjust:(float)adjust;
- (double)myriadDeviceDelay;
- (void)setMyriadDeviceDelay:(double)delay;
- (double)myriadTestDeviceDelay;
- (void)setMyriadTestDeviceDelay:(double)delay;
- (double)myriadDeviceSlowdown;
- (void)setMyriadDeviceSlowdown:(double)slowdown;
- (double)myriadDeviceTrumpDelay;
- (void)setMyriadDeviceTrumpDelay:(double)delay;
- (id)myriadLastWin;
- (void)setMyriadLastWin;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)threshold;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)boost;
- (BOOL)ignoreMyriadPlatformBias;
- (void)setIgnoreMyriadPlatformBias:(BOOL)bias;
- (id)myriadMonitorTimeOutInterval;
- (double)myriadMaxNoOperationDelay;
- (void)setMyriadMaxNoOperationDelay:(double)delay;
@end

#endif /* SCDAAssistantPreferences_h */