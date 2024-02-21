//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSFVoiceTriggerEventInfoSelfLoggerDarwin_h
#define CSFVoiceTriggerEventInfoSelfLoggerDarwin_h
@import Foundation;

#include "CSFVoiceTriggerEventInfoSelfLogger.h"
#include "CSFCircularEventsCacheBuffer.h"

@protocol OS_dispatch_queue;

@interface CSFVoiceTriggerEventInfoSelfLoggerDarwin : CSFVoiceTriggerEventInfoSelfLogger

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *firstPassEvents;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *rejectEvents;
@property (retain, nonatomic) CSFCircularEventsCacheBuffer *cancelledEvents;

/* instance methods */
- (id)init;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)completion;
- (void)logStartEventWithFirstPassStartedInfo:(id)info withMHUUID:(id)mhuuid;
- (void)logTriggerEventWithVTEI:(id)vtei withMHUUID:(id)mhuuid;
- (void)logRejectEventWithVTEI:(id)vtei withMHUUID:(id)mhuuid withSecondPassResult:(unsigned long long)result;
- (void)logCancelledEventWithMHUUID:(id)mhuuid;
- (void)logTwoShotEndEventWithSuppresedAlert:(BOOL)alert withTimedOut:(BOOL)out withMHUUID:(id)mhuuid;
- (void)logTwoShotStartEventWithPromptType:(unsigned int)type withMHUUID:(id)mhuuid;
- (void)logTwoShotDetectedWithMHUUID:(id)mhuuid;
- (void)logSiriLaunchStartedWithVoiceTriggerEventInfo:(id)info;
- (void)logSiriLaunchCompletedWithVoiceTriggerEventInfo:(id)info;
@end

#endif /* CSFVoiceTriggerEventInfoSelfLoggerDarwin_h */