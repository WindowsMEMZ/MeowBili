//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLProxyPushSession_h
#define CPLProxyPushSession_h
@import Foundation;

#include "CPLProxySession.h"
#include "CPLPushChangeSessionImplementation-Protocol.h"

@class NSString;

@interface CPLProxyPushSession : CPLProxySession<CPLPushChangeSessionImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)beginSessionForProxy:(id)proxy knownVersion:(id)version context:(id)context completionHandler:(id /* block */)handler;

/* instance methods */
- (void)commitChangeBatch:(id)batch withCompletionHandler:(id /* block */)handler;
@end

#endif /* CPLProxyPushSession_h */