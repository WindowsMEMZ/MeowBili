//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavBarPrompt_h
#define _UINavBarPrompt_h
@import Foundation;

#include "UIView.h"
#include "UILabel.h"
#include "UINavigationBar.h"

@class NSString;

@interface _UINavBarPrompt : UIView {
  /* instance variables */
  UILabel *_label;
  UINavigationBar *_navBar;
}

@property (copy, nonatomic) NSString *prompt;

/* instance methods */
- (id)initWithNavBar:(id)bar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })promptBounds;
- (struct CGSize { double x0; double x1; })_updateLabelTextColorAndFontReturningShadowOffset;
- (void)layoutSubviews;
@end

#endif /* _UINavBarPrompt_h */