//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDragBadge_h
#define _UIDragBadge_h
@import Foundation;

#include "UIView.h"
#include "UIImageView.h"
#include "UILabel.h"

@interface _UIDragBadge : UIView {
  /* instance variables */
  UILabel *_label;
  UIImageView *_imageView;
}

@property (readonly, nonatomic) UILabel *_label;
@property (readonly, nonatomic) UIImageView *_imageView;
@property (nonatomic) long long style;
@property (nonatomic) long long itemCount;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPointForAlignment;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)_updateLabelTextFromItemCount;
- (void)_updateForStyle;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* _UIDragBadge_h */