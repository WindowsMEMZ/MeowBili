//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPhysicalCardActionController_h
#define PKPhysicalCardActionController_h
@import Foundation;

#include "PKPaymentAuthorizationCoordinatorDelegate-Protocol.h"
#include "PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h"
#include "PKPhysicalCardActionControllerDelegate-Protocol.h"

@class NSError, NSString, PKAccount, PKAccountService, PKAccountUser, PKAccountWebServicePhysicalCardActionRequest, PKPaymentAuthorizationCoordinator, PKPaymentDevice;

@interface PKPhysicalCardActionController : NSObject<PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
  /* instance variables */
  PKAccountService *_accountService;
  NSObject<PKPhysicalCardActionControllerDelegate> *_delegate;
  PKPaymentDevice *_paymentDevice;
  PKAccountWebServicePhysicalCardActionRequest *_lastActionRequest;
  BOOL _lastActionSuccess;
  NSError *_lastActionError;
  PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
}

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountService:(id)service account:(id)account accountUser:(id)user delegate:(id)delegate;
- (void)activatePhysicalCard:(id)card withActivationCode:(id)code;
- (void)activatePhysicalCardWithoutActivationCode:(id)code;
- (void)enablePhysicalCard:(id)card;
- (void)disablePhysicalCard:(id)card;
- (void)cancelPhysicalCard:(id)card;
- (void)replacePhysicalCard:(id)card withReason:(unsigned long long)reason;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizeApplePayTrustSignature:(id)signature handler:(id /* block */)handler;
- (void)_performAction:(id)action onPhysicalCard:(id)card;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)signature completion:(id /* block */)completion;
- (id)_generatePaymentRequestWithSignatureRequest:(id)request;
- (void)_presentApplePayTrustWithPaymentRequest:(id)request completion:(id /* block */)completion;
- (BOOL)_canPerformActionWithState:(long long)state;
- (void)_transitionToState:(long long)state withError:(id)error;
@end

#endif /* PKPhysicalCardActionController_h */