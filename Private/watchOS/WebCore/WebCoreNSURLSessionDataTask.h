//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebCoreNSURLSessionDataTask_h
#define WebCoreNSURLSessionDataTask_h
@import Foundation;

#include "WebCoreNSURLSession.h"

@class NSError, NSString, NSURLRequest, NSURLResponse;
@protocol {RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>>="m_ptr"^{PlatformMediaResource}}, {RetainPtr<NSError>="m_ptr"^v}, {RetainPtr<NSString>="m_ptr"^v}, {RetainPtr<NSURLRequest>="m_ptr"^v}, {RetainPtr<NSURLResponse>="m_ptr"^v}, {WeakObjCPtr<WebCoreNSURLSession>="m_weakReference"@};

@interface WebCoreNSURLSessionDataTask : NSObject {
  /* instance variables */
  struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> { struct PlatformMediaResource *m_ptr; } _resource;
}

@property WebCoreNSURLSession *session;
@property unsigned long long taskIdentifier;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (readonly, copy) NSError *error;
@property (copy) NSString *taskDescription;
@property float priority;

/* instance methods */
- (id)initWithSession:(id)session identifier:(unsigned long long)identifier request:(id)request;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_restart;
- (void)_cancel;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)_timingData;
- (void)resource:(void *)resource sentBytes:(unsigned long long)bytes totalBytesToBeSent:(unsigned long long)sent;
- (void)resource:(void *)resource receivedResponse:(const void *)response completionHandler:(void *)handler;
- (BOOL)resource:(void *)resource shouldCacheResponse:(const void *)response;
- (void)resource:(void *)resource receivedData:(void *)data;
- (void)resource:(void *)resource receivedRedirect:(const void *)redirect request:(void *)request completionHandler:(void *)handler;
- (void)_resource:(void *)_resource loadFinishedWithError:(id)error metrics:(const void *)metrics;
- (void)resource:(void *)resource accessControlCheckFailedWithError:(const void *)error;
- (void)resource:(void *)resource loadFailedWithError:(const void *)error;
- (void)resourceFinished:(void *)finished metrics:(const void *)metrics;
@end

#endif /* WebCoreNSURLSessionDataTask_h */