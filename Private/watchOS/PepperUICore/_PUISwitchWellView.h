//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUISwitchWellView_h
#define _PUISwitchWellView_h
@import Foundation;

#include "UIView.h"

@class UIColor, UIView;

@interface _PUISwitchWellView : UIView

@property (retain, nonatomic) UIColor *onTintColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL on;
@property (nonatomic) BOOL showOnOffImages;
@property (retain, nonatomic) UIView *onImageView;
@property (retain, nonatomic) UIView *offImageView;

/* instance methods */
- (id)initWithTintColor:(id)color onTintColor:(id)color;
- (void)updateWellColor;
- (void)layoutSubviews;
@end

#endif /* _PUISwitchWellView_h */