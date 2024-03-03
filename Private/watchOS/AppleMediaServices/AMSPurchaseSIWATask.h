//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPurchaseSIWATask_h
#define AMSPurchaseSIWATask_h
@import Foundation;

#include "AMSPurchaseTask.h"
#include "AMSPurchaseSIWA.h"

@class AKAuthorization, AKCredentialRequestContext, NSError, NSUUID;

@interface AMSPurchaseSIWATask : AMSPurchaseTask

@property (retain, nonatomic) AMSPurchaseSIWA *purchaseSIWA;
@property (retain, nonatomic) AKCredentialRequestContext *requestContext;
@property (copy, nonatomic) NSUUID *continuationRequestIdentifier;
@property (copy, nonatomic) NSError *siwaError;
@property (nonatomic) BOOL purchaseRequiresAuthorization;
@property (retain, nonatomic) AKAuthorization *authorization;

/* instance methods */
- (id)initWithPurchaseSIWA:(id)siwa bag:(id)bag;
- (BOOL)performPreActionRequestForTaskInfo:(id)info requiresAuthorization:(BOOL)authorization error:(id *)error;
- (id)performPreauthenticate;
- (id)preauthenticateOptions;
- (id)performPurchaseSIWA;
- (id)_beginAuthorization;
- (id)_continueAuthorization;
- (id)_cancelAuthorization;
- (void)_updateRequestContextWithPurchaseInfo:(id)info;
- (BOOL)_beginAuthorizationWasPerformed;
- (BOOL)_siwaDidCommence;
- (BOOL)_willRequireAskToBuyForTaskInfo:(id)info;
- (id)newAuthorizationController;
@end

#endif /* AMSPurchaseSIWATask_h */