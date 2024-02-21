//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPageIndicatorImageView_h
#define _UIPageIndicatorImageView_h
@import Foundation;

#include "UIImageView.h"
#include "_UIPageIndicatorView.h"

@interface _UIPageIndicatorImageView : UIImageView {
  /* instance variables */
  struct CGSize { double width; double height; } _cachedSize;
}

@property (nonatomic) _UIPageIndicatorView *indicatorView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setImage:(id)image;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)invalidateIntrinsicContentSize;
- (void)prepare;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)image traits:(id)traits;
- (void)_updateSymbolConfiguration;
@end

#endif /* _UIPageIndicatorImageView_h */