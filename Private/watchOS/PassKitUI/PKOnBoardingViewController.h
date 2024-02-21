//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKOnBoardingViewController_h
#define PKOnBoardingViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewControllerDelegate-Protocol.h"
#include "PKPaymentSetupPresentationProtocol-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKSetupFlowControllerProtocol-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSString, PKDynamicProvisioningPageContent, PKPaymentProvisioningController, PKPaymentSetupProduct, UIImage;

@interface PKOnBoardingViewController : PKExplanationViewController<PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable, UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (retain, nonatomic) PKPaymentSetupProduct *paymentSetupProduct;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *currentPage;
@property (retain, nonatomic) UIImage *heroImage;
@property (readonly, nonatomic) BOOL preflightCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithParentFlowController:(id)controller setupDelegate:(id)delegate context:(long long)context provisioningController:(id)controller paymentSetupProduct:(id)product currentPage:(id)page;
- (void)viewDidLoad;
- (void)updateForHeroImage;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)explanationViewControllerDidSelectCancel:(id)cancel;
- (void)explanationViewControllerDidSelectDone:(id)done;
- (void)explanationViewDidSelectBodyButton:(id)button;
- (void)handleSetupLater;
- (void)handleProductAvailable;
- (void)terminateSetupFlow;
- (void)handleNotifyRequested;
- (id)nextOnboardingViewControllerWithPage:(id)page product:(id)product;
- (void)_presentPayLaterSetupFlowForProduct:(id)product;
- (unsigned long long)paymentSetupMarker;
- (void)presentationControllerDidAttemptToDismiss:(id)dismiss;
@end

#endif /* PKOnBoardingViewController_h */