//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAlertControllerVisualStyleActionSheetCar_h
#define UIAlertControllerVisualStyleActionSheetCar_h
@import Foundation;

#include "UIAlertControllerVisualStyleActionSheet.h"

@interface UIAlertControllerVisualStyleActionSheetCar : UIAlertControllerVisualStyleActionSheet
/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)view;
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInTitleLabel;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
@end

#endif /* UIAlertControllerVisualStyleActionSheetCar_h */