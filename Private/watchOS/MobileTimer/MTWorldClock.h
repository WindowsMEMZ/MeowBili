//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTWorldClock_h
#define MTWorldClock_h
@import Foundation;

#include "INObject.h"

@class NSDateComponents, NSNumber, NSString;

@interface MTWorldClock : INObject

@property (copy, @dynamic, nonatomic) NSString *timeZoneName;
@property (copy, @dynamic, nonatomic) NSDateComponents *currentDate;
@property (copy, @dynamic, nonatomic) NSDateComponents *currentTime;
@property (copy, @dynamic, nonatomic) NSString *city;
@property (copy, @dynamic, nonatomic) NSString *timeZoneDisplayName;
@property (copy, @dynamic, nonatomic) NSString *timeZoneAbbreviation;
@property (copy, @dynamic, nonatomic) NSNumber *timeZoneOffset;
@property (copy, @dynamic, nonatomic) NSNumber *timeZoneOffsetFromGMT;
@property (copy, @dynamic, nonatomic) NSNumber *isDaylightSavingTime;

@end

#endif /* MTWorldClock_h */