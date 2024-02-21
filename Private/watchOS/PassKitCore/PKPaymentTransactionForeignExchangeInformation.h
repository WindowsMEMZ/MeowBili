//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionForeignExchangeInformation_h
#define PKPaymentTransactionForeignExchangeInformation_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKCloudStoreCoding-Protocol.h"
#include "PKCurrencyAmount.h"

@class NSDecimalNumber;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject<NSSecureCoding, PKCloudStoreCoding>

@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount;
@property (copy, nonatomic) NSDecimalNumber *exchangeRate;

/* class methods */
+ (id)recordNamePrefix;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)fkForeignAmount;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (BOOL)isValid;
- (id)initWithCloudStoreCoder:(id)coder;
- (void)applyPropertiesFromCloudStoreRecord:(id)record;
- (void)encodeWithCloudStoreCoder:(id)coder codingType:(unsigned long long)type;
- (void)_encodeServerDataWithCloudStoreCoder:(id)coder;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)type;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToForeignExchangeInformation:(id)information;
@end

#endif /* PKPaymentTransactionForeignExchangeInformation_h */