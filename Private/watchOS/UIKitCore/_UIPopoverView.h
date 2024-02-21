//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPopoverView_h
#define _UIPopoverView_h
@import Foundation;

#include "UIView.h"
#include "UIActionSheet.h"
#include "UIColor.h"
#include "UIImageView.h"
#include "UIPopoverBackgroundView.h"
#include "UIPopoverController.h"
#include "UIView.h"
#include "_UICutoutShadowView.h"

@interface _UIPopoverView : UIView {
  /* instance variables */
  UIView *_contentView;
  UIPopoverBackgroundView *_backgroundView;
  UIView *_clipView;
  Class _backgroundViewClass;
  UIImageView *_toolbarShine;
}

@property (nonatomic) BOOL showsBackgroundComponentHighlights;
@property (nonatomic) BOOL showsBackgroundViewHighlight;
@property (nonatomic) BOOL showsContentViewHighlight;
@property (readonly, nonatomic) BOOL contentExtendsOverArrow;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long backgroundBlurEffectStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) BOOL chromeHidden;
@property (nonatomic) BOOL chromeHiddenForSizeTransition;
@property (retain, nonatomic) _UICutoutShadowView *shadowView;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) double animationOvershootHeight;
@property (retain, nonatomic) UIActionSheet *presentedActionSheet;
@property (nonatomic) UIPopoverController *popoverController;

/* class methods */
+ (id)popoverViewContainingView:(id)view;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame backgroundViewClass:(Class)class;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame backgroundViewClass:(Class)class embeddedInView:(BOOL)view contentExtendsOverArrow:(BOOL)arrow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)willMoveToWindow:(id)window;
- (void)_layoutToolbarShine;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (void)layoutSubviews;
- (int)_style;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)contentView;
- (id)backgroundView;
- (id)standardChromeView;
- (id)toolbarShine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snapshotBounds;
- (void)_setPopoverContentView:(id)view;
- (BOOL)_allowsCustomizationOfContent;
- (void)_updateAlphaForChromeHidden;
- (void)setUseToolbarShine:(BOOL)shine;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame arrowOffset:(double)offset;
- (void)_setCornerRadius:(double)radius;
- (void)_showArrow;
- (void)_hideArrow;
- (void)_performBlockCheckingDefinesTintColor:(id /* block */)color;
@end

#endif /* _UIPopoverView_h */