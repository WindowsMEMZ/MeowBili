//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSShutdownForEcoModeClient_h
#define CSLSShutdownForEcoModeClient_h
@import Foundation;

@class NSXPCConnection;

@interface CSLSShutdownForEcoModeClient : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)shutdownForEcoMode:(id)mode;
- (id)_createConnectionIfNecessary;
- (void)_dropConnection;
@end

#endif /* CSLSShutdownForEcoModeClient_h */