//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSVGImageRenderingFetchOperation_h
#define WBSSVGImageRenderingFetchOperation_h
@import Foundation;

#include "WBSWebViewMetadataFetchOperation.h"
#include "WBSSVGImageRenderingRequest.h"

@class NSMutableArray, NSTimer;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation {
  /* instance variables */
  NSMutableArray *_remainingURLs;
  NSTimer *_loadingTimeoutTimer;
}

@property (readonly, @dynamic, nonatomic) WBSSVGImageRenderingRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

/* instance methods */
- (id)initWithRequest:(id)request;
- (id)initWithRequest:(id)request completionHandler:(id /* block */)handler;
- (id)_htmlStringWithURL:(id)url;
- (id)_htmlStringWithSVGContent:(id)svgcontent;
- (id)_htmlStringWithImageElementString:(id)string;
- (void)_loadSVGFileURL:(id)url;
- (void)_renderNextImage;
- (void)_takeSnapshotAndFinish;
- (void)_didCompleteWithImage:(id)image;
- (void)_loadingTimerDidTimeout:(id)timeout;
- (void)_didRenderImage:(id)image;
- (id)webViewConfiguration;
- (struct CGSize { double x0; double x1; })webViewSize;
- (void)startOffscreenFetching;
- (void)willClearWebView;
- (void)didFailFetchWithError:(id)error;
- (void)didFinishNavigation;
@end

#endif /* WBSSVGImageRenderingFetchOperation_h */