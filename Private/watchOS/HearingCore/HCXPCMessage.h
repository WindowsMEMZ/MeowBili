//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef HCXPCMessage_h
#define HCXPCMessage_h
@import Foundation;

#include "HCXPCClient.h"

@class NSDictionary, NSError;
@protocol OS_xpc_object;

@interface HCXPCMessage : NSObject

@property (weak, nonatomic) HCXPCClient *client;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;
@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSError *error;

/* class methods */
+ (id)messageWithPayload:(id)payload xpcMessage:(id)message andClient:(id)client;
+ (id)messageWithPayload:(id)payload;

/* instance methods */
- (id)initWithPayload:(id)payload;
- (id)replyMessageWithPayload:(id)payload;
- (void)dealloc;
- (BOOL)hasEntitlement:(id)entitlement;
- (id)description;
@end

#endif /* HCXPCMessage_h */