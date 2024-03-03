//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNUserNotificationSettingsServiceConnectionObserver_Protocol_h
#define UNUserNotificationSettingsServiceConnectionObserver_Protocol_h
@import Foundation;

@protocol UNUserNotificationSettingsServiceConnectionObserver <NSObject>
@optional
/* instance methods */
- (void)settingsServiceConnection:(id)connection didUpdateNotificationSourcesWithIdentifiers:(id)identifiers;
- (void)settingsServiceConnection:(id)connection didUpdateNotificationSystemSettings:(id)settings;
@end

#endif /* UNUserNotificationSettingsServiceConnectionObserver_Protocol_h */