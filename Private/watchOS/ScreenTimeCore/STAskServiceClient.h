//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STAskServiceClient_h
#define STAskServiceClient_h
@import Foundation;

@class NSXPCConnection;

@interface STAskServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)sendAskForTimeRequest:(id)request completionHandler:(id /* block */)handler;
- (BOOL)approveExceptionForRequest:(id)request error:(id *)error;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)identifier usageType:(long long)type withCompletionHandler:(id /* block */)handler;
- (void)handleAnswer:(long long)answer requestIdentifier:(id)identifier timeApproved:(id)approved completionHandler:(id /* block */)handler;
@end

#endif /* STAskServiceClient_h */