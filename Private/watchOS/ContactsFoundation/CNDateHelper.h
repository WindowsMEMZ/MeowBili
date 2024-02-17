//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNDateHelper_h
#define CNDateHelper_h
@import Foundation;

@interface CNDateHelper : NSObject
/* class methods */
+ (BOOL)isComponentsEmpty:(id)empty;
+ (id)gregorianCalendar;
+ (id)gregorianCalendarInGMT;
+ (long long)currentGregorianYearInGMT;
+ (long long)gregorianYearInGMTFromDate:(id)date;
+ (long long)gregorianYearFromDate:(id)date;
+ (id)dateWithYear:(long long)year month:(long long)month day:(long long)day;
+ (id)dateWithYear:(long long)year month:(long long)month day:(long long)day hour:(long long)hour minute:(long long)minute second:(long long)second timeZone:(id)zone;
+ (id)componentsFromDate:(id)date;
+ (id)componentsForJanuary1WithYear:(long long)year;
+ (id)dateComponentsInCalendar:(id)calendar fromGregorianDateComponents:(id)components;
+ (id)gregorianDateComponentsFromDateComponents:(id)components;
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)components timeZone:(id)zone;
+ (id)dateComponentsFromDateComponents:(id)components preservingUnits:(unsigned long long)units;
+ (BOOL)isGregorianDerivedCalendar:(id)calendar;
+ (BOOL)isGregorianDerivedCalendarIdentifier:(id)identifier;
@end

#endif /* CNDateHelper_h */