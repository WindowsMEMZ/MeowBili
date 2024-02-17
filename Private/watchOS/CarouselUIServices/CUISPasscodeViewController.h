//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISPasscodeViewController_h
#define CUISPasscodeViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CUISAlertSheetController.h"
#include "CUISBlockedView.h"
#include "CUISBlockedViewDataSource-Protocol.h"
#include "CUISPasscodeEntryView.h"
#include "CUISPasscodeEntryViewDataSource-Protocol.h"
#include "CUISPasscodeEntryViewDelegate-Protocol.h"
#include "PUICActionSheetControllerDelegate-Protocol.h"

@class NSString, NSTimer, PUICActivityIndicatorView, UIViewController;
@protocol CUISPasscodeViewControllerDelegate, CUISSetupAsyncPasscodeCreationViewControllerDelegate;

@interface CUISPasscodeViewController : UIViewController<CUISPasscodeEntryViewDelegate, CUISPasscodeEntryViewDataSource, CUISBlockedViewDataSource, PUICActionSheetControllerDelegate> {
  /* instance variables */
  int _mode;
  CUISPasscodeEntryView *_entry;
  unsigned long long _currentPasscodeFieldStyle;
  unsigned long long _newPasscodeFieldStyle;
  int _simplePasscodeType;
  PUICActivityIndicatorView *_spinner;
  BOOL _isWaiting;
  long long _passcodeLengthLimit;
  CUISBlockedView *_blockedView;
  NSTimer *_unblockTimer;
  BOOL _passcodeEntryBegan;
  BOOL _passcodeAnimatationInProgress;
  long long _passcodeVisibility;
}

@property (copy, nonatomic) NSString *changingPasscode;
@property (copy, nonatomic) NSString *currentPasscode;
@property (nonatomic) long long activeFieldType;
@property (retain, nonatomic) UIViewController *alertSheetPresenter;
@property (retain, nonatomic) CUISAlertSheetController *errorAlertSheet;
@property (weak, nonatomic) NSObject<CUISSetupAsyncPasscodeCreationViewControllerDelegate> *asynchronousDelegate;
@property (weak, nonatomic) NSObject<CUISPasscodeViewControllerDelegate> *delegate;
@property (nonatomic) BOOL shouldShowCancel;
@property (nonatomic) BOOL shouldUseLockScreenAnimation;
@property (nonatomic) BOOL shouldShowSpinnerOnEntry;
@property (nonatomic) BOOL shouldShowReentryPrompt;
@property (nonatomic) BOOL shouldHideBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;

/* instance methods */
- (id)_initWithMode:(int)mode newType:(long long)type;
- (id)init;
- (id)initWithMode:(int)mode;
- (id)initComplexWithMode:(int)mode;
- (id)initForChangeWithCurrentPasscode:(id)passcode newPasscodeType:(long long)type;
- (void)reset;
- (unsigned long long)passcodeStyleForPasscodeEntryView:(id)view;
- (unsigned long long)defaultLengthOfSimplePasscodeForPasscodeEntryView:(id)view;
- (unsigned long long)minimumLengthOfComplexPasscodeForPasscodeEntryView:(id)view;
- (unsigned long long)maximumLengthOfComplexPasscodeForPasscodeEntryView:(id)view;
- (BOOL)shouldShowCancelButtonInPasscodeEntryView:(id)view;
- (id)titleForPasscodeEntryView:(id)view;
- (void)passcodeEntryView:(id)view didEnterPasscode:(id)passcode;
- (void)didCancelPasscodeEntryView:(id)view;
- (void)didBeginEnteringPasscodeInView:(id)view;
- (void)didClearPasscodeEntryView:(id)view;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)isPermanentlyBlockedForBlockedView:(id)view;
- (BOOL)isTemporarilyBlockedForBlockedView:(id)view;
- (long long)maxMinutesToBlockForBlockedView:(id)view;
- (double)remainingTimeInSecondsForBlockedView:(id)view;
- (void)_setActiveFieldType:(long long)type animated:(BOOL)animated withNewTitle:(id)title;
- (void)_setActiveFieldType:(long long)type;
- (void)refreshBlockedState;
- (BOOL)useDefaultBlockedView;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)_fixVisibilityIfNeededForCompletedVisibility:(long long)visibility;
- (void)_setWaiting:(BOOL)waiting animated:(BOOL)animated;
- (void)_showConfirmPasscode:(id)passcode;
- (void)_showDifferingPasscodes;
- (id)_defaultMessageForError:(id)error;
- (id)_messageForError:(id)error;
- (void)_showPasscodeError:(id)error shouldResetByDefault:(BOOL)default;
- (BOOL)validatePasscode:(id)passcode error:(id *)error;
- (BOOL)_privateValidatePasscode:(id)passcode outError:(id *)error;
- (BOOL)_privateChangePasscodeFrom:(id)from to:(id)to outError:(id *)error;
- (unsigned long long)simplePasscodeLength;
- (void)_useOrRejectWeakNewPasscode:(id)passcode;
- (void)_checkIfNewPasscodeIsAcceptable:(id)acceptable;
- (void)_passcodeEntered:(id)entered;
- (void)removeActionSheetPresenter;
- (void)actionSheetController:(id)controller didDismissWithActionAtIndexPath:(id)path;
- (long long)_activeFieldType;
@end

#endif /* CUISPasscodeViewController_h */