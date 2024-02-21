//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _NSExtensionContextInternalImplementation_Protocol_h
#define _NSExtensionContextInternalImplementation_Protocol_h
@import Foundation;

@protocol _NSExtensionContextInternalImplementation <NSObject>

@property (readonly, copy) NSArray *inputItems;
@property (readonly, copy) NSUUID *_UUID;
@property (readonly) NSXPCConnection *_auxiliaryConnection;
@property (copy) id /* block */ _requestCleanUpBlock;
@property (readonly) id _principalObject;
@property (readonly) struct { unsigned int x0[8] } _extensionHostAuditToken;

/* instance methods */
- (void)completeRequestReturningItems:(id)items completionHandler:(id /* block */)handler;
- (void)cancelRequestWithError:(id)error;
- (void)openURL:(id)url completionHandler:(id /* block */)handler;
- (id)initWithInputItems:(id)items listenerEndpoint:(id)endpoint contextUUID:(id)uuid extensionContext:(id)context;
- (void)_setRequestCleanUpBlock:(id /* block */)block;
@end

#endif /* _NSExtensionContextInternalImplementation_Protocol_h */