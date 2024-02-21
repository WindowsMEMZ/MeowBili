//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBGlobalSettings_h
#define BBGlobalSettings_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface BBGlobalSettings : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (copy, nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (readonly, nonatomic) long long globalSpokenNotificationSetting;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContentPreviewSetting:(long long)setting announceSetting:(long long)setting announceHeadphonesSetting:(long long)setting announceCarPlaySetting:(long long)setting scheduledDeliverySetting:(long long)setting scheduledDeliveryTimes:(id)times scheduledDeliveryShowNextSummarySetting:(long long)setting notificationListDisplayStyleSetting:(long long)setting;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BBGlobalSettings_h */