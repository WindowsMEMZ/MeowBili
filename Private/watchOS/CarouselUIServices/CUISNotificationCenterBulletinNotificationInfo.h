//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISNotificationCenterBulletinNotificationInfo_h
#define CUISNotificationCenterBulletinNotificationInfo_h
@import Foundation;

#include "CUISNotificationCenterNotificationInfo-Protocol.h"

@class BBBulletin, NSArray, NSDate, NSString, NSTimeZone, UIColor, UIImage, UIView;

@interface CUISNotificationCenterBulletinNotificationInfo : NSObject<CUISNotificationCenterNotificationInfo> {
  /* instance variables */
  BBBulletin *_bulletin;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *modifierIcon;
@property (nonatomic) unsigned long long notificationIconStyle;
@property (retain, nonatomic) UIColor *bodyBackgroundColor;
@property (nonatomic) unsigned long long notificationCount;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) unsigned long long totalAttachmentCount;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL dateIsAllDay;
@property (readonly, nonatomic) BOOL hasEventDate;
@property (readonly, nonatomic) NSDate *recencyDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) UIView *bodyView;
@property (readonly, nonatomic) BOOL hideHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)notificationInfoWithBulletin:(id)bulletin;

/* instance methods */
- (void)_initAttachments;
- (id)_formattedStringForAttachmentType:(long long)type count:(unsigned long long)count;
@end

#endif /* CUISNotificationCenterBulletinNotificationInfo_h */