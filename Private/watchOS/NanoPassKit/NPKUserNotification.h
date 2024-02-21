//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKUserNotification_h
#define NPKUserNotification_h
@import Foundation;

#include "NPKUserNotificationModel-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface NPKUserNotification : NSObject<NPKUserNotificationModel>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *notificationCategoryIdentifier;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSArray *identifierHashComponents;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isSuppressed;
@property (readonly, nonatomic) BOOL wantsBadgedIcon;
@property (readonly, nonatomic) BOOL suppressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)generateModelIdentifierWith:(id)with;
@end

#endif /* NPKUserNotification_h */