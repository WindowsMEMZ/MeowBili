//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMXPCSession_h
#define FMXPCSession_h
@import Foundation;

#include "FMXPCServiceDescription.h"

@class NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface FMXPCSession : NSObject

@property (retain, nonatomic) id _proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id proxy;

/* instance methods */
- (id)initWithServiceDescription:(id)description;
- (void)dealloc;
- (id)syncProxyWithErrorHandler:(id /* block */)handler;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)destroyXPCConnection;
@end

#endif /* FMXPCSession_h */