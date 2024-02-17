//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICWheelsOfTimeButton_h
#define PUICWheelsOfTimeButton_h
@import Foundation;

#include "UIButton.h"

@interface PUICWheelsOfTimeButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchEdgeInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getMaxTextBounds;
- (struct __CFAttributedString *)_newAttributedString:(id)string withFont:(id)font usingKerning:(double)kerning textColor:(id)color;
- (void)setButtonText:(id)text selectedFont:(id)font selectedTextColor:(id)color unselectedFont:(id)font unselectedTextColor:(id)color kerning:(double)kerning;
- (id)_createButtonImage:(struct __CFAttributedString *)image;
@end

#endif /* PUICWheelsOfTimeButton_h */