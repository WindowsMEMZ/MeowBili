//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef YQLRequest_h
#define YQLRequest_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface YQLRequest : NSObject<NSURLSessionDataDelegate> {
  /* instance variables */
  NSURLSession *_defaultSession;
  NSURLSessionTask *_dataTask;
  NSURLRequest *_request;
  NSMutableData *_rawData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)appendDebugString:(id)string;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)data;
+ (BOOL)shouldGenerateOfflineData;

/* instance methods */
- (id)_yahooDoppelganger_taskForRequest:(id)request delegate:(id)delegate;
- (id)init;
- (void)dealloc;
- (void)_createDefaultSession;
- (void)_loadDefaultSessionIfNeeded;
- (id)taskForRequest:(id)request delegate:(id)delegate;
- (void)loadRequest:(id)request;
- (BOOL)isLoading;
- (void)parseData:(id)data;
- (void)didParseData;
- (void)failWithError:(id)error;
- (void)failToParseWithData:(id)data;
- (void)failToParseWithDataSeriesDictionary:(id)dictionary;
- (void)cancel;
- (void)cancelAndInvalidate;
- (id)aggregateDictionaryDomain;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
@end

#endif /* YQLRequest_h */