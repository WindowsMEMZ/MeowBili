//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAlertControllerVisualStyleProviderWatch_h
#define PUICAlertControllerVisualStyleProviderWatch_h
@import Foundation;

#include "UIAlertControllerVisualStyleProviding-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface PUICAlertControllerVisualStyleProviderWatch : NSObject<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIAlertControllerVisualStyleProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)visualStyleForAlertControllerStyle:(long long)style traitCollection:(id)collection descriptor:(id)descriptor;
- (id)platformStylePresentationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller style:(long long)style;
- (id)platformStyleViewForAlertController:(id)controller inIdiom:(long long)idiom;
- (id)preferredTransitioningDelegate;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (void)animateTransition:(id)transition;
- (double)transitionDuration:(id)duration;
@end

#endif /* PUICAlertControllerVisualStyleProviderWatch_h */