//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIHeaderView_h
#define RUIHeaderView_h
@import Foundation;

#include "UIView.h"
#include "RUIHeader-Protocol.h"
#include "RUILinkLabel.h"

@class NSString, UIColor, UIImageView, UILabel;

@interface RUIHeaderView : UIView<RUIHeader> {
  /* instance variables */
  UILabel *_navTitleLabel;
  UILabel *_navSubHeaderLabel;
  UILabel *_headerLabel;
  RUILinkLabel *_detailHeaderLabel;
  UILabel *_subHeaderLabel;
  UIImageView *_iconView;
  int _imageAlignment;
  BOOL _isFirstSection;
  BOOL _customIconSize;
  BOOL _hasLargeIcon;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } margins;
@property (nonatomic) double subHeaderTopMarginValue;
@property (nonatomic) double imageLabelPadding;
@property (copy, nonatomic) UIColor *headerLabelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)_headerOffsetInView:(id)view;
- (id)initWithAttributes:(id)attributes;
- (id)headerLabel;
- (void)setText:(id)text attributes:(id)attributes;
- (void)setHeaderAlignment:(long long)alignment;
- (void)setHeaderColor:(id)color;
- (id)subHeaderLabel;
- (void)setSubHeaderText:(id)text attributes:(id)attributes;
- (void)setSubHeaderAlignment:(long long)alignment;
- (void)setSubHeaderColor:(id)color;
- (void)setSubHeaderTopMargin:(double)margin;
- (id)detailHeaderLabel;
- (void)setDetailText:(id)text attributes:(id)attributes;
- (void)setDetailHeaderColor:(id)color;
- (id)iconImage;
- (void)setIconImage:(id)image;
- (void)setImageSize:(struct CGSize { double x0; double x1; })size;
- (void)setImageAlignment:(int)alignment;
- (void)setSectionIsFirst:(BOOL)first;
- (BOOL)_hasIcon;
- (void)layoutSubviews;
- (double)headerHeightForWidth:(double)width inView:(id)view;
- (void)setNavTitle:(id)title;
- (id)navTitleLabel;
- (void)setNavSubHeaderTitle:(id)title;
- (id)navSubHeaderLabel;
@end

#endif /* RUIHeaderView_h */