//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSMessageLoadingAnalyticController_h
#define MSMessageLoadingAnalyticController_h
@import Foundation;

#include "MSDiagnosticManager.h"

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue;
@property (nonatomic) unsigned long long maxLoadingTimeSeconds;
@property (readonly, copy, nonatomic) NSDictionary *messageLoadTimes;
@property (copy, nonatomic) id /* block */ startedRecordingHandler;
@property (copy, nonatomic) id /* block */ endedRecordingHandler;

/* instance methods */
- (id)initWithDiagnosticManager:(id)manager;
- (id)initWithDiagnosticManager:(id)manager maxLoadingTimeSeconds:(unsigned long long)seconds;
- (void)startRecordingForMessage:(id)message;
- (void)endRecordingForMessage:(id)message;
- (void)endAllRecording;
- (void)_commonInitWithDiagnosticManager:(id)manager maxLoadingTimeSeconds:(unsigned long long)seconds;
- (void)_endRecordingForMessage:(id)message;
- (void)_startTimeoutForMessage:(id)message;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)info;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)message;
@end

#endif /* MSMessageLoadingAnalyticController_h */