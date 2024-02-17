//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKNativeAccountRecoveryController_h
#define AKNativeAccountRecoveryController_h
@import Foundation;

#include "AKAccountRecoveryContext.h"
#include "CDPAuthProvider-Protocol.h"

@class CDPRecoveryController, NSString;
@protocol CDPStateUIProvider;

@interface AKNativeAccountRecoveryController : NSObject<CDPAuthProvider> {
  /* instance variables */
  CDPRecoveryController *_recoveryController;
  AKAccountRecoveryContext *_recoveryContext;
  NSObject<CDPStateUIProvider> *_cdpUiProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestForRecoveryCompletionWithContext:(id)context recoveredInfo:(id)info recoveryError:(id)error;
+ (id)postBodyForiCSCServerUIResponseWithContext:(id)context recoveryError:(id)error;
+ (BOOL)shouldSendServerResponseForRecoveredInfo:(id)info withRecoveryError:(id)error;

/* instance methods */
- (id)initWithContext:(id)context uiProvider:(id)provider;
- (void)presentNativeRecoveryUIWithCompletion:(id /* block */)completion;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)completion;
- (void)cdpContext:(id)context performSilentRecoveryTokenRenewal:(id /* block */)renewal;
- (void)cdpContext:(id)context verifyMasterKey:(id)key completion:(id /* block */)completion;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)kit;
@end

#endif /* AKNativeAccountRecoveryController_h */