//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationClientImpl_h
#define AKAuthorizationClientImpl_h
@import Foundation;

#include "AKAuthorizationClientProtocol-Protocol.h"

@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject<AKAuthorizationClientProtocol>

@property (retain, nonatomic) NSObject<AKAuthorizationUIProvider> *uiProvider;

/* instance methods */
- (void)presentAuthorizationUIForContext:(id)context completion:(id /* block */)completion;
- (void)dealloc;
@end

#endif /* AKAuthorizationClientImpl_h */