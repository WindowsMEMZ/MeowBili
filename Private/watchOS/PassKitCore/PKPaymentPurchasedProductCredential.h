//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPurchasedProductCredential_h
#define PKPaymentPurchasedProductCredential_h
@import Foundation;

#include "PKPaymentCredential.h"
#include "PKPaymentSetupProduct.h"
#include "PKServiceProviderPurchase.h"

@class NSString;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

/* instance methods */
- (id)initWithPaymentSetupProduct:(id)product purchase:(id)purchase;
- (id)metadata;
- (id)detailDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPaymentPurchasedProductCredential:(id)credential;
- (id)setupProductIdentifier;
@end

#endif /* PKPaymentPurchasedProductCredential_h */