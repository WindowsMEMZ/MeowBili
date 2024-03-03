//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIBarButtonItem_h
#define RUIBarButtonItem_h
@import Foundation;

#include "RUIElement.h"

@class NSString, UIBarButtonItem, UIButton, UIImageView;

@interface RUIBarButtonItem : RUIElement {
  /* instance variables */
  UIButton *_backButton;
  UIImageView *_imageView;
}

@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) NSString *itemType;

/* instance methods */
- (void)_buttonPressed:(id)pressed;
- (id)_createBarButtonItemWithTitle:(id)title style:(long long)style;
- (id)_labelColor;
- (void)setEnabled:(BOOL)enabled;
- (void)updateBackButtonColors;
- (void)setImage:(id)image;
- (void)setImageSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* RUIBarButtonItem_h */