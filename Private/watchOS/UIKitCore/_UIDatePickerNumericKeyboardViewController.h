//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerNumericKeyboardViewController_h
#define _UIDatePickerNumericKeyboardViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIKeyboard.h"

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

/* instance methods */
- (id)init;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_updateKeyboardRenderConfiguration;
@end

#endif /* _UIDatePickerNumericKeyboardViewController_h */