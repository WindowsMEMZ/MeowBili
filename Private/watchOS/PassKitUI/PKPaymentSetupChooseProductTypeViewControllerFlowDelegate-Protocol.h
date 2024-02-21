//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupChooseProductTypeViewControllerFlowDelegate_Protocol_h
#define PKPaymentSetupChooseProductTypeViewControllerFlowDelegate_Protocol_h
@import Foundation;

@protocol PKPaymentSetupChooseProductTypeViewControllerFlowDelegate <NSObject>
/* instance methods */
- (void)chooseProductTypeViewControllerDidSelectManualEntry:(id)entry;
- (void)chooseProductTypeViewController:(id)controller didSelectServiceProducts:(id)products;
- (void)chooseProductTypeViewController:(id)controller didPerformPurchaseWithCredential:(id)credential;
- (void)chooseProductTypeViewControllerDidTerminate:(id)terminate;
@end

#endif /* PKPaymentSetupChooseProductTypeViewControllerFlowDelegate_Protocol_h */