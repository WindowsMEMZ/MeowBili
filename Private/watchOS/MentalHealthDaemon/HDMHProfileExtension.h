//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMHProfileExtension_h
#define HDMHProfileExtension_h
@import Foundation;

#include "HDFeatureAvailabilityExtensionProvider-Protocol.h"
#include "HDMHNotificationManager.h"
#include "HDProfileExtension-Protocol.h"

@class HDAnalyticsDailyEventManager, HDBackgroundFeatureDeliveryManager, HDFeatureAvailabilityManager, HDPrimaryProfile, HKMHSettingsManager, NSString;

@interface HDMHProfileExtension : NSObject<HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
  /* instance variables */
  HDFeatureAvailabilityManager *_stateOfMindLoggingFeatureAvailabilityManager;
  HDFeatureAvailabilityManager *_depressionAndAnxietyAssessmentsFeatureAvailabilityManager;
  HDBackgroundFeatureDeliveryManager *_depressionAndAnxietyAssessmentsBackgroundFeatureDeliveryManager;
  HDFeatureAvailabilityManager *_periodicDepressionAndAnxietyAssessmentPromptsFeatureAvailabilityManager;
  HDBackgroundFeatureDeliveryManager *_periodicDepressionAndAnxietyAssessmentPromptsBackgroundFeatureDeliveryManager;
  HDFeatureAvailabilityManager *_stateOfMindLoggingPatternEscalationsFeatureAvailabilityManager;
  HDBackgroundFeatureDeliveryManager *_stateOfMindLoggingPatternEscalationsBackgroundFeatureDeliveryManager;
  HDAnalyticsDailyEventManager *_mentalHealthDailyEventManager;
}

@property (readonly, nonatomic) HKMHSettingsManager *settingsManager;
@property (readonly, nonatomic) HDMHNotificationManager *notificationManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)initWithProfile:(id)profile typicalDayProvider:(id)provider;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)identifier;
@end

#endif /* HDMHProfileExtension_h */