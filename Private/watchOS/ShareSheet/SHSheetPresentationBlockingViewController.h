//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetPresentationBlockingViewController_h
#define SHSheetPresentationBlockingViewController_h
@import Foundation;

#include "UIViewController.h"
#include "SHSheetContentPresenter-Protocol.h"

@class UIBarButtonItem;

@interface SHSheetPresentationBlockingViewController : UIViewController

@property (retain, nonatomic) UIBarButtonItem *closeButton;
@property (weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter;

/* instance methods */
- (id)initWithPresenter:(id)presenter;
- (void)loadView;
- (void)viewDidLoad;
- (id)_createSystemCloseButton;
- (void)_handleClose;
@end

#endif /* SHSheetPresentationBlockingViewController_h */