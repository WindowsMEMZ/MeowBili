//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSCloudCallingWebViewController_h
#define TPSCloudCallingWebViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIWebViewDelegate-Protocol.h"

@class NSData, NSString, NSURL, UIActivityIndicatorView, UIWebView;

@interface TPSCloudCallingWebViewController : UIViewController<UIWebViewDelegate>

@property (nonatomic) long long type;
@property (readonly, retain, nonatomic) UIWebView *webView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *body;
@property (readonly, nonatomic) BOOL presentingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithType:(long long)type;
- (void)loadView;
- (BOOL)isPresentingURL;
- (void)loadWebViewWithSpinner:(id /* block */)spinner;
- (void)loadURL:(id)url body:(id)body completion:(id /* block */)completion;
- (void)cancelWebView;
- (void)_cancelButtonClicked:(id)clicked;
- (void)doProvisioningDone;
- (void)doProvisioningCanceled;
- (void)doProvisioningFailed;
- (void)doWebViewTimedOut;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (void)uiWebView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
- (void)setupControllerInWebFrame:(id)frame;
@end

#endif /* TPSCloudCallingWebViewController_h */