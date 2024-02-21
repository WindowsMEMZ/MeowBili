//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIInputAssistantBackdropView_h
#define TUIInputAssistantBackdropView_h
@import Foundation;

#include "UIView.h"

@class UIVisualEffectView;

@interface TUIInputAssistantBackdropView : UIView {
  /* instance variables */
  UIVisualEffectView *_contentView;
}

@property double contentCornerRadius;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)effectsFor:(id)for;
- (void)_setRenderConfig:(id)config;
- (void)updateVisualStyle:(id)style;
@end

#endif /* TUIInputAssistantBackdropView_h */