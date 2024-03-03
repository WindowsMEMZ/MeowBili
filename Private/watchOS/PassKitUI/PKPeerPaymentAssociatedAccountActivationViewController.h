//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAssociatedAccountActivationViewController_h
#define PKPeerPaymentAssociatedAccountActivationViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKDeviceSharingCapabilitiesManagerObserver-Protocol.h"
#include "PKPeerPaymentAssociatedAccountSetupDelegate-Protocol.h"
#include "PKPeerPaymentIconEducationView.h"
#include "PKPeerPaymentSetupFlowController.h"

@class NSString, PKDeviceSharingCapabilities, PKFamilyMember, PKPeerPaymentAccount;
@protocol OS_dispatch_source;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController<PKDeviceSharingCapabilitiesManagerObserver> {
  /* instance variables */
  PKPeerPaymentSetupFlowController *_controller;
  PKFamilyMember *_familyMember;
  NSObject<PKPeerPaymentAssociatedAccountSetupDelegate> *_delegate;
  unsigned long long _state;
  long long _setupType;
  PKPeerPaymentIconEducationView *_iconEducationView;
  PKPeerPaymentAccount *_account;
  NSObject<OS_dispatch_source> *_timer;
  BOOL _timerHasFired;
  PKDeviceSharingCapabilities *_childAppleCashCapabilities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPeerPaymentSetupFlowController:(id)controller;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_setState:(unsigned long long)state;
- (BOOL)_isAssociatedAccountPending;
- (void)_cancelTimer;
- (void)_startTimerIfNeccessary;
- (void)_checkFamilyMemberAppleCashCapabilities;
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(BOOL *)capabilities;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)deviceSharingCapabilitiesUpdated:(id)updated newSharingCapabilties:(id)capabilties forAppleID:(id)id;
- (void)deviceSharingCapabilitiesUpdated:(id)updated maximumPossibleDevices:(long long)devices forAppleID:(id)id;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (void)_sendMoneyInMessages;
- (void)_presentDisplayableError:(id)error;
- (void)_terminateAddAssociatedAccountFlowWithSucces:(BOOL)succes updatedAccount:(id)account;
- (void)_showSpinner:(BOOL)spinner;
@end

#endif /* PKPeerPaymentAssociatedAccountActivationViewController_h */