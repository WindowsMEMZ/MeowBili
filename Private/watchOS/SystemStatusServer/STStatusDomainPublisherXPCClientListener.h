//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusDomainPublisherXPCClientListener_h
#define STStatusDomainPublisherXPCClientListener_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "STStatusDomainPublisherServerHandle-Protocol.h"

@class NSString, NSXPCListener;

@interface STStatusDomainPublisherXPCClientListener : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  NSObject<STStatusDomainPublisherServerHandle> *_serverHandle;
  NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServerHandle:(id)handle;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* STStatusDomainPublisherXPCClientListener_h */