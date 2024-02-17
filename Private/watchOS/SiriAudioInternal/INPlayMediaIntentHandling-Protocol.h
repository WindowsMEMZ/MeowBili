//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.2.0.0
//
#ifndef INPlayMediaIntentHandling_Protocol_h
#define INPlayMediaIntentHandling_Protocol_h
@import Foundation;

@protocol INPlayMediaIntentHandling <NSObject>
/* instance methods */
- (void)handlePlayMedia:(id)media completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmPlayMedia:(id)media completion:(id /* block */)completion;
- (void)resolveMediaItemsForPlayMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolvePlayShuffledForPlayMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolvePlaybackRepeatModeForPlayMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolveResumePlaybackForPlayMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolvePlaybackQueueLocationForPlayMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolvePlaybackSpeedForPlayMedia:(id)media withCompletion:(id /* block */)completion;
@end

#endif /* INPlayMediaIntentHandling_Protocol_h */