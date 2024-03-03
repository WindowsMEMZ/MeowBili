//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarServerInviteNotificationItem_h
#define CalDAVCalendarServerInviteNotificationItem_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CalDAVCalendarServerAccessItem.h"
#include "CalDAVCalendarServerOrganizerItem.h"
#include "CalDAVSupportedCalendarComponentSet.h"

@class CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *uid;
@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic;
@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL;
@property (retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;

/* instance methods */
- (id)init;
- (id)initForReplyWithUID:(id)uid href:(id)href hostURL:(id)url summary:(id)summary;
- (id)copyParseRules;
- (BOOL)isComponentSupportedForString:(id)string;
@end

#endif /* CalDAVCalendarServerInviteNotificationItem_h */