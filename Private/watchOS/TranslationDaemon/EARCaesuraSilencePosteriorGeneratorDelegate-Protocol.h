//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef EARCaesuraSilencePosteriorGeneratorDelegate_Protocol_h
#define EARCaesuraSilencePosteriorGeneratorDelegate_Protocol_h
@import Foundation;

@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
/* instance methods */
- (void)clientSilenceFeaturesAvailable:(id)available;
@optional
/* instance methods */
- (void)silenceDurationEstimateAvailable:(float *)available numEstimates:(unsigned long long)estimates clientProcessedAudioMs:(float)ms;
- (void)silencePosteriorGeneratorProcessorIsFinished:(id)finished;
@end

#endif /* EARCaesuraSilencePosteriorGeneratorDelegate_Protocol_h */