//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICSearchCrossfadeAnimation_h
#define PUICSearchCrossfadeAnimation_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface PUICSearchCrossfadeAnimation : NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (BOOL)isPresenting;
@end

#endif /* PUICSearchCrossfadeAnimation_h */