//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDTinkerPrivacyAlertCoordinator_h
#define HDTinkerPrivacyAlertCoordinator_h
@import Foundation;

#include "HDPrimaryProfile.h"
#include "HDRestorableAlarm.h"

@class NSDate, NSDateComponents;
@protocol OS_dispatch_queue;

@interface HDTinkerPrivacyAlertCoordinator : NSObject {
  /* instance variables */
  HDPrimaryProfile *_profile;
  HDRestorableAlarm *_scheduler;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (readonly, nonatomic) NSDateComponents *_unitTest_scheduledBirthdayTransparencyAlertComponents;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)_queue_clearDueEvents:(id)events;
- (BOOL)_unitTest_didReceiveDueEvents:(id)events;
- (id)allScheduledEventsWithError:(id *)error;
- (id)allScheduledDueDatesWithError:(id *)error;
- (BOOL)scheduleEventIfRequiredForDateComponents:(id)components eventIdentifier:(id)identifier error:(id *)error;
- (void)_userCharacteristicsDidChangeNotification:(id)notification;
- (BOOL)removeAllEventsWithError:(id *)error;
- (BOOL)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)birthdate error:(id *)error;
@end

#endif /* HDTinkerPrivacyAlertCoordinator_h */