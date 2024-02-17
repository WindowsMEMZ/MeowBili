//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFormattingDeferredFontPickingDelegate_h
#define _UITextFormattingDeferredFontPickingDelegate_h
@import Foundation;

#include "UIFontPickerViewControllerDelegate-Protocol.h"
#include "UIResponderStandardEditActions-Protocol.h"

@class NSString;

@interface _UITextFormattingDeferredFontPickingDelegate : NSObject<UIFontPickerViewControllerDelegate>

@property (nonatomic) double fontSize;
@property (weak, nonatomic) NSObject<UIResponderStandardEditActions> *inputController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_removeAssociatedDelegate;
- (void)fontPickerViewControllerDidCancel:(id)cancel;
- (void)fontPickerViewControllerDidPickFont:(id)font;
@end

#endif /* _UITextFormattingDeferredFontPickingDelegate_h */