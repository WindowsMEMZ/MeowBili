//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef CarbonComponentScannerXPCClient_h
#define CarbonComponentScannerXPCClient_h
@import Foundation;

@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
}

/* instance methods */
- (id)init;
- (id)xpcConnection;
- (void)handleConnectionError:(BOOL)error;
- (struct AudioComponentVector { void * x0; void * x1; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void * x0; } x2; BOOL x3; })initialScan:(id)scan;
- (void)rescan:(id)rescan added:(void *)added removed:(void *)removed;
@end

#endif /* CarbonComponentScannerXPCClient_h */