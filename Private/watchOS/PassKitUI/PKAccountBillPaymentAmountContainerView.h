//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountBillPaymentAmountContainerView_h
#define PKAccountBillPaymentAmountContainerView_h
@import Foundation;

#include "UIView.h"
#include "PKEnterCurrencyAmountView.h"

@interface PKAccountBillPaymentAmountContainerView : UIView

@property (retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic) BOOL showAmount;

/* instance methods */
- (id)initWithCurrencyCode:(id)code minimumAmount:(id)amount;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (double)_amountLabelFontSize;
@end

#endif /* PKAccountBillPaymentAmountContainerView_h */