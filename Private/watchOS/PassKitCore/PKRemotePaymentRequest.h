//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemotePaymentRequest_h
#define PKRemotePaymentRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPaymentRequest.h"
#include "PKRemoteDevice.h"

@class NSString;

@interface PKRemotePaymentRequest : NSObject<NSSecureCoding>

@property (readonly, nonatomic) PKRemoteDevice *device;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (copy, nonatomic) NSString *selectedApplicationIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long selectedPaymentMethodType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDevice:(id)device;
- (id)initWithDevice:(id)device identifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRemoteRequest:(id)request;
- (id)description;
@end

#endif /* PKRemotePaymentRequest_h */