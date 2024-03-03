//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 648.2.0.0.0
//
#ifndef NanoCalendarPreferences_h
#define NanoCalendarPreferences_h
@import Foundation;

#include "CalendarPreferences.h"

@class CalPreferences, NPSDomainAccessor, NPSManager, NSArray, NSString;

@interface NanoCalendarPreferences : CalendarPreferences {
  /* instance variables */
  NPSManager *_npsManager;
  NPSDomainAccessor *_domainAccessor;
  CalPreferences *_calPreferences;
  NSString *_cachedOverlayCalendarID;
}

@property (retain, nonatomic) NSArray *customDeselectedCalendarHashes;
@property (retain, nonatomic) NSArray *customDeselectedCalendarIdentifiers;
@property (retain, nonatomic) NSString *customOverlayCalendarID;
@property (nonatomic) BOOL userDismissedAlertForViewSwitcherMoved;

/* class methods */
+ (id)sharedPreferences;
+ (id)calendarSyncIdentifiersFrom:(id)from;
+ (id)overlayCalendarLocaleIDs;
+ (id)overlayCalendarLocaleDisplayNames;
+ (id)currentSelectedCalendarsForEventStore:(id)store;
+ (id)currentSelectedCalendarsForEventStore:(id)store filteredForFocus:(BOOL)focus;
+ (id)_selectedCalendarsFromAllCalendars:(id)calendars deselectedCalendarIdentifier:(id)identifier deselectedCalendarSyncIdentifiers:(id)identifiers deselectedCalendarSyncHashes:(id)hashes;
+ (id)visibleCalendarsInSource:(id)source;
+ (id)hiddenCalendarsInSource:(id)source;
+ (id)_calendarsThatAreVisible:(BOOL)visible source:(id)source;
+ (id)mobileCalDefaults;
+ (id)appDefaults;
+ (BOOL)timeToLeaveAlertGenerationEnabledOnWatch;
+ (BOOL)directSyncEnabled;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_startObserving;
- (void)_stopObserving;
- (void)setLastViewMode:(id)mode;
- (id)preferredDrilldownDayViewType;
- (void)setPreferredDrilldownDayViewType:(id)type;
- (id)lastViewedDate;
- (void)setLastViewedDate:(id)date;
- (id)lastSuspendTime;
- (void)setLastSuspendTime:(id)time;
- (id)customDeselectedCalendarSyncIdentifiers;
- (BOOL)overlayCalendarIsEnabled;
- (id)overlayCalendarID;
- (BOOL)chineseOverlayCalendarIsEnabled;
- (id)overlayCalendar;
- (void)setOverlayCalendarID:(id)id deviceHasCompanion:(BOOL)companion;
- (void)_updateOverlayCalendarCache;
- (void)_reportOverlayCalendarID:(id)id mirroringCompanion:(BOOL)companion;
@end

#endif /* NanoCalendarPreferences_h */