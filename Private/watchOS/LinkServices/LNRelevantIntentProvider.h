//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNRelevantIntentProvider_h
#define LNRelevantIntentProvider_h
@import Foundation;

@class NSXPCConnection;

@interface LNRelevantIntentProvider : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
}

/* instance methods */
- (id)init;
- (void)relevantIntentsForBundleIdentifier:(id)identifier reply:(id /* block */)reply;
- (void)relevantIntentsWithReply:(id /* block */)reply;
@end

#endif /* LNRelevantIntentProvider_h */