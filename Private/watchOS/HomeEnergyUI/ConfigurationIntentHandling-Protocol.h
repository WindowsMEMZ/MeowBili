//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 107.3.3.0.0
//
#ifndef ConfigurationIntentHandling_Protocol_h
#define ConfigurationIntentHandling_Protocol_h
@import Foundation;

@protocol ConfigurationIntentHandling <NSObject>
@optional
/* instance methods */
- (void)confirmConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)confirmConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)handleConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)handleConfiguration:(id)configuration completion:(id /* block */)completion;
@end

#endif /* ConfigurationIntentHandling_Protocol_h */