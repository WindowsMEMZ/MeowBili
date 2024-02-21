//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPaymentTransactionManager_h
#define FCPaymentTransactionManager_h
@import Foundation;

#include "FCPaymentTransactionManager-Protocol.h"
#include "FCPaymentTransactionManagerDelegate-Protocol.h"
#include "FCPaymentTransactionObserver.h"
#include "FCPaymentTransactionObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FCPaymentTransactionManager : NSObject<FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager>

@property (retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver;
@property (retain, nonatomic) NSMutableDictionary *paymentQueueByProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCPaymentTransactionManagerDelegate> *delegate;

/* instance methods */
- (id)init;
- (BOOL)canMakePayments;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)entry;
- (void)startPurchaseWithTagID:(id)id productID:(id)id purchaseID:(id)id bundleID:(id)id appAdamID:(id)id storeExternalVersion:(id)version price:(id)price webAccessOptIn:(BOOL)in payment:(id)payment;
- (id)createPaymentQueueWithProductID:(id)id purchaseID:(id)id bundleID:(id)id webAccessOptIn:(BOOL)in appAdamID:(id)id storeExternalVersion:(id)version;
- (void)paymentTransactionObserver:(id)observer didFailPurchaseTransactionWithTransaction:(id)transaction;
- (void)paymentTransactionObserver:(id)observer didFinishPurchaseTransaction:(id)transaction;
@end

#endif /* FCPaymentTransactionManager_h */