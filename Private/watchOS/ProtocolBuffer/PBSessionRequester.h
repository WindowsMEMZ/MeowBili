//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 300.41.8.9.2
//
#ifndef PBSessionRequester_h
#define PBSessionRequester_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"
#include "NSURLSessionTaskDelegatePrivate-Protocol.h"
#include "PBDataReader.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject<NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate> {
  /* instance variables */
  NSOperationQueue *_delegateQueue;
  NSOperationQueue *_sessionDelegateQ;
  NSMutableData *_data;
  PBDataReader *_dataReader;
  unsigned long long _lastGoodDataOffset;
  unsigned long long _timeRequestSent;
  unsigned long long _timeResponseReceived;
  long long _responseStatusCode;
  NSMutableArray *_responses;
  NSMutableArray *_internalRequests;
  NSMutableArray *_internalResponses;
  BOOL _didNotifyRequestCompleted;
  NSDictionary *_connectionProperties;
  struct { unsigned int x :1 ignoresResponse; unsigned int x :1 loading; unsigned int x :1 needsCancel; unsigned int x :1 responseStatusSet; unsigned int x :1 parsedResponseHeader; unsigned int x :1 delegateDidReceiveResponse; unsigned int x :1 delegateDidFinish; unsigned int x :1 delegateDidCancel; unsigned int x :1 delegateDidFailWithError; unsigned int x :1 paused; unsigned int x :1 resuming; } _flags;
}

@property (retain, nonatomic) NSURL *URL;
@property (readonly, weak, nonatomic) NSObject<PBSessionRequesterDelegate> *delegate;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *currentTask;
@property (nonatomic) BOOL ignoresResponse;
@property (retain, nonatomic) NSString *logRequestToFile;
@property (retain, nonatomic) NSString *logResponseToFile;
@property (readonly, weak, nonatomic) NSArray *requests;
@property (readonly, nonatomic) unsigned long long uploadPayloadSize;
@property (readonly, nonatomic) unsigned long long downloadPayloadSize;
@property (readonly, nonatomic) unsigned long long requestResponseTime;
@property (copy, nonatomic) NSString *apsRelayTopic;
@property (nonatomic) unsigned long long nwActivityDomain;
@property (nonatomic) unsigned long long nwActivityLabel;
@property (nonatomic) double timeoutSeconds;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSDictionary *httpRequestHeaders;
@property (retain, nonatomic) NSDictionary *httpResponseHeaders;
@property (nonatomic) BOOL shouldHandleCookies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)usesEncodedMessages;

/* instance methods */
- (id)initWithURL:(id)url delegate:(id)delegate queue:(id)queue;
- (void)dealloc;
- (void)setNeedsCancel;
- (void)clearRequests;
- (void)addRequest:(id)request;
- (id)responseForRequest:(id)request;
- (id)internalRequests;
- (void)addInternalRequest:(id)request;
- (id)responseForInternalRequest:(id)request;
- (void)handleResponse:(id)response forInternalRequest:(id)request;
- (void)setHttpRequestHeader:(id)header forKey:(id)key;
- (id)requestPreamble;
- (void)writeRequest:(id)request into:(id)into;
- (void)start;
- (void)cancel;
- (void)pause;
- (BOOL)isPaused;
- (void)resume;
- (void)cancelWithErrorCode:(long long)code;
- (BOOL)readResponsePreamble:(id)preamble;
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)class;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)encodeRequestData:(id)data startRequestCallback:(id /* block */)callback;
- (id)decodeResponseData:(id)data;
- (id)newMutableURLRequestWithURL:(id)url;
- (id)newSessionWithDelegate:(id)delegate delegateQueue:(id)queue;
- (id)newSessionWithDelegate:(id)delegate delegateQueue:(id)queue connectionProperties:(id)properties;
- (id)newSessionTaskOnSession:(id)session withURLRequest:(id)urlrequest;
- (void)startWithConnectionProperties:(id)properties;
@end

#endif /* PBSessionRequester_h */