//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef EKCalendarItemAlertInfo_h
#define EKCalendarItemAlertInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class EKTravelEngineHypothesis, NSData, NSDate, NSString, NSTimeZone, NSURL, NSUserActivity;

@interface EKCalendarItemAlertInfo : NSObject<NSCopying>

@property (nonatomic) long long triggerType;
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *eventTimeZone;
@property (readonly, nonatomic) NSUserActivity *appLink;
@property (readonly, nonatomic) NSURL *entityID;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) BOOL tentative;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) int databaseID;
@property (readonly, nonatomic) BOOL acknowledged;
@property (readonly, nonatomic) NSString *dismissalID;
@property (readonly, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL refiring;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, nonatomic) BOOL isPseudoEvent;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) BOOL hasGeoLocationCoordinates;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } geoLocationCoordinates;
@property (nonatomic) BOOL hasOrganizerThatIsNotCurrentUser;
@property (copy, nonatomic) NSString *organizerEmailAddress;
@property (copy, nonatomic) NSString *startLocationRouting;
@property (copy, nonatomic) NSString *locationAddress;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) NSDate *lastTimeBulletinAdded;
@property (nonatomic) BOOL isSuggestedLocation;
@property (nonatomic) BOOL isOnSharedCalendar;
@property (nonatomic) BOOL hasDisplayedLeaveByMessage;
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage;
@property (nonatomic) BOOL hasDisplayedRunningLateMessage;
@property (nonatomic) unsigned long long currentRouteHypothesizerNotificationType;
@property (copy, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) BOOL isPurelyATimeToLeaveAlert;

/* instance methods */
- (id)initWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative publisherBulletinID:(id)id entityID:(id)id appLink:(id)link proximity:(long long)proximity externalID:(id)id databaseID:(int)id acknowledged:(BOOL)acknowledged dismissalID:(id)id alarmID:(id)id isOffsetFromTravelTimeStart:(BOOL)start refiring:(BOOL)refiring pseudoEvent:(BOOL)event;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)resetTimeToLeaveDisplayState;
@end

#endif /* EKCalendarItemAlertInfo_h */