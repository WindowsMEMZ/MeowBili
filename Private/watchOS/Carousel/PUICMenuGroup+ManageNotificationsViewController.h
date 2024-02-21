//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef PUICMenuGroup_ManageNotificationsViewController_h
#define PUICMenuGroup_ManageNotificationsViewController_h
@import Foundation;

@interface PUICMenuGroup (ManageNotificationsViewController)
/* class methods */
+ (id)csl_menuGroupForBulletin:(id)bulletin sectionInfo:(id)info tinkerMode:(BOOL)mode enableDigest:(BOOL)digest actionsHandler:(id)handler;

/* instance methods */
- (id)csl_menuGroupForBulletin:(id)bulletin sectionInfo:(id)info tinkerMode:(BOOL)mode enableDigest:(BOOL)digest actionsHandler:(id)handler;
- (id)makeActionSheetItemUnmuteActionsHandler:(id)handler;
- (id)makeActionSheetItemMuteOneHourActionsHandler:(id)handler;
- (id)makeActionSheetItemMuteForTodayActionsHandler:(id)handler;
- (id)makeActionSheetItemSendToDigestActionsHandler:(id)handler;
- (id)makeActionSheetItemSettingsActionsHandler:(id)handler;
- (id)makeActionSheetItemTurnOffActionsHandler:(id)handler;
- (id)makeActionSheetItemDisableTimeSensitiveActionsHandler:(id)handler;
- (id)makeActionSheetItemEnableTimeSensitiveActionsHandler:(id)handler;
- (id)makeManageActionSheetItemsForBulletin:(id)bulletin sectionInfo:(id)info tinkerMode:(BOOL)mode enableDigest:(BOOL)digest actionsHandler:(id)handler;
@end

#endif /* PUICMenuGroup_ManageNotificationsViewController_h */