//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVConferenceXPCClient_h
#define AVConferenceXPCClient_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AVConferenceXPCClient : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *replyQueue;
  NSObject<OS_dispatch_queue> *connectionQueue;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSMutableDictionary *registeredBlocks;
@property BOOL connectionPersists;

/* class methods */
+ (id)AVConferenceXPCClientSingleton;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)newNSDictionaryFromXPCDictionary:(id)xpcdictionary;
- (id)newXPCDictionaryFromNSDictionary:(id)nsdictionary error:(id *)error;
- (id)newNSErrorFromNSDictionary:(id)nsdictionary;
- (id)newNSDictionaryFromNSError:(id)nserror;
- (id)newNSDictionaryFromNSDictionary:(id)nsdictionary;
- (id)newServerDiedDictionary;
- (id)newTimeoutDictionary;
- (id)copyConnection;
- (void)closeConnectionToServer;
- (id)createConnectionToServer;
- (void)sendMessageAsync:(char *)async;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments reply:(id /* block */)reply;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments reply:(id /* block */)reply queue:(id)queue;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments xpcArguments:(id)arguments reply:(id /* block */)reply;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments xpcArguments:(id)arguments reply:(id /* block */)reply queue:(id)queue;
- (void)sendMessageAsync:(char *)async arguments:(id)arguments xpcArguments:(id)arguments reply:(id /* block */)reply queue:(id)queue replyLogLevel:(int)level;
- (id)sendMessageSync:(char *)sync;
- (id)sendMessageSync:(char *)sync arguments:(id)arguments;
- (id)sendMessageSync:(char *)sync arguments:(id)arguments xpcArguments:(id)arguments;
- (void)registerBlockForService:(char *)service block:(id /* block */)block;
- (void)registerBlockForService:(char *)service block:(id /* block */)block queue:(id)queue;
- (void)registerBlockForService:(char *)service block:(id /* block */)block queue:(id)queue eventLogLevel:(int)level;
- (void)deregisterFromService:(char *)service;
@end

#endif /* AVConferenceXPCClient_h */