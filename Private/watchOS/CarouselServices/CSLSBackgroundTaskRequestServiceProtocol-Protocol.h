//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSBackgroundTaskRequestServiceProtocol_Protocol_h
#define CSLSBackgroundTaskRequestServiceProtocol_Protocol_h
@import Foundation;

@protocol CSLSBackgroundTaskRequestServiceProtocol <NSObject>
/* instance methods */
- (void)submitBackgroundTaskRequest:(id)request forBundleID:(id)id;
- (void)submitBackgroundTaskRequest:(id)request forBundleID:(id)id completion:(id /* block */)completion;
- (void)submitBackgroundTaskRequest:(id)request forBundleID:(id)id completionWithError:(id /* block */)error;
- (void)cancelBackgroundTaskRequestForBundleID:(id)id;
- (void)cancelBackgroundTaskRequestForBundleID:(id)id completion:(id /* block */)completion;
- (void)cancelBackgroundTaskRequestForBundleID:(id)id withUUID:(id)uuid completion:(id /* block */)completion;
- (void)submittedRequestsForBundleID:(id)id completion:(id /* block */)completion;
@end

#endif /* CSLSBackgroundTaskRequestServiceProtocol_Protocol_h */