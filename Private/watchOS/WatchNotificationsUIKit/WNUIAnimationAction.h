//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAnimationAction_h
#define WNUIAnimationAction_h
@import Foundation;

#include "BSAction.h"

@interface WNUIAnimationAction : BSAction

@property (readonly) unsigned long long animationType;
@property (readonly) double duration;
@property (readonly) BOOL animated;
@property (readonly) BOOL useScaleTransformForBannerDismiss;

/* class methods */
+ (id)actionWithAnimationType:(unsigned long long)type duration:(double)duration animated:(BOOL)animated useScaleTransformForBannerDismiss:(BOOL)dismiss completion:(id /* block */)completion;

/* instance methods */
- (id)description;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* WNUIAnimationAction_h */