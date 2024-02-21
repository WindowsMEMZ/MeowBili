//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDNotificationContextProtocol_Protocol_h
#define IMDNotificationContextProtocol_Protocol_h
@import Foundation;

@protocol IMDNotificationContextProtocol <NSObject>
/* instance methods */
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)id;
- (id)notificationCategories;
@optional
/* instance methods */
- (void)populateUserInfoForNotificationContent:(id)content messageBalloonBundleID:(id)id payloadData:(id)data;
- (void)populateUserInfoForNotificationContent:(id)content messageBalloonBundleID:(id)id payloadData:(id)data chatIdentifier:(id)identifier isUrgentMessageTrigger:(BOOL *)trigger shouldSuppressNotification:(BOOL *)notification;
@end

#endif /* IMDNotificationContextProtocol_Protocol_h */