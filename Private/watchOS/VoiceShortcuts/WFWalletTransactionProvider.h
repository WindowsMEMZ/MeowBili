//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWalletTransactionProvider_h
#define WFWalletTransactionProvider_h
@import Foundation;

#include "PKPaymentServiceDelegate-Protocol.h"

@class NSMutableDictionary, NSString, PKPaymentService;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface WFWalletTransactionProvider : NSObject<PKPaymentServiceDelegate>

@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *requests;
@property (retain, nonatomic) NSMutableDictionary *timers;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedProvider;

/* instance methods */
- (id)init;
- (void)fetchLocalTransactionWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)observeForUpdatesWithInitialTransactionIfNeeded:(id)needed transactionIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)queue_takeTransactionIfNeeded;
- (void)queue_endTransactionIfNeeded;
- (void)queue_finishWithPaymentTransaction:(id)transaction;
- (void)transactionSourceIdentifier:(id)identifier didReceiveTransaction:(id)transaction;
- (BOOL)transactionIsValid:(id)valid;
@end

#endif /* WFWalletTransactionProvider_h */