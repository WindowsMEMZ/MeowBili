//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertViewShimAccessoryViewController_h
#define _UIAlertViewShimAccessoryViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIViewController.h"

@interface _UIAlertViewShimAccessoryViewController : UIViewController {
  /* instance variables */
  UIViewController *_accessoryViewController;
  double _preferredHeight;
}

/* instance methods */
- (id)initWithAccessoryViewController:(id)controller;
- (struct CGSize { double x0; double x1; })preferredContentSize;
@end

#endif /* _UIAlertViewShimAccessoryViewController_h */