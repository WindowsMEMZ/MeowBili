//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNTriggeredEventNotificationFeedbackHelper_h
#define CALNTriggeredEventNotificationFeedbackHelper_h
@import Foundation;

@interface CALNTriggeredEventNotificationFeedbackHelper : NSObject
/* class methods */
+ (void)recordDisplayOfInitialTimeToLeaveAlertForSourceClientIdentifier:(id)identifier event:(id)event hypothesis:(id)hypothesis travelAdvisoryTimelinessPeriod:(unsigned long long)period foundInAppsEventTracker:(id)tracker suggestionsServiceLogger:(id)logger ttlEventTracker:(id)tracker;
+ (void)sendFeedbackForPostingNotificationWithTravelAdvisoryTimelinessPeriod:(unsigned long long)period sourceClientIdentifier:(id)identifier travelEngine:(id)engine;
@end

#endif /* CALNTriggeredEventNotificationFeedbackHelper_h */