//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRunnerPrewarmManager_h
#define WFRunnerPrewarmManager_h
@import Foundation;

@class NSXPCConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (retain, nonatomic) NSXPCConnection *runner;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (void)prewarmRunnerIfNecessary;
- (void)reset;
@end

#endif /* WFRunnerPrewarmManager_h */