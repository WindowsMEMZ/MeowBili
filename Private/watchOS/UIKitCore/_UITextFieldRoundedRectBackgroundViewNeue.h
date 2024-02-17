//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFieldRoundedRectBackgroundViewNeue_h
#define _UITextFieldRoundedRectBackgroundViewNeue_h
@import Foundation;

#include "UIView.h"
#include "UIColor.h"

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {
  /* instance variables */
  struct { unsigned int x :1 enabled; unsigned int x :1 hasFlexibleCornerRadius; unsigned int x :1 usesSinglePixelLineWidth; } _flags;
}

@property (nonatomic) BOOL usesSinglePixelLineWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL hasFlexibleCornerRadius;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame active:(BOOL)active;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame active:(BOOL)active usesSinglePixelLineWidth:(BOOL)width;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame active:(BOOL)active usesSinglePixelLineWidth:(BOOL)width updateView:(BOOL)view;
- (void)updateView;
- (void)setEnabled:(BOOL)enabled animated:(BOOL)animated;
- (id)_strokeColor:(BOOL)color;
- (id)_fillColor:(BOOL)color;
- (double)_screenScale;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (void)layoutSubviews;
- (void)setActive:(BOOL)active;
@end

#endif /* _UITextFieldRoundedRectBackgroundViewNeue_h */