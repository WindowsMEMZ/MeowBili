//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHEarnedInstanceStoreObserving_Protocol_h
#define ACHEarnedInstanceStoreObserving_Protocol_h
@import Foundation;

@protocol ACHEarnedInstanceStoreObserving <NSObject>
/* instance methods */
- (void)earnedInstanceStore:(id)store didAddNewEarnedInstances:(id)instances;
- (void)earnedInstanceStore:(id)store didRemoveEarnedInstances:(id)instances;
- (void)earnedInstanceStoreDidReceiveSyncNotification:(id)notification;
@optional
/* instance methods */
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)fetch;
@end

#endif /* ACHEarnedInstanceStoreObserving_Protocol_h */