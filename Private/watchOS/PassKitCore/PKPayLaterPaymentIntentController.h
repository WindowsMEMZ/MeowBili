//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterPaymentIntentController_h
#define PKPayLaterPaymentIntentController_h
@import Foundation;

#include "PKAccount.h"
#include "PKAccountService.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKPassLibrary.h"
#include "PKPayLaterAvailableFundingSourcesFilter.h"
#include "PKPaymentAuthorizationCoordinator.h"
#include "PKPaymentAuthorizationCoordinatorDelegate-Protocol.h"
#include "PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h"
#include "PKPaymentRequest.h"
#include "PKPaymentWebService.h"
#include "PKPeerPaymentAccount.h"
#include "PKPeerPaymentWebService.h"

@class NSMutableDictionary, NSString;

@interface PKPayLaterPaymentIntentController : NSObject<PKPaymentAuthorizationCoordinatorDelegate, PKAccountServiceObserver, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
  /* instance variables */
  PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
  id /* block */ _paymentAuthorizationCompletion;
  PKPassLibrary *_passLibrary;
  PKPaymentWebService *_paymentWebService;
  PKPeerPaymentWebService *_peerPaymentWebService;
  NSString *_defaultPassUniqueIdentifier;
  PKAccountService *_accountService;
  NSMutableDictionary *_cacheByIntentType;
  NSMutableDictionary *_requests;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _didAuthorizePayment;
  PKPaymentRequest *_currentPaymentRequest;
  NSString *_presentationSceneIdentifier;
}

@property (retain, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPayLaterAvailableFundingSourcesFilter *availableFundingSourcesFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPayLaterAccount:(id)account paymentWebService:(id)service passLibrary:(id)library peerPaymentWebService:(id)service accountService:(id)service defaultPassUniqueIdentifier:(id)identifier;
- (void)dealloc;
- (void)intentDetailsForFinancingPlan:(id)plan intent:(unsigned long long)intent completion:(id /* block */)completion;
- (id)payLaterPaymentRequestWithIntentDetails:(id)details financingPlan:(id)plan primaryPaymentSource:(id)source intent:(unsigned long long)intent currencyAmount:(id)amount;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)details currencyAmount:(id)amount planIdentifier:(id)identifier primaryPaymentSource:(id)source;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
- (void)paymentAuthorizationCoordinator:(id)coordinator didUpdateAccountServicePaymentMethod:(id)method handler:(id /* block */)handler;
- (void)_executeNextRequest:(id)request;
- (void)presentPaymentAuthorizationForFinancingPlan:(id)plan primaryPaymentSource:(id)source intentDetails:(id)details intent:(unsigned long long)intent currencyAmount:(id)amount presentationSceneIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)request presentationSceneIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)accountChanged:(id)changed;
- (void)_peerPaymentAccountChanged;
@end

#endif /* PKPayLaterPaymentIntentController_h */