//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSTodo_h
#define ICSTodo_h
@import Foundation;

#include "ICSCalendarItem.h"
#include "ICSDate.h"
#include "ICSDuration.h"
#include "ICSStructuredLocation.h"
#include "ICSUserAddress.h"

@class NSArray, NSData, NSString, NSURL;

@interface ICSTodo : ICSCalendarItem

@property (retain, @dynamic) NSArray *attach;
@property (retain, @dynamic) NSArray *attendee;
@property (@dynamic) int classification;
@property (retain, nonatomic) ICSDate *completed;
@property (nonatomic) long long percentComplete;
@property (retain, @dynamic) ICSDate *created;
@property (retain, @dynamic) NSString *description;
@property (retain, @dynamic) ICSDate *dtstamp;
@property (retain, @dynamic) ICSDate *dtstart;
@property (retain, nonatomic) ICSDate *due;
@property (retain, @dynamic) ICSDuration *duration;
@property (retain, @dynamic) NSArray *exdate;
@property (retain, @dynamic) NSArray *exrule;
@property (retain, @dynamic) ICSDate *last_modified;
@property (retain, @dynamic) NSString *location;
@property (retain, @dynamic) ICSUserAddress *organizer;
@property (@dynamic) unsigned long long priority;
@property (retain, @dynamic) NSArray *rdate;
@property (retain, @dynamic) ICSDate *recurrence_id;
@property (retain, @dynamic) NSArray *rrule;
@property (@dynamic) unsigned long long sequence;
@property (@dynamic) int status;
@property (retain, @dynamic) NSString *summary;
@property (retain, @dynamic) NSString *uid;
@property (retain, @dynamic) NSURL *url;
@property (retain, @dynamic) NSString *x_apple_ews_changekey;
@property (retain, @dynamic) NSString *x_apple_ews_itemid;
@property (@dynamic) BOOL x_apple_ews_needsserverconfirmation;
@property (retain, @dynamic) NSString *x_apple_ews_permission;
@property (nonatomic) unsigned long long x_apple_sort_order;
@property (retain, @dynamic) ICSStructuredLocation *x_apple_structured_location;
@property (retain, @dynamic) NSArray *conferences;
@property (retain, nonatomic) NSArray *x_apple_activity;
@property (retain, nonatomic) NSData *x_apple_appLinkData;

/* class methods */
+ (id)name;

/* instance methods */
- (void)fixComponent;
- (BOOL)validate:(id *)validate;
- (id)propertiesToIncludeForChecksumVersion:(int)version;
@end

#endif /* ICSTodo_h */