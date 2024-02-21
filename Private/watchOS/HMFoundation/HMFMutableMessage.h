//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFMutableMessage_h
#define HMFMutableMessage_h
@import Foundation;

#include "HMFMessage.h"
#include "HMFActivity.h"
#include "HMFMessageDestination.h"
#include "HMFMessageTransport.h"

@class NSDictionary, NSString, NSUUID;

@interface HMFMutableMessage : HMFMessage

@property (copy, @dynamic, nonatomic) NSUUID *identifier;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) double timeout;
@property (@dynamic, nonatomic) long long qualityOfService;
@property (retain, @dynamic, nonatomic) HMFMessageDestination *destination;
@property (weak, @dynamic, nonatomic) HMFMessageTransport *transport;
@property (retain, @dynamic, nonatomic) HMFActivity *activity;
@property (copy, @dynamic, nonatomic) NSDictionary *userInfo;
@property (copy, @dynamic, nonatomic) NSDictionary *headers;
@property (copy, @dynamic, nonatomic) NSDictionary *messagePayload;
@property (copy, @dynamic, nonatomic) id /* block */ responseHandler;
@property (retain, @dynamic, nonatomic) NSString *untrustedClientIdentifier;

/* instance methods */
- (void)setUserInfoValue:(id)value forKey:(id)key;
- (void)setHeaderValue:(id)value forKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMFMutableMessage_h */