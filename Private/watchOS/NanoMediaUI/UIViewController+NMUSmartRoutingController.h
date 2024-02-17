//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef UIViewController_NMUSmartRoutingController_h
#define UIViewController_NMUSmartRoutingController_h
@import Foundation;

@interface UIViewController (NMUSmartRoutingController) <NMUSmartRoutingModeProviding>
/* instance methods */
- (void)runTest:(id)test options:(id)options;
- (id)nmu_topmostPresentedViewController;
- (void)_presentAgeVerificationRequiredAlert;
- (void)nmu_dismiss;
- (unsigned long long)preferredSmartRoutingMode;
- (void)setNeedsSmartRoutingUpdate;
@end

#endif /* UIViewController_NMUSmartRoutingController_h */