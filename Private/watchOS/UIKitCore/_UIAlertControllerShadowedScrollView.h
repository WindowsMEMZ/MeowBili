//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertControllerShadowedScrollView_h
#define _UIAlertControllerShadowedScrollView_h
@import Foundation;

#include "UIScrollView.h"
#include "_UIAlertControllerGradientView.h"

@interface _UIAlertControllerShadowedScrollView : UIScrollView {
  /* instance variables */
  _UIAlertControllerGradientView *_shadowView;
}

@property (nonatomic) BOOL shouldPinToBottomOnResize;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForPinningToBottomWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setContentSize:(struct CGSize { double x0; double x1; })size;
- (void)_updateScrollabilityAndShadow;
@end

#endif /* _UIAlertControllerShadowedScrollView_h */