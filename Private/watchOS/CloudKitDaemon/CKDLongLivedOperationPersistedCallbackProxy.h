//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDLongLivedOperationPersistedCallbackProxy_h
#define CKDLongLivedOperationPersistedCallbackProxy_h
@import Foundation;

#include "CKDOperationInfoCache.h"
#include "CKOperationCallbacks-Protocol.h"

@class NSString, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject<CKOperationCallbacks>

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) Protocol *callbackProtocol;
@property (nonatomic) SEL completionSelector;
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache;

/* instance methods */
- (id)initWithOperationID:(id)id callbackProtocol:(id)protocol completionSelector:(SEL)selector operationInfoCache:(id)cache;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* CKDLongLivedOperationPersistedCallbackProxy_h */