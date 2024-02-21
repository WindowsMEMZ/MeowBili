//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPerformActionEnterValueView_h
#define PKPerformActionEnterValueView_h
@import Foundation;

#include "UIView.h"
#include "PKEnterCurrencyAmountView.h"
#include "PKEnterCurrencyAmountViewDelegate-Protocol.h"
#include "PKEnterValueNewBalanceView.h"
#include "PKNumberPadSuggestionsView.h"
#include "PKNumberPadSuggestionsViewDelegate-Protocol.h"
#include "PKPaymentDataProviderDelegate-Protocol.h"
#include "PKPerformActionView-Protocol.h"
#include "PKPerformActionViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSDecimalNumber, NSString, PKNumericSuggestionLastInput, PKNumericSuggestionsEnterValueAlgorithm, PKPass, PKPaymentPassAction, PKPeerPaymentAccount, PKPeerPaymentService, PKTransitPassProperties, UIButton, UITextField;
@protocol PKPaymentDataProvider;

@interface PKPerformActionEnterValueView : UIView<PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView> {
  /* instance variables */
  PKEnterCurrencyAmountView *_enterCurrencyAmountView;
  PKEnterValueNewBalanceView *_newBalanceView;
  PKNumberPadSuggestionsView *_suggestionView;
  UIButton *_autoReloadButton;
  BOOL _shouldShowAutoReloadButton;
  PKPass *_pass;
  PKPaymentPassAction *_action;
  PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
  PKNumericSuggestionLastInput *_lastInput;
  PKTransitPassProperties *_transitProperties;
  NSDecimalNumber *_currentAmount;
  NSObject<PKPaymentDataProvider> *_paymentServiceDataProvider;
  PKPeerPaymentService *_peerPaymentService;
  PKPeerPaymentAccount *_peerPaymentAccount;
}

@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPerformActionViewDelegate> *delegate;
@property (readonly, nonatomic) UITextField *amountTextField;

/* instance methods */
- (id)init;
- (id)initWithPass:(id)pass action:(id)action paymentDataProvider:(id)provider;
- (void)dealloc;
- (void)layoutSubviews;
- (id)pass;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)completion;
- (void)willDismissViewController;
- (void)setMinBalance:(id)balance;
- (void)saveLastInputValues;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateWithTransitPassProperties:(id)properties;
- (void)numberPadSuggestionsView:(id)view didSelectSuggestion:(id)suggestion;
- (BOOL)enterCurrencyAmountView:(id)view shouldChangeAmountFrom:(id)from to:(id)to;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)amount;
- (void)_peerPaymentAccountChanged:(id)changed;
- (void)_updatePeerPaymentAccount;
- (void)_readCurrentBalance;
- (void)_updateCurrentBalanceWithUpdatedTransitProperties;
- (BOOL)_shouldShakeCard:(id)card;
- (double)_amountTopPadding;
- (void)_updateCurrentAmount:(id)amount shouldGenerateNewSuggestions:(BOOL)suggestions;
- (void)_currentAmountDidChangeTo:(id)to shouldGenerateNewSuggestions:(BOOL)suggestions;
- (BOOL)_isCurrentAmountValid;
- (void)_createSubviews;
- (void)_didTapSetUpAutoReloadButton;
@end

#endif /* PKPerformActionEnterValueView_h */