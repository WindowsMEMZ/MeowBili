//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKClockStatusBarSettings_h
#define NTKClockStatusBarSettings_h
@import Foundation;

@class NPSManager;
@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject {
  /* instance variables */
  NPSManager *_npsManager;
  BOOL _notificationsIndicatorEnabled;
  NSObject<OS_dispatch_queue> *_prefsQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isNotificationsIndicatorEnabled;
- (BOOL)_isNotificationsIndicatorEnabledInPreferences;
- (void)setNotificationsIndicatorEnabled:(BOOL)enabled;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
@end

#endif /* NTKClockStatusBarSettings_h */