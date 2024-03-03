//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWKWebViewCapturer_h
#define WFWKWebViewCapturer_h
@import Foundation;

#include "WFCoercionOptions.h"
#include "WFWebResource.h"
#include "WKNavigationDelegate-Protocol.h"

@class NSString, WKNavigation, WKWebView;

@interface WFWKWebViewCapturer : NSObject<WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKNavigation *pageNavigation;
@property (retain, nonatomic) WFWebResource *webResource;
@property (retain, nonatomic) WFCoercionOptions *coercionOptions;
@property BOOL didAttemptToLoadRemoteResources;
@property BOOL userDidAllowLoadingExternalResources;
@property BOOL didPresentSmartPrompt;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)loadWebResource:(id)resource withSize:(struct CGSize { double x0; double x1; })size configuration:(id)configuration coercionOptions:(id)options completionHandler:(id /* block */)handler;
+ (id)deniedExternalResourcesLoadError;

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size configuration:(id)configuration coercionOptions:(id)options;
- (void)loadWebResource:(id)resource completionHandler:(id /* block */)handler;
- (void)generateBlockingContentRuleListWithCompletionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)_webView:(id)view contentRuleListWithIdentifier:(id)identifier performedAction:(id)action forURL:(id)url;
- (id)errorWithErrorCode:(long long)code;
@end

#endif /* WFWKWebViewCapturer_h */