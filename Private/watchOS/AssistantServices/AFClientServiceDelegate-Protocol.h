//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFClientServiceDelegate_Protocol_h
#define AFClientServiceDelegate_Protocol_h
@import Foundation;

@protocol AFClientServiceDelegate <NSObject>
/* instance methods */
- (void)shouldSpeakChanged:(BOOL)changed;
- (void)audioSessionIDChanged:(unsigned int)idchanged;
- (void)requestHandleCommand:(id)command reply:(id /* block */)reply;
- (void)requestRequestedOpenApplicationWithBundleID:(id)id URL:(id)url reply:(id /* block */)reply;
- (void)requestRequestedOpenURL:(id)url reply:(id /* block */)reply;
- (void)requestRequestedDismissAssistant;
- (void)requestRequestedDismissAssistantWithReason:(long long)reason;
- (void)quickStopWasHandledWithActions:(unsigned long long)actions;
- (void)acousticIDRequestWillStart;
- (void)musicWasDetected;
- (void)acousticIDRequestDidFinishWithSuccess:(BOOL)success;
- (void)setUserActivityInfo:(id)info webpageURL:(id)url;
- (void)invalidateCurrentUserActivity;
- (void)cacheImage:(id)image;
- (void)extensionRequestWillStartForApplication:(id)application;
- (void)extensionRequestFinishedForApplication:(id)application error:(id)error;
- (void)startUIRequestWithText:(id)text completion:(id /* block */)completion;
- (void)startUIRequestWithInfo:(id)info completion:(id /* block */)completion;
- (void)requestDidUpdateResponseMode:(id)mode;
- (void)getBulletinContext:(id /* block */)context;
- (void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)xpcwrapper reply:(id /* block */)reply;
- (void)speechRecordingDidBeginOnAVRecordRoute:(id)route audioSessionID:(unsigned int)id reply:(id /* block */)reply;
- (void)speechRecordingDidChangeAVRecordRoute:(id)route isDucking:(BOOL)ducking isTwoShot:(BOOL)shot speechEndHostTime:(unsigned long long)time reply:(id /* block */)reply;
- (void)speechRecordingStartpointDetectedWithReply:(id /* block */)reply;
- (void)speechRecordingPerformTwoShotPromptWithType:(long long)type reply:(id /* block */)reply;
- (void)speechRecordingDidEndWithReply:(id /* block */)reply;
- (void)speechRecordingDidCancelWithReply:(id /* block */)reply;
- (void)speechRecordingDidFail:(id)fail reply:(id /* block */)reply;
- (void)speechRecognized:(id)recognized;
- (void)speechRecognizedAdditionalInterpretation:(id)interpretation refId:(id)id;
- (void)speechRecognizedPartialResult:(id)result;
- (void)speechRecognitionDidFail:(id)fail;
- (void)speechRecordingDidUpdateRecognitionPhrases:(id)phrases utterances:(id)utterances refId:(id)id;
- (void)speechRecordingWillBeginRecognitionUpdateForTask:(id)task;
- (void)willStopRecordingWithSignpostID:(unsigned long long)id;
- (void)aceConnectionWillRetryOnError:(id)error;
- (void)audioSessionDidBeginInterruptionWithUserInfo:(id)info;
- (void)audioSessionDidEndInterruption:(BOOL)interruption userInfo:(id)info;
- (void)audioPlaybackRequestWillStart:(id)start;
- (void)audioPlaybackRequestDidStart:(id)start;
- (void)audioPlaybackRequestDidStop:(id)stop error:(id)error;
- (void)willProcessStartPlayback:(long long)playback intent:(id)intent completion:(id /* block */)completion;
- (void)startPlaybackDidFail:(long long)fail;
- (void)audioSessionWillBecomeActive:(BOOL)active;
- (void)audioSessionDidBecomeActive:(BOOL)active;
- (void)willProcessAppLaunchWithBundleIdentifier:(id)identifier;
- (void)appLaunchFailedWithBundleIdentifier:(id)identifier;
@end

#endif /* AFClientServiceDelegate_Protocol_h */