//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStoreDemoSupportServer_h
#define CSLStoreDemoSupportServer_h
@import Foundation;

#include "CSLSStoreDemoSupportServerInterface-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface CSLStoreDemoSupportServer : NSObject<NSXPCListenerDelegate, CSLSStoreDemoSupportServerInterface> {
  /* instance variables */
  NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)storeDemoSupportServer;

/* instance methods */
- (id)init;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)isRunningInStoreDemoMode:(id /* block */)mode;
@end

#endif /* CSLStoreDemoSupportServer_h */