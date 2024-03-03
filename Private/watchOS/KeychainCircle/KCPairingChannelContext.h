//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef KCPairingChannelContext_h
#define KCPairingChannelContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface KCPairingChannelContext : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelClass;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *uniqueDeviceID;
@property (copy, nonatomic) NSString *uniqueClientID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (copy, nonatomic) NSString *intent;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* KCPairingChannelContext_h */