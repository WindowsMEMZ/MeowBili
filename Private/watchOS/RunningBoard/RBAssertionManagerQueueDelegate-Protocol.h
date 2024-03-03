//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBAssertionManagerQueueDelegate_Protocol_h
#define RBAssertionManagerQueueDelegate_Protocol_h
@import Foundation;

@protocol RBAssertionManagerQueueDelegate <NSObject>
/* instance methods */
- (void)eventQueue:(id)queue handleInvalidationEventForAssertion:(id)assertion;
- (void)eventQueue:(id)queue handleWarningEventForAssertion:(id)assertion;
- (void)eventQueue:(id)queue handleAssertionsExpirationWarningEventForProcessIdentity:(id)identity expirationTime:(double)time;
- (double)eventQueue:(id)queue startTimeForAssertion:(id)assertion;
- (double)eventQueue:(id)queue remainingRuntimeForProcessIdentity:(id)identity;
@end

#endif /* RBAssertionManagerQueueDelegate_Protocol_h */