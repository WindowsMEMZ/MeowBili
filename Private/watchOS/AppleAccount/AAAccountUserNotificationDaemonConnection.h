//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAAccountUserNotificationDaemonConnection_h
#define AAAccountUserNotificationDaemonConnection_h
@import Foundation;

@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AAAccountUserNotificationDaemonConnection : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
  NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

/* instance methods */
- (id)init;
- (id)initWithListenerEndpoint:(id)endpoint;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)_connection;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
@end

#endif /* AAAccountUserNotificationDaemonConnection_h */