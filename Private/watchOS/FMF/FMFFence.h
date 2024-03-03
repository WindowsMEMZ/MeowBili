//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 488.1.0.0.0
//
#ifndef FMFFence_h
#define FMFFence_h
@import Foundation;

#include "FMFPlacemark.h"
#include "FMFSchedule.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLLocation, NSArray, NSDate, NSString;

@interface FMFFence : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *displayLocationName;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSArray *followerIds;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *friendIdentifier;
@property (retain, nonatomic) NSString *createdByIdentifier;
@property (retain, nonatomic) NSString *pendingIdentifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) FMFPlacemark *placemark;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *trigger;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long locationType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL recurring;
@property (nonatomic) BOOL fromMe;
@property (retain, nonatomic) FMFSchedule *schedule;
@property (retain, nonatomic) NSDate *muteEndDate;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSString *ckRecordZoneOwnerName;
@property (retain, nonatomic) NSString *acceptanceStatus;
@property (readonly, nonatomic) BOOL regionAllowed;
@property (readonly, nonatomic) BOOL onMe;
@property (readonly) BOOL supported;
@property (readonly, nonatomic) BOOL useCloudKitStore;
@property (readonly, nonatomic) BOOL useIDSTrigger;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) NSDate *inviteDate;

/* class methods */
+ (id)endDateForMuteTimespan:(unsigned long long)timespan;
+ (id)genericFriendName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location;

/* instance methods */
- (id)localizedNotificationStringForFollower:(id)follower locationName:(id)name;
- (id)localizedRequestNotificationStringForFollower:(id)follower locationName:(id)name;
- (id)localizedWillBeNotifiedStringForFollower:(id)follower locationName:(id)name;
- (id)localizedSubtitleStringWithLocationName:(id)name;
- (id)initWithRecipient:(id)recipient location:(id)location placemark:(id)placemark label:(id)label trigger:(id)trigger type:(id)type locationType:(unsigned long long)type recurring:(BOOL)recurring;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isOnMe;
- (BOOL)shouldUseIDSTrigger;
- (BOOL)shouldUseCloudKitStore;
- (BOOL)isSupported;
- (BOOL)isRegionAllowed;
- (void)updateFenceLocation:(id)location placemark:(id)placemark label:(id)label trigger:(id)trigger type:(id)type locationType:(unsigned long long)type;
- (void)updateFenceMuteEndDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)locationForDictionary:(id)dictionary;
- (id)handlesForArray:(id)array;
- (id)description;
- (BOOL)isActive;
- (BOOL)isRecurring;
- (BOOL)isFromMe;
@end

#endif /* FMFFence_h */