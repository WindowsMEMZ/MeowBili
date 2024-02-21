//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRecurringPayment_h
#define PKPeerPaymentRecurringPayment_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCloudStoreCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPeerPaymentRecurringPaymentFundingSource.h"
#include "PKPeerPaymentRecurringPaymentMemo.h"
#include "PKPeerPaymentRecurringPaymentTransaction.h"

@class NSArray, NSDate, NSDecimalNumber, NSString;

@interface PKPeerPaymentRecurringPayment : NSObject<NSSecureCoding, PKCloudStoreCoding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) NSString *recipientAltDSID;
@property (nonatomic) BOOL sentByMe;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSDecimalNumber *threshold;
@property (copy, nonatomic) NSString *currency;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentFundingSource *fundingSource;
@property (nonatomic) unsigned long long frequency;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long actions;
@property (copy, nonatomic) NSArray *upcomingPaymentDates;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemo *memo;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentTransaction *lastExecutedTransaction;
@property (nonatomic) BOOL usesAppleCashBalance;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) PKCurrencyAmount *currencyThreshold;
@property (readonly, nonatomic) BOOL lastExecutedTransactionAppearsInHistory;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (id)recordNameForRecurringPaymentIdentifier:(id)identifier;
+ (id)recurringPaymentIdentifierFromRecordName:(id)name;

/* instance methods */
- (id)initWithDictionary:(id)dictionary productTimeZone:(id)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)initWithCloudStoreCoder:(id)coder;
- (void)applyPropertiesFromCloudStoreRecord:(id)record;
- (void)encodeWithCloudStoreCoder:(id)coder codingType:(unsigned long long)type;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)type;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)_actionsForStrings:(id)strings;
@end

#endif /* PKPeerPaymentRecurringPayment_h */