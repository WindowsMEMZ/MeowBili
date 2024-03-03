//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKDServer_h
#define PKDServer_h
@import Foundation;

#include "PKDatabase.h"
#include "PKDUserPrefs.h"

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PKDServer : PKDatabase

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } holdLock;
@property unsigned int verbose;
@property (retain) NSObject<OS_dispatch_queue> *xpcQueue;
@property (retain) NSObject<OS_dispatch_queue> *mainQueue;
@property (retain) NSObject<OS_xpc_object> *service;
@property (retain) PKDUserPrefs *userPrefs;
@property (retain) NSObject<OS_dispatch_source> *sigSource;
@property (retain) NSMutableArray *holds;

/* instance methods */
- (void)_startSandbox;
- (id)init;
- (id)initForService:(const char *)service database:(id)database proxyFactory:(id)factory;
- (id)initWithConnection:(id)connection queue:(id)queue database:(id)database proxyFactory:(id)factory;
- (void)run;
- (void)removedPlugIns:(id)ins;
- (void)terminatePlugIns:(id)ins synchronously:(BOOL)synchronously reply:(id /* block */)reply;
- (id)holdOnPlugIn:(id)in;
- (void)addHold:(id)hold silent:(BOOL)silent;
- (void)unholdToken:(id)token silent:(BOOL)silent;
- (void)unholdClient:(id)client;
- (void)stop;
@end

#endif /* PKDServer_h */