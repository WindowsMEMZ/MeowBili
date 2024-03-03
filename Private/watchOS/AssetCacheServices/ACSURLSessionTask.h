//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 131.0.0.0.0
//
#ifndef ACSURLSessionTask_h
#define ACSURLSessionTask_h
@import Foundation;

#include "ACSURLSession.h"
#include "NSCopying-Protocol.h"
#include "NSProgressReporting-Protocol.h"

@class NSError, NSProgress, NSString, NSURLRequest, NSURLResponse, NSURLSessionTask;

@interface ACSURLSessionTask : NSObject<NSCopying, NSProgressReporting>

@property (copy) id /* block */ _nsurlTaskCreator;
@property (retain) NSURLSessionTask *_nsurlTaskToOrigin;
@property (retain) NSURLSessionTask *_nsurlTaskToCachingServer;
@property (weak) ACSURLSession *_weakSession;
@property (readonly) BOOL _isUpload;
@property BOOL _tryCachingServer;
@property BOOL _failBackToOrigin;
@property BOOL _suspended;
@property (readonly) unsigned long long taskIdentifier;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) NSProgress *progress;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesClientExpectsToReceive;
@property (readonly) long long countOfBytesReceived;
@property (readonly) long long countOfBytesSent;
@property (readonly) long long countOfBytesExpectedToSend;
@property (readonly) long long countOfBytesExpectedToReceive;
@property (copy) NSString *taskDescription;
@property (readonly) long long state;
@property (readonly, copy) NSError *error;
@property float priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)cancel;
- (void)suspend;
- (void)resume;
- (id)initWithNSURLTaskCreator:(id /* block */)creator initialRequest:(id)request forSession:(id)session;
- (id)_nsurlTaskForRequest:(id)request;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ACSURLSessionTask_h */