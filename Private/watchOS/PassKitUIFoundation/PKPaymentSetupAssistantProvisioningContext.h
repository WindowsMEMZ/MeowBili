//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupAssistantProvisioningContext_h
#define PKPaymentSetupAssistantProvisioningContext_h
@import Foundation;

#include "PKPaymentSetupAssistantCoreProvisioningContext.h"

@protocol PKPassSnapshotCoordinatorProtocol, PKPaymentSetupAssistantProvisioningContextDelegate;

@interface PKPaymentSetupAssistantProvisioningContext : PKPaymentSetupAssistantCoreProvisioningContext

@property (retain, nonatomic) NSObject<PKPassSnapshotCoordinatorProtocol> *snapshotCoordinator;
@property (retain, nonatomic) NSObject<PKPaymentSetupAssistantProvisioningContextDelegate> *delegate;

/* instance methods */
- (id)initWithProvisioningController:(id)controller snapshotCoordinator:(id)coordinator setupAssistantCredentials:(id)credentials maximumSelectable:(unsigned long long)selectable;
- (id)setupAssistantCredentials;
- (id)passSnapshotForCredential:(id)credential;
- (void)paymentPassUpdatedOnCredential:(id)credential;
- (id)_setupAssistantCredentialForPaymentCredential:(id)credential;
@end

#endif /* PKPaymentSetupAssistantProvisioningContext_h */