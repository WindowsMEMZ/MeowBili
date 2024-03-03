//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICandidateBackdropView_h
#define TUICandidateBackdropView_h
@import Foundation;

#include "UIView.h"

@class UIKBBackdropView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBackdropView : UIView

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (long long)backdropViewStyle;
- (void)didMoveToWindow;
@end

#endif /* TUICandidateBackdropView_h */