//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSURLSessionHandler_h
#define TPSURLSessionHandler_h
@import Foundation;

#include "TPSURLSessionDelegate-Protocol.h"
#include "TPSURLSessionManagerDelegate-Protocol.h"

@class NSIndexSet, NSString;
@protocol TPSURLSessionHandlerDelegate;

@interface TPSURLSessionHandler : NSObject<TPSURLSessionManagerDelegate, TPSURLSessionDelegate>

@property (weak, nonatomic) NSObject<TPSURLSessionHandlerDelegate> *delegate;
@property (nonatomic) BOOL shouldIgnoreInMemoryCaching;
@property (retain, nonatomic) NSIndexSet *excludeCachingDataTypes;
@property (retain, nonatomic) NSString *passphrase;
@property (retain, nonatomic) NSString *certificateFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)cacheControllerForDataType:(long long)type;
- (id)URLSessionManagerSessionOperationQueue:(id)queue;
- (id)URLSessionManagerSessionConfiguration:(id)configuration;
- (BOOL)URLSessionManagerShouldCoalesceRequest:(id)request;
- (void)sessionTask:(id)task willCacheResponse:(id)response completionHandler:(id /* block */)handler;
- (BOOL)shouldCacheToDiskForSessionTask:(id)task;
- (id)processJSONFormattedDataForCDSError:(id)cdserror;
- (void)storeCachedResponseData:(id)data forSessionTask:(id)task;
- (void)sessionTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)sessionTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (BOOL)respectCachingForRequest:(id)request;
- (void)sessionTask:(id)task didCompleteWithError:(id)error;
- (void)URLSessionManagerDidReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)sessionTask:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
@end

#endif /* TPSURLSessionHandler_h */