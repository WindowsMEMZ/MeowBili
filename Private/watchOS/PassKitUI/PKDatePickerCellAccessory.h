//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDatePickerCellAccessory_h
#define PKDatePickerCellAccessory_h
@import Foundation;

#include "UIView.h"

@class UIDatePicker;

@interface PKDatePickerCellAccessory : UIView {
  /* instance variables */
  UIDatePicker *_datePicker;
}

/* class methods */
+ (id)accessoryWithDatePicker:(id)picker;

/* instance methods */
- (id)_initWithDatePicker:(id)picker;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* PKDatePickerCellAccessory_h */