//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.1.3.1
//
#ifndef DeleteHealthSampleIntentHandling_Protocol_h
#define DeleteHealthSampleIntentHandling_Protocol_h
@import Foundation;

@protocol DeleteHealthSampleIntentHandling <NSObject>
/* instance methods */
- (void)handleDeleteHealthSample:(id)sample completion:(id /* block */)completion;
- (void)handleDeleteHealthSample:(id)sample completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmDeleteHealthSample:(id)sample completion:(id /* block */)completion;
- (void)confirmDeleteHealthSample:(id)sample completion:(id /* block */)completion;
@end

#endif /* DeleteHealthSampleIntentHandling_Protocol_h */