//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef FBApplicationProcessLaunchTransactionObserver_Protocol_h
#define FBApplicationProcessLaunchTransactionObserver_Protocol_h
@import Foundation;

@protocol FBApplicationProcessLaunchTransactionObserver <BSTransactionObserver>
@optional
/* instance methods */
- (void)transaction:(id)transaction willLaunchProcess:(id)process;
- (void)transaction:(id)transaction didLaunchProcess:(id)process;
@end

#endif /* FBApplicationProcessLaunchTransactionObserver_Protocol_h */