//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef ACActivityOutputXPCClient_Protocol_h
#define ACActivityOutputXPCClient_Protocol_h
@import Foundation;

@protocol ACActivityOutputXPCClient 
/* instance methods */
- (void)activitiesChanged:(id)changed completion:(id /* block */)completion;
@end

#endif /* ACActivityOutputXPCClient_Protocol_h */