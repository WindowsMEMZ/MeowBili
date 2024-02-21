//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRSpeakerAnalyzerPSRDelegate_Protocol_h
#define SSRSpeakerAnalyzerPSRDelegate_Protocol_h
@import Foundation;

@protocol SSRSpeakerAnalyzerPSRDelegate <NSObject>
@optional
/* instance methods */
- (void)voiceRecognitionPSRAnalyzer:(id)psranalyzer hasVoiceRecognitionInfo:(id)info;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)processing withVoiceRecognitionInfo:(id)info;
@end

#endif /* SSRSpeakerAnalyzerPSRDelegate_Protocol_h */