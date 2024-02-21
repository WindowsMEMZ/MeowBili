//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertLifecycleActionCoordinatorDelegate_Protocol_h
#define WNUIAlertLifecycleActionCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol WNUIAlertLifecycleActionCoordinatorDelegate <NSObject>
/* instance methods */
- (void)lifecycleActionCoordinator:(id)coordinator didEnqueueLifecycleAction:(unsigned long long)action;
- (void)lifecycleActionCoordinator:(id)coordinator performLifecycleAction:(unsigned long long)action animated:(BOOL)animated;
- (void)lifecycleActionCoordinator:(id)coordinator didSkipRedundantLifecycleAction:(unsigned long long)action;
@end

#endif /* WNUIAlertLifecycleActionCoordinatorDelegate_Protocol_h */