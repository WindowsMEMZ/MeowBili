//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNTriggeredEventNotificationEKDataSource_h
#define CALNTriggeredEventNotificationEKDataSource_h
@import Foundation;

#include "CALNAlarmEngineMonitor-Protocol.h"
#include "CALNCalendarCoreLocationManager.h"
#include "CALNDataSourceEventRepresentationProvider-Protocol.h"
#include "CALNDebugPreferences-Protocol.h"
#include "CALNFoundInAppsEventTracker-Protocol.h"
#include "CALNRemoteMutator-Protocol.h"
#include "CALNRouteHypothesizerProvider-Protocol.h"
#include "CALNSuggestionsServiceLogger-Protocol.h"
#include "CALNTTLEventTracker-Protocol.h"
#include "CALNTimeToLeaveRefreshMonitor-Protocol.h"
#include "CALNTimeToLeaveRefreshMonitorDelegate-Protocol.h"
#include "CALNTravelEngine-Protocol.h"
#include "CALNTravelEngineDelegate-Protocol.h"
#include "CALNTriggeredEventNotificationDataSource-Protocol.h"
#include "CALNTriggeredEventNotificationDataSourceDelegate-Protocol.h"
#include "CALNTriggeredEventNotificationMailtoURLProvider.h"

@class NSString;
@protocol EKEventStoreProvider;

@interface CALNTriggeredEventNotificationEKDataSource : NSObject<CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource>

@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider;
@property (readonly, nonatomic) NSObject<CALNRemoteMutator> *remoteMutator;
@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider;
@property (readonly, nonatomic) CALNCalendarCoreLocationManager *coreLocationManager;
@property (readonly, nonatomic) NSObject<CALNTTLEventTracker> *ttlEventTracker;
@property (readonly, nonatomic) NSObject<CALNAlarmEngineMonitor> *alarmEngineMonitor;
@property (readonly, nonatomic) NSObject<CALNTravelEngine> *travelEngine;
@property (readonly, nonatomic) NSObject<CALNFoundInAppsEventTracker> *foundInAppsEventTracker;
@property (readonly, nonatomic) NSObject<CALNSuggestionsServiceLogger> *suggestionsServiceLogger;
@property (readonly, nonatomic) NSObject<CALNRouteHypothesizerProvider> *routeHypothesizerProvider;
@property (readonly, nonatomic) NSObject<CALNTimeToLeaveRefreshMonitor> *timeToLeaveRefreshMonitor;
@property (readonly, nonatomic) NSObject<CALNDebugPreferences> *debugPreferences;
@property (readonly, nonatomic) CALNTriggeredEventNotificationMailtoURLProvider *mailtoURLProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNTriggeredEventNotificationDataSourceDelegate> *delegate;

/* class methods */
+ (double)snoozeInterval;
+ (id)_alarmDateForAlarm:(id)alarm eventStartDate:(id)date;
+ (id)_alarmForEvent:(id)event withAlarmID:(id)id;
+ (id)_sourceClientIdentifierForAlertInfo:(id)info;

/* instance methods */
- (id)initWithEventStoreProvider:(id)provider remoteMutator:(id)mutator dataSourceEventRepresentationProvider:(id)provider coreLocationProvider:(id)provider ttlEventTracker:(id)tracker alarmEngineMonitor:(id)monitor travelEngine:(id)engine foundInAppsEventTracker:(id)tracker suggestionsServiceLogger:(id)logger routeHypothesizerProvider:(id)provider timeToLeaveRefreshMonitor:(id)monitor debugPreferences:(id)preferences mailtoURLProvider:(id)urlprovider;
- (id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)identifier isProtectedDataAvailable:(BOOL)available;
- (BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)identifier;
- (BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)id;
- (BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)date eventID:(id)id;
- (id)notificationExpirationDateForEventID:(id)id alarmID:(id)id;
- (id)_notificationExpirationDateForNullableAlarmDate:(id)date eventEndDate:(id)date;
- (id)_notificationExpirationDateForAlarmDate:(id)date eventEndDate:(id)date;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)date sourceClientIdentifier:(id)identifier;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)date eventID:(id)id;
- (void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)identifier;
- (void)removeTimeToLeaveRefreshTimerForEventID:(id)id;
- (void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)id triggerDate:(id)date;
- (double)_requestHypothesisRefreshInterval;
- (void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)identifier;
- (void)ceaseRouteMonitoringEventWithEventID:(id)id;
- (void)acknowledgeEventWithSourceClientIdentifier:(id)identifier shouldMarkAsHavingReceivedLocation:(BOOL)location;
- (void)snoozeEventWithSourceClientIdentifier:(id)identifier snoozeType:(unsigned long long)type;
- (void)handleDirectionsActionWithSourceClientIdentifier:(id)identifier hypothesis:(id)hypothesis lastFireTimeOfAlertOffsetFromTravelTime:(id)time;
- (void)handleConferenceCallActionWithSourceClientIdentifier:(id)identifier;
- (void)handleMailOrganizerActionWithSourceClientIdentifier:(id)identifier hypothesis:(id)hypothesis;
- (void)travelEngine:(id)engine receivedHypothesis:(id)hypothesis eventExternalURL:(id)url;
- (void)travelEngine:(id)engine eventSignificantlyChangedWithEventExternalURL:(id)url;
- (void)travelEngine:(id)engine authorizationChanged:(BOOL)changed;
- (void)timeToLeaveRefreshMonitor:(id)monitor refreshTimerFiredForEventExternalURL:(id)url;
- (void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)identifier hypothesis:(id)hypothesis travelAdvisoryTimelinessPeriod:(unsigned long long)period;
- (void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)identifier;
- (void)didDismissUINotification:(unsigned long long)uinotification forPlannedDestination:(id)destination dismissalType:(unsigned long long)type;
- (void)_alertsFired:(id)fired;
- (void)_alertFiredForAlertInfo:(id)info;
- (BOOL)_shouldTriggerForAlertInfo:(id)info;
- (id)_filterAlerts:(id)alerts;
- (BOOL)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)identifier event:(id)event alarmID:(id)id;
- (void)_handleNotificationActionForSourceClientIdentifier:(id)identifier acknowledgeAlarm:(BOOL)alarm eventActions:(id /* block */)actions;
- (id)_eventForSourceClientIdentifier:(id)identifier;
- (id)_eventForEventID:(id)id;
- (id)eventObjectIDForEventID:(id)id;
@end

#endif /* CALNTriggeredEventNotificationEKDataSource_h */