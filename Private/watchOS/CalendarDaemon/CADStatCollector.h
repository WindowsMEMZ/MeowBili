//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADStatCollector_h
#define CADStatCollector_h
@import Foundation;

@interface CADStatCollector : NSObject

@property (readonly, nonatomic) BOOL wantsStores;
@property (readonly, nonatomic) BOOL wantsCalendars;
@property (readonly, nonatomic) BOOL wantsOccurrences;
@property (readonly, nonatomic) BOOL wantsEvents;

/* class methods */
+ (BOOL)enabled;
+ (id)eventName;

/* instance methods */
- (BOOL)enabled;
- (id)eventName;
- (id)desiredOccurrenceRange;
- (void)prepareWithContext:(id)context;
- (void)processStores:(id)stores;
- (void)processCalendars:(id)calendars inStore:(void *)store;
- (void)processBirthdayCalendarEvents:(id)events;
- (void)processOccurrences:(id)occurrences;
- (void)processEvents:(id)events;
- (void)processSignificantEventWithPredictedLocation:(BOOL)location onSharedCalendar:(BOOL)calendar;
- (id)eventDictionaries;
@end

#endif /* CADStatCollector_h */