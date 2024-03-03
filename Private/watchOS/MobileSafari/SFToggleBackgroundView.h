//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFToggleBackgroundView_h
#define SFToggleBackgroundView_h
@import Foundation;

#include "UIView.h"

@interface SFToggleBackgroundView : UIView {
  /* instance variables */
  struct CGSize { double width; double height; } _shapeSize;
  long long _cornerRoundingMode;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)radius;
- (void)tintColorDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
@end

#endif /* SFToggleBackgroundView_h */