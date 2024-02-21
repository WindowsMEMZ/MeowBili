//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSNotificationTopicRecord_h
#define UNSNotificationTopicRecord_h
@import Foundation;

@class NSString;

@interface UNSNotificationTopicRecord : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *sortIdentifier;
@property (nonatomic) BOOL supportsAlerts;
@property (nonatomic) BOOL supportsBadges;
@property (nonatomic) BOOL supportsSounds;
@property (nonatomic) BOOL supportsLockScreen;
@property (nonatomic) BOOL supportsNotificationCenter;
@property (nonatomic) BOOL supportsCarPlay;
@property (nonatomic) BOOL supportsSpoken;
@property (nonatomic) BOOL supportsCriticalAlerts;
@property (nonatomic) BOOL supportsTimeSensitive;
@property (nonatomic) BOOL enablesAlerts;
@property (nonatomic) BOOL enablesBadges;
@property (nonatomic) BOOL enablesSounds;
@property (nonatomic) BOOL enablesLockScreen;
@property (nonatomic) BOOL enablesNotificationCenter;
@property (nonatomic) BOOL enablesCarPlay;
@property (nonatomic) BOOL enablesSpoken;
@property (nonatomic) BOOL enablesCriticalAlerts;
@property (nonatomic) BOOL enablesTimeSensitive;
@property (nonatomic) BOOL modalAlertStyle;

/* instance methods */
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* UNSNotificationTopicRecord_h */