//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarServiceItemView_h
#define UIStatusBarServiceItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {
  /* instance variables */
  NSString *_serviceString;
  NSString *_crossfadeString;
  unsigned long long _crossfadeStep;
  double _maxWidth;
  double _serviceWidth;
  double _crossfadeWidth;
  int _contentType;
  BOOL _loopingNecessaryForString;
  BOOL _loopNowIfNecessary;
  BOOL _loopingNow;
  double _letterSpacing;
}

/* instance methods */
- (double)standardPadding;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)overlap;
- (BOOL)updateForContentType:(int)type serviceString:(id)string serviceCrossfadeString:(id)string maxWidth:(double)width actions:(int)actions;
- (BOOL)updateForNewData:(id)data actions:(int)actions;
- (long long)legibilityStyle;
- (double)updateContentsAndWidth;
- (id)_contentsImageFromString:(id)string withWidth:(double)width letterSpacing:(double)spacing;
- (id)_serviceContentsImage;
- (id)_crossfadeContentsImage;
- (id)contentsImage;
- (void)setVisible:(BOOL)visible frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration;
- (BOOL)animatesDataChange;
- (double)extraRightPadding;
- (void)performPendedActions;
- (void)_loopAnimationDidStopInDirection:(BOOL)direction;
- (BOOL)_crossfaded;
- (void)_crossfadeStepAnimation;
- (BOOL)_loopingNecessary;
- (id)accessibilityHUDRepresentation;
@end

#endif /* UIStatusBarServiceItemView_h */