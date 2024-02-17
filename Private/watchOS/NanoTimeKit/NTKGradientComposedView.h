//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGradientComposedView_h
#define NTKGradientComposedView_h
@import Foundation;

#include "UIView.h"
#include "NTKGradientView.h"
#include "NTKRoundedCornerOverlayView.h"

@class UIImageView, UIView;

@interface NTKGradientComposedView : UIView

@property (readonly, nonatomic) NTKGradientView *backgroundGradientView;
@property (readonly, nonatomic) NTKGradientView *backgroundGradientTransitionView;
@property (readonly, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) UIView *backgroundDimmingView;
@property (readonly, nonatomic) UIView *cornerMaskView;
@property (readonly, nonatomic) NTKRoundedCornerOverlayView *cornerOverlayView;
@property (readonly, nonatomic) UIView *composedView;
@property (readonly, nonatomic) NTKGradientView *filterGradientView;
@property (nonatomic) BOOL filterOn;
@property (nonatomic) UIView *rootContainerView;
@property (nonatomic) BOOL showForegroundGradient;

/* instance methods */
- (id)initWithDevice:(id)device;
- (void)applyGossamerColorPalette:(id)palette;
- (void)applyEditingComplicationsFraction:(double)fraction;
- (void)applyImageViewTransitionFraction:(double)fraction;
- (void)applyBackgroundGradientColorsFromPalette:(id)palette;
- (void)applyGradientColorsFromColorPalette:(id)palette toView:(id)view;
- (void)applyForegroundGradientWithTopColor:(id)color centerColor:(id)color bottomColor:(id)color;
@end

#endif /* NTKGradientComposedView_h */