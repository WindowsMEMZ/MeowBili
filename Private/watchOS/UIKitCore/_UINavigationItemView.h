//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationItemView_h
#define _UINavigationItemView_h
@import Foundation;

#include "UIView.h"
#include "UILabel.h"
#include "UINavigationItem.h"
#include "UIView.h"

@interface _UINavigationItemView : UIView {
  /* instance variables */
  UINavigationItem *_item;
  struct CGSize { double width; double height; } _titleSize;
  UIView *_topCrossView;
  UIView *_bottomCrossView;
  BOOL _isCrossFading;
  BOOL _customFontSet;
  UILabel *_label;
}

@property (nonatomic) BOOL _isFadingInFromCustomAlpha;

/* instance methods */
- (id)initWithNavigationItem:(id)item;
- (id)navigationItem;
- (id)_defaultFont;
- (id)_currentTextColorForBarStyle:(long long)style;
- (id)_currentTextShadowColorForBarStyle:(long long)style;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)style;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateLabelColor;
- (void)_updateLabelContents;
- (double)_titleYAdjustmentCustomization;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (void)_updateLabel;
- (void)layoutSubviews;
- (void)_resetTitleSize;
- (struct CGSize { double x0; double x1; })_titleSize;
- (id)title;
- (void)setTitleAutoresizesToFit:(BOOL)fit;
- (BOOL)titleAutoresizesToFit;
- (void)_setFont:(id)font;
- (void)setFont:(id)font;
- (id)font;
- (void)_setLineBreakMode:(long long)mode;
- (id)description;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x0; double x1; })size;
- (void)_crossFadeHiddingButton:(BOOL)button;
- (void)_cleanUpCrossView;
- (void)_setFadingInFromCustomAlpha:(BOOL)alpha;
@end

#endif /* _UINavigationItemView_h */