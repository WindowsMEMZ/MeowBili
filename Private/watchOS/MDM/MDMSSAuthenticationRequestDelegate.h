//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMSSAuthenticationRequestDelegate_h
#define MDMSSAuthenticationRequestDelegate_h
@import Foundation;

#include "MDMSSRequestDelegate.h"
#include "SSAuthenticateRequestDelegate-Protocol.h"

@class NSString, SSAccount, SSAuthenticateRequest;

@interface MDMSSAuthenticationRequestDelegate : MDMSSRequestDelegate<SSAuthenticateRequestDelegate> {
  /* instance variables */
  SSAccount *_authenticatedAccount;
}

@property (readonly, retain, @dynamic, nonatomic) SSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)instanceWithAuthenticationContext:(id)context;

/* instance methods */
- (id)storeLoginFailedError;
- (void)startWithCompletionBlock:(id /* block */)block;
- (void)authenticateRequest:(id)request didReceiveResponse:(id)response;
@end

#endif /* MDMSSAuthenticationRequestDelegate_h */