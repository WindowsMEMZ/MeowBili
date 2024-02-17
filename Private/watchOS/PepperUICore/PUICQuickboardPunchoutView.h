//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardPunchoutView_h
#define PUICQuickboardPunchoutView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface PUICQuickboardPunchoutView : UIView

@property (weak, nonatomic) UIView *punchoutView;

/* instance methods */
- (id)initWithSourceView:(id)view;
- (void)blackoutWithDuration:(double)duration completion:(id /* block */)completion;
- (void)dismissWithPunchoutDuration:(double)duration blackoutOutDuration:(double)duration delay:(double)delay completion:(id /* block */)completion;
@end

#endif /* PUICQuickboardPunchoutView_h */