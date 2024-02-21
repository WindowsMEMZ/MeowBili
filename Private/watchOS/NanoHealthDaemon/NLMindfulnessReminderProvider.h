//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLMindfulnessReminderProvider_h
#define NLMindfulnessReminderProvider_h
@import Foundation;

#include "HKMHSettingsManagerObserver-Protocol.h"
#include "NLBridgeSettings.h"
#include "NLBridgeSettingsObserver-Protocol.h"
#include "NLMindfulnessReminderProviderDelegate-Protocol.h"
#include "NLMindfulnessSessionSource.h"

@class HDProfile, HKMHSettingsManager, NSArray, NSDate, NSString;

@interface NLMindfulnessReminderProvider : NSObject<HKMHSettingsManagerObserver, NLBridgeSettingsObserver> {
  /* instance variables */
  NLBridgeSettings *_bridgeSettings;
  NSDate *_lastStartOfDayNotifiedDate;
  HDProfile *_profile;
  NLMindfulnessSessionSource *_sessionSource;
  HKMHSettingsManager *_stateOfMindSettingsManager;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (nonatomic) double taskDateSlop;
@property (weak, nonatomic) NSObject<NLMindfulnessReminderProviderDelegate> *delegate;
@property (readonly, nonatomic) NSArray *reminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile bridgeSettings:(id)settings sessionSource:(id)source stateOfMindSettingsManager:(id)manager;
- (void)dealloc;
- (id)_typicalDayModel;
- (id)reminderToShowForCurrentDate:(id)date calendar:(id)calendar;
- (id)_customReminderToShowForCurrentDate:(id)date calendar:(id)calendar;
- (id)_startOfDayReminderToShowForCurrentDate:(id)date;
- (id)_endOfDayReminderToShowForCurrentDate:(id)date calendar:(id)calendar;
- (BOOL)_isDate:(id)date withinLeewayOfScheduledDate:(id)date;
- (BOOL)_isStartOfDayReminderSuppressedForUserStartOfDay:(id)day;
- (void)processedReminder:(id)reminder currentDate:(id)date;
- (void)_processedStartOfDayReminderForCurrentDate:(id)date;
- (void)_processedCustomReminder:(id)reminder;
- (void)settingsDidChange:(id)change;
- (void)privacySettingsDidChange:(id)change;
- (void)settingsManagerDidUpdateNotificationSettings:(id)settings;
- (void)_setReminders:(id)reminders;
- (id)nextScheduledReminderForCurrentDate:(id)date calendar:(id)calendar;
- (id)_scheduledDateForReminder:(id)reminder currentDate:(id)date calendar:(id)calendar;
- (id)_scheduledDateForCustomReminder:(id)reminder currentDate:(id)date calendar:(id)calendar;
- (id)_scheduledDateForStartOfDayReminder:(id)reminder;
- (id)_scheduledDateForEndOfDayReminderForCurrentDate:(id)date calendar:(id)calendar;
- (void)pushUserStartOfDayIfNeededForCurrentDate:(id)date;
- (id)_userStartOfDay;
- (id)_userStartOfDayFromModel;
- (id)_userEndOfDay;
- (id)_fallbackEndOfDayForCurrentDate:(id)date calendar:(id)calendar;
- (id)_userDefaultsDomain;
- (id)_mostRecentStartOfDayAlertDate;
- (void)_setMostRecentStartOfDayAlertDate:(id)date;
- (id)_adjustedStartOfDayDate;
- (void)_setAdjustedStartOfDayDate:(id)date;
- (void)_updateReminders;
- (id)_loadCustomReminders;
- (double)_startOfDayOffset;
- (double)_endOfDayOffset;
@end

#endif /* NLMindfulnessReminderProvider_h */