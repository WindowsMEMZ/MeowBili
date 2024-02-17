//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarViewController_h
#define UIStatusBarViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIClassicStatusBarView.h"
#include "UIView.h"
#include "UIWindow.h"

@interface UIStatusBarViewController : UIViewController {
  /* instance variables */
  BOOL _iPhoneWS;
  UIWindow *_window;
  UIView *_statusBar;
  UIClassicStatusBarView *_statusBarBackgroundView;
  BOOL _keyboardVisible;
}

/* class methods */
+ (double)statusBarOrientationAnimationDurationFrom:(long long)from to:(long long)to;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isClassicControlWindow:(id)window;
- (void)loadView;
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;
- (void)setStatusBarStyle:(long long)style animationParameters:(id)parameters;
- (void)setStatusBarOrientation:(long long)orientation animationParameters:(id)parameters;
- (void)_prepareForZoom:(BOOL)zoom;
- (void)_zoom:(BOOL)_zoom animated:(BOOL)animated;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)orientation toInterfaceOrientation:(long long)orientation hidden:(BOOL)hidden slideUp:(BOOL)up;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)orientation toInterfaceOrientation:(long long)orientation style:(long long)style hidden:(BOOL)hidden slideUp:(BOOL)up;
- (struct CGSize { double x0; double x1; })_statusBarSizeForOrientation:(long long)orientation;
- (void)_changeStatusBarOrientationFrom:(long long)from toOrientation:(long long)orientation;
- (void)_finishStatusBarOrientationChange;
- (void)_statusBarViewControllerKeyboardWillShow:(id)show;
- (void)_statusBarViewControllerKeyboardDidHide:(id)hide;
- (id)_window;
@end

#endif /* UIStatusBarViewController_h */