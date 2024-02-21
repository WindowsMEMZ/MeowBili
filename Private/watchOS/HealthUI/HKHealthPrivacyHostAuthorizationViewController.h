//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthPrivacyHostAuthorizationViewController_h
#define HKHealthPrivacyHostAuthorizationViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "HKHealthPrivacyHostAuthorizationControllerDelegate-Protocol.h"
#include "HKHealthPrivacyHostRemoteViewController-Protocol.h"
#include "HKHealthPrivacyServiceRemoteAuthorizationViewController-Protocol.h"

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController<HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) NSObject<HKHealthPrivacyServiceRemoteAuthorizationViewController> *_healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) NSObject<HKHealthPrivacyHostAuthorizationControllerDelegate> *delegate;

/* class methods */
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)handler;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (void)setRequestRecord:(id)record presentationRequests:(id)requests;
- (void)show;
- (void)didFinishWithError:(id)error;
- (void)viewServiceDidTerminateWithError:(id)error;
@end

#endif /* HKHealthPrivacyHostAuthorizationViewController_h */