//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPDaemonConnection_Protocol_h
#define RPDaemonConnection_Protocol_h
@import Foundation;

@protocol RPDaemonConnection <NSObject>
/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)remoteObjectProxy;
@end

#endif /* RPDaemonConnection_Protocol_h */