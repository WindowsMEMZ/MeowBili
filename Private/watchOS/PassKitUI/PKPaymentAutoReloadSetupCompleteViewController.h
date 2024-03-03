//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAutoReloadSetupCompleteViewController_h
#define PKPaymentAutoReloadSetupCompleteViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewDelegate-Protocol.h"
#include "PKPaymentAutoReloadSetupCompleteViewControllerDelegate-Protocol.h"
#include "PKPaymentDataProviderDelegate-Protocol.h"

@class NSString, PKCurrencyAmount, PKPaymentPass;
@protocol OS_dispatch_source, PKPaymentDataProvider;

@interface PKPaymentAutoReloadSetupCompleteViewController : PKExplanationViewController<PKExplanationViewDelegate, PKPaymentDataProviderDelegate> {
  /* instance variables */
  BOOL _passUpdated;
  PKCurrencyAmount *_amount;
  PKCurrencyAmount *_threshold;
  PKPaymentPass *_pass;
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  NSObject<OS_dispatch_source> *_timer;
  BOOL _isWaitingOnBalanceUpdate;
  long long _setupMode;
  NSObject<PKPaymentAutoReloadSetupCompleteViewControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass amount:(id)amount threshold:(id)threshold setupMode:(long long)mode paymentDataProvider:(id)provider delegate:(id)delegate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)showWaitingOnBalanceUpdateUI;
- (void)showBalanceUpdatedUIWithAnimation:(BOOL)animation;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didReceiveBalanceUpdate:(id)update;
- (void)explanationViewDidSelectContinue:(id)continue;
@end

#endif /* PKPaymentAutoReloadSetupCompleteViewController_h */