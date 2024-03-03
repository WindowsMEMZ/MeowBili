//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupHeroViewController_h
#define PKPaymentSetupHeroViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewDelegate-Protocol.h"
#include "PKLoadingUIProviding-Protocol.h"
#include "PKPaymentSetupHeroView.h"
#include "PKPaymentSetupHeroViewControllerFlowDelegate-Protocol.h"
#include "PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"

@class ACAccountStore, NSArray, NSString, PKPaymentHeroImageController, PKPaymentProvisioningController, PKPaymentSetupProduct, PKPaymentWebService;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController<PKExplanationViewDelegate, PKLoadingUIProviding, PKPaymentSetupHideSetupLaterButtonProtocol> {
  /* instance variables */
  ACAccountStore *_accountStore;
  BOOL _nextButtonPushed;
  PKPaymentSetupHeroView *_splashView;
  BOOL _hasFelicaSecureElement;
  BOOL _preflightComplete;
  PKPaymentSetupProduct *_product;
  NSArray *_featuredImages;
  NSString *_deviceRegion;
}

@property (weak, nonatomic) NSObject<PKPaymentSetupHeroViewControllerFlowDelegate> *flowDelegate;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentHeroImageController *heroImageController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic) BOOL checkSecurity;
@property (nonatomic) BOOL hidePrivacyView;
@property (nonatomic) BOOL showChinaPrivacyDisclosure;
@property (nonatomic) BOOL showSouthKoreaPrivacyDisclosure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProvisioningController:(id)controller context:(long long)context delegate:(id)delegate product:(id)product allowsManualEntry:(BOOL)entry;
- (void)loadView;
- (void)_configureDock;
- (BOOL)_readerModeIsSupported;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)_preflightWithCompletion:(id /* block */)completion;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)setFeaturedHeroImages:(id)images;
- (void)_setUserInteractionEnabled:(BOOL)enabled;
- (void)_setShowActivityIndicator:(BOOL)indicator;
- (id)_bodyText;
- (void)_terminateSetupFlow;
- (void)didTapFooterLink:(id)link;
- (void)_transferExistingCardTapped;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)setHideSetupLaterButton:(BOOL)button;
- (void)showLoadingUI:(BOOL)ui animated:(BOOL)animated;
@end

#endif /* PKPaymentSetupHeroViewController_h */