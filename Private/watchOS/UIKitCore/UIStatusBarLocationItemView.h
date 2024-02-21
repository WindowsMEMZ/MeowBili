//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarLocationItemView_h
#define UIStatusBarLocationItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"

@interface UIStatusBarLocationItemView : UIStatusBarItemView {
  /* instance variables */
  int _iconType;
}

/* instance methods */
- (BOOL)updateForNewData:(id)data actions:(int)actions;
- (id)_imageName;
- (id)contentsImage;
- (id)accessibilityHUDRepresentation;
@end

#endif /* UIStatusBarLocationItemView_h */