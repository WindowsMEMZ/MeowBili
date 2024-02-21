//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef Sleep_h
#define Sleep_h

#import "HKSPAccumulator.h"
#import "HKSPAlarmConfiguration.h"
#import "HKSPAnalyticsDailyReportEvent.h"
#import "HKSPAnalyticsManager.h"
#import "HKSPAnalyticsOnboardingEvent.h"
#import "HKSPAnalyticsOnboardingInfo.h"
#import "HKSPAnalyticsSleepRoomEntryEvent.h"
#import "HKSPAnalyticsSleepScheduleChangeEvent.h"
#import "HKSPAnalyticsSleepScheduleChangeInfo.h"
#import "HKSPAnalyticsStore.h"
#import "HKSPAnalyticsWindDownEvent.h"
#import "HKSPAnalyticsWindDownEventData.h"
#import "HKSPAnalyticsWindDownEventDataWrapper.h"
#import "HKSPChange.h"
#import "HKSPChangeSet.h"
#import "HKSPDNDConfigurationService.h"
#import "HKSPDiagnostics.h"
#import "HKSPDictionaryDeserializer.h"
#import "HKSPDictionaryDiff.h"
#import "HKSPDictionarySerializer.h"
#import "HKSPFeatureAvailabilityStore.h"
#import "HKSPHealthStoreProvider.h"
#import "HKSPLimitingScheduler.h"
#import "HKSPMutableAlarmConfiguration.h"
#import "HKSPMutableSleepEventRecord.h"
#import "HKSPMutableSleepSchedule.h"
#import "HKSPMutableSleepScheduleDayOccurrence.h"
#import "HKSPMutableSleepScheduleOccurrence.h"
#import "HKSPMutableSleepSettings.h"
#import "HKSPObserverSet.h"
#import "HKSPOverrideOccurrenceGenerationResult.h"
#import "HKSPPairedDeviceRegistryProvider.h"
#import "HKSPPersistentStateMachine.h"
#import "HKSPPersistentStateMachineState.h"
#import "HKSPPersistentSyncAnchorContainer.h"
#import "HKSPProperty.h"
#import "HKSPProvenanceInfo.h"
#import "HKSPRelationshipChange.h"
#import "HKSPResolvedSleepScheduleOccurrence.h"
#import "HKSPSensitiveUIMonitor.h"
#import "HKSPSleepEvent.h"
#import "HKSPSleepEventRecord.h"
#import "HKSPSleepEventTimeline.h"
#import "HKSPSleepEventTimelineBuilder.h"
#import "HKSPSleepEventTimelineResults.h"
#import "HKSPSleepFocusConfiguration.h"
#import "HKSPSleepHealthDataSource.h"
#import "HKSPSleepModeButtonModel.h"
#import "HKSPSleepModeObject.h"
#import "HKSPSleepSchedule.h"
#import "HKSPSleepScheduleDayOccurrence.h"
#import "HKSPSleepScheduleModel.h"
#import "HKSPSleepScheduleOccurrence.h"
#import "HKSPSleepScheduleRange.h"
#import "HKSPSleepScheduleStateObject.h"
#import "HKSPSleepSettings.h"
#import "HKSPSleepStore.h"
#import "HKSPSleepStoreCache.h"
#import "HKSPSleepStoreExportedObject.h"
#import "HKSPSleepWidgetManager.h"
#import "HKSPStateMachine.h"
#import "HKSPStateMachineContext.h"
#import "HKSPStateMachineState.h"
#import "HKSPSyncAnchorContainer.h"
#import "HKSPTask.h"
#import "HKSPThrottler.h"
#import "HKSPXPCClient.h"
#import "HKSPXPCClientIdentifier.h"
#import "HKSPXPCConnectionInfo.h"
#import "HKSPXPCConnectionListener.h"
#import "HKSPXPCConnectionProvider.h"
#import "HKSPXPCMessage.h"
#import "_HKSPBoolProperty.h"
#import "_HKSPDefaultScheduleProvider.h"
#import "_HKSPEmptySleepSchedule.h"
#import "_HKSPImmediateScheduler.h"
#import "_HKSPNoop.h"
#import "_HKSPNumberBoxedProperty.h"
#import "_HKSPObjectProperty.h"
#import "_HKSPObserverRecord.h"
#import "_HKSPOrderPreservingScheduler.h"
#import "_HKSPQueueBackedScheduler.h"
#import "_HKSPRelationshipProperty.h"
#import "_HKSPScheduleAndProviderPair.h"
#import "_HKSPSleepEventTimelineAdjustment.h"
#import "_HKSPSynchronized.h"
#import "_HKSPTimeIntervalProperty.h"
#import "_HKSPUnfairLock.h"
#import "_HKSPUnsignedIntegerProperty.h"
#import "_HKSPUserDefaultsStatePersistence.h"
#import "BSDescriptionProviding-Protocol.h"
#import "DNDGlobalConfigurationServiceListener-Protocol.h"
#import "DNDModeConfigurationServiceListener-Protocol.h"
#import "HKFeatureAvailabilityHealthDataSource-Protocol.h"
#import "HKFeatureAvailabilityProviding-Protocol.h"
#import "HKSPAnalyticsEvent-Protocol.h"
#import "HKSPCancelable-Protocol.h"
#import "HKSPClient-Protocol.h"
#import "HKSPDiagnosticsProvider-Protocol.h"
#import "HKSPDictionarySerializable-Protocol.h"
#import "HKSPFeatureAvailabilityPairedDeviceRegistry-Protocol.h"
#import "HKSPFeatureSettingsModel-Protocol.h"
#import "HKSPMutableObject-Protocol.h"
#import "HKSPMutexProvider-Protocol.h"
#import "HKSPObject-Protocol.h"
#import "HKSPOnboardingModel-Protocol.h"
#import "HKSPPersistentStateMachineDelegate-Protocol.h"
#import "HKSPPersistentStateMachineEventHandler-Protocol.h"
#import "HKSPQueueBackedScheduler-Protocol.h"
#import "HKSPScheduler-Protocol.h"
#import "HKSPSerializer-Protocol.h"
#import "HKSPServer-Protocol.h"
#import "HKSPSleepClient-Protocol.h"
#import "HKSPSleepFocusModeBridge-Protocol.h"
#import "HKSPSleepFocusModeBridgeDelegate-Protocol.h"
#import "HKSPSleepServer-Protocol.h"
#import "HKSPSleepStoreObserver-Protocol.h"
#import "HKSPSleepStorePrivateObserver-Protocol.h"
#import "HKSPStateMachineDelegate-Protocol.h"
#import "HKSPStateMachineEventHandler-Protocol.h"
#import "HKSPStateMachineInfoProvider-Protocol.h"
#import "HKSPStatePersistence-Protocol.h"
#import "HKSPSuggestionProvider-Protocol.h"
#import "HKSPSyncAnchor-Protocol.h"
#import "HKSPUserDefaults-Protocol.h"
#import "HKSPXPCConnectionProviderDelegate-Protocol.h"
#import "HKSPXPCObject-Protocol.h"
#import "NACancelable-Protocol.h"
#import "NAEquatable-Protocol.h"
#import "NAHashable-Protocol.h"
#import "NAScheduler-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "NSObject+HKSPProperty.h"
#import "NSCoder+HKSPSerialization.h"
#import "NSCalendar+HKSPSleep.h"
#import "NSDateComponents+HKSPSleep.h"
#import "NSDate+HKSPSleep.h"
#import "_HKBehavior+HKSPSleep.h"
#import "NSDictionary+HKSPSleep.h"
#import "NAFuture+HKSPSleep.h"
#import "NAScheduler+HKSPSleep.h"
#import "NSUserDefaults+HKSPSleep.h"
#import "NSDateInterval+HKSPSleep.h"
#import "NSDateFormatter+HKSPSleep.h"
#import "NSNumber+HKSPSyncAnchor.h"
#import "NSError+HKSPXPCConnectionProvider.h"

#endif /* Sleep_h */