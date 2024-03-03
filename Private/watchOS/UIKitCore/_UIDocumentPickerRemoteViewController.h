//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDocumentPickerRemoteViewController_h
#define _UIDocumentPickerRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "_UIDocumentPickerServiceInvalidating-Protocol.h"
#include "_UIDocumentPickerViewControllerHost-Protocol.h"

@class NSString;
@protocol UIViewController<_UIDocumentPickerRemoteViewControllerContaining;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController<_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>

@property (weak, nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (void)invalidate;
- (void)viewDidLoad;
- (void)_didSelectURLWrapper:(id)urlwrapper;
- (void)_didSelectURLBookmark:(id)urlbookmark;
- (void)_dismissViewController;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)option;
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })size;
- (void)_stitchFileCreationAtURL:(id)url;
- (void)_tintColorDidChangeToColor:(id)color;
@end

#endif /* _UIDocumentPickerRemoteViewController_h */