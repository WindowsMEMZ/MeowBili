//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIChronoButton_h
#define CLKUIChronoButton_h
@import Foundation;

#include "UIControl.h"

@class UIColor, UIImageView;

@interface CLKUIChronoButton : UIControl {
  /* instance variables */
  UIImageView *_ringView;
  UIImageView *_fillView;
  struct CGPoint { double x; double y; } _originalCenter;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *swapColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *ringColor;
@property (retain, nonatomic) UIColor *ringSwapColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchEdgeInsets;

/* class methods */
+ (id)_fillImageWithRadius:(double)radius lineThickness:(double)thickness;
+ (id)_ringImageWithRadius:(double)radius lineThickness:(double)thickness;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithDiameter:(double)diameter;
- (id)initWithDiameter:(double)diameter lineThickness:(double)thickness;
- (void)_setupImagesWithDiameter:(double)diameter lineThickness:(double)thickness;
- (void)setEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)_performTouchAnimationThroughColor:(id)color toColor:(id)color toRingColor:(id)color;
- (void)_updateColors;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* CLKUIChronoButton_h */