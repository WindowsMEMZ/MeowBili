//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUnblankingSynchronizationConnection_h
#define CSLUnblankingSynchronizationConnection_h
@import Foundation;

#include "CSLUnblankingSynchronizationServerInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLUnblankingSynchronizationConnection : NSObject<CSLUnblankingSynchronizationServerInterface>

@property (readonly, nonatomic) int pid;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPid:(int)pid;
- (id)init;
- (void)dealloc;
- (void)enableUnblankingSynchronization:(BOOL)synchronization;
- (void)readyForUnblank:(unsigned long long)unblank completion:(id /* block */)completion;
@end

#endif /* CSLUnblankingSynchronizationConnection_h */