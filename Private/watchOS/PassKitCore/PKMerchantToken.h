//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMerchantToken_h
#define PKMerchantToken_h
@import Foundation;

@class NSString, NSURL;

@interface PKMerchantToken : NSObject

@property (readonly, copy, nonatomic) NSString *merchantTokenId;
@property (readonly, copy, nonatomic) NSString *appleMerchantId;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSURL *merchantIconURL;
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL;
@property (readonly, copy, nonatomic) NSString *tokenCategory;
@property (readonly, nonatomic) BOOL isDeferredPayment;
@property (readonly, nonatomic) BOOL isAMPPaymentToken;
@property (readonly, nonatomic) BOOL isAppleCashPaymentToken;

/* instance methods */
- (id)initWithMerchantTokenId:(id)id appleMerchantId:(id)id merchantName:(id)name merchantIconURL:(id)url merchantTokenManagementURL:(id)url tokenCategory:(id)category isDeferredPayment:(BOOL)payment;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PKMerchantToken_h */