//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewController_h
#define UIInputViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIInputView.h"
#include "UIKeyboard.h"
#include "UITextDocumentProxy-Protocol.h"
#include "UITextInputDelegate-Protocol.h"
#include "_UITextDocumentInterfaceDelegate-Protocol.h"

@class NSString;

@interface UIInputViewController : UIViewController<_UITextDocumentInterfaceDelegate, UITextInputDelegate> {
  /* instance variables */
  BOOL _commitInputModeOnTouchEnd;
  BOOL _inputModeListIsShown;
  BOOL _viewConformsToRemotePlaceholder;
  double _touchBegan;
  BOOL _alignsToContentViewController;
  BOOL _autosizeToCurrentKeyboard;
}

@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic) BOOL _autosizeToCurrentKeyboard;
@property (retain, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) NSObject<UITextDocumentProxy> *textDocumentProxy;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) BOOL hasDictationKey;
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)_setupInputController;
- (void)dealloc;
- (void)_setTextDocumentProxy:(id)proxy;
- (void)_setAutosizeToCurrentKeyboard:(BOOL)keyboard;
- (void)loadView;
- (void)_updateConformanceCache;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)didReceiveMemoryWarning;
- (id)_extensionContext;
- (void)_setExtensionContextUUID:(id)uuid;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (BOOL)_canResignIfContainsFirstResponder;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (id)_compatibilityController;
- (id)_proxyInterface;
- (id)_textDocumentInterface;
- (void)setView:(id)view;
- (void)dismissKeyboard;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)advanceToNextInputMode;
- (void)handleInputModeListFromView:(id)view withEvent:(id)event;
- (void)returnToPreviousInputMode;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)completion;
- (void)selectionWillChange:(id)change;
- (void)selectionDidChange:(id)change;
- (void)textWillChange:(id)change;
- (void)textDidChange:(id)change;
- (void)_willResetDocumentState;
- (void)_didResetDocumentState;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)_usesCustomBackground;
@end

#endif /* UIInputViewController_h */