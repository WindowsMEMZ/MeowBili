//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERemoteTrainingServerInterface_Protocol_h
#define RERemoteTrainingServerInterface_Protocol_h
@import Foundation;

@protocol RERemoteTrainingServerInterface <NSObject>
/* instance methods */
- (void)performTrainingWithElements:(id)elements events:(id)events interactions:(id)interactions completion:(id /* block */)completion;
- (void)updateRemoteAttribute:(id)attribute forKey:(id)key completion:(id /* block */)completion;
@end

#endif /* RERemoteTrainingServerInterface_Protocol_h */