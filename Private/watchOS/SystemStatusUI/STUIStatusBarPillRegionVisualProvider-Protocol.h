//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarPillRegionVisualProvider_Protocol_h
#define STUIStatusBarPillRegionVisualProvider_Protocol_h
@import Foundation;

@protocol STUIStatusBarPillRegionVisualProvider <STUIStatusBarVisualProvider>

@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) STUIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;

@optional
/* instance methods */
- (id)animationForBackgroundActivityPillAnimation:(id)animation duration:(double)duration scale:(double)scale;
@end

#endif /* STUIStatusBarPillRegionVisualProvider_Protocol_h */