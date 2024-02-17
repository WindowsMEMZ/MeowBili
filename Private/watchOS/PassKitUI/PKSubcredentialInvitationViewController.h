//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialInvitationViewController_h
#define PKSubcredentialInvitationViewController_h
@import Foundation;

#include "PKPassShareRedemptionViewController.h"
#include "PKSubcredentialInvitationFlowControllerContext.h"
#include "PKSubcredentialInvitationFlowControllerProtocol-Protocol.h"
#include "PKSubcredentialInvitationProvisioningFlowControllerOperation-Protocol.h"
#include "PKSubcredentialProvisioningViewModelProtocol-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class NSString, PKAppletSubcredentialSharingSession, PKContactResolver;

@interface PKSubcredentialInvitationViewController : PKPassShareRedemptionViewController<PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {
  /* instance variables */
  PKAppletSubcredentialSharingSession *_session;
  NSObject<PKSubcredentialProvisioningViewModelProtocol> *_provisioningViewModel;
  NSObject<PKSubcredentialProvisioningViewModelProtocol> *_remoteProvisioningViewModel;
  NSString *_contactName;
  PKContactResolver *_contactResolver;
  BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
}

@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) NSObject<PKSubcredentialInvitationFlowControllerProtocol> *flowController;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFlowController:(id)controller context:(id)context;
- (void)viewDidLoad;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)resetState;
- (id)_titleTextForContext:(id)context;
- (id)_bodyTextForContext:(id)context;
- (id)sharingSessionWithDelegate:(id)delegate startSession:(BOOL)session;
- (void)startLocalDeviceProvisioning;
- (void)startRemoteDeviceProvisioning;
- (void)advanceToNextState;
- (id)contactKeysToFetch;
- (void)continueButtonPressed;
- (void)continueLaterButtonPressed;
- (void)activationCodeDidChangeToCode:(id)code;
- (void)subcredentialProvisioningController:(id)controller didFinishWithError:(id)error inState:(long long)state;
- (void)subcredentialProvisioningController:(id)controller didFinishWithPass:(id)pass;
- (void)subcredentialProvisioningController:(id)controller shouldFailAfterError:(id)error withCompletion:(id /* block */)completion;
@end

#endif /* PKSubcredentialInvitationViewController_h */