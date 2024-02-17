//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPhysicalCardAction_h
#define PKPhysicalCardAction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPhysicalCardPriceOption.h"

@class CNPostalAddress, NSString;

@interface PKPhysicalCardAction : NSObject<NSSecureCoding>

@property (readonly, nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *activationCode;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (copy, nonatomic) CNPostalAddress *shippingAddress;
@property (copy, nonatomic) NSString *nameOnCard;
@property (retain, nonatomic) PKPhysicalCardPriceOption *priceOption;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithActionType:(unsigned long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPhysicalCardAction:(id)action;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)_shippingAddressJSONRepresentation;
@end

#endif /* PKPhysicalCardAction_h */