//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef DAUserNotificationUtilities_h
#define DAUserNotificationUtilities_h
@import Foundation;

@interface DAUserNotificationUtilities : NSObject
/* class methods */
+ (void)showUserNotification:(struct __CFUserNotification *)notification groupIdentifier:(id)identifier callbackQueue:(id)queue sourceRunLoop:(id)loop completionBlock:(id /* block */)block;
@end

#endif /* DAUserNotificationUtilities_h */