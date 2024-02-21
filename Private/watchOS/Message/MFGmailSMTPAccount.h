//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFGmailSMTPAccount_h
#define MFGmailSMTPAccount_h
@import Foundation;

#include "SMTPAccount.h"
#include "GmailAccount.h"
#include "MFClientTokenAuthProtocol-Protocol.h"
#include "MFOAuth2TokenAuthProtocol-Protocol.h"

@class NSString;

@interface MFGmailSMTPAccount : SMTPAccount<MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol> {
  /* instance variables */
  GmailAccount *_account;
}

@property (retain, nonatomic) GmailAccount *mailAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)accountTypeIdentifier;

/* instance methods */
- (id)accountForRenewingCredentials;
- (BOOL)shouldUseAuthentication;
- (BOOL)usesSSL;
- (id)hostname;
- (unsigned int)portNumber;
- (id)username;
- (id)password;
- (id)clientToken;
- (id)oauth2Token;
- (id)preferredAuthScheme;
- (id)displayHostname;
- (id)_urlFromResponse:(id)response;
- (id)errorForResponse:(id)response;
- (BOOL)shouldFetchACEDBInfoForError:(id)error;
- (id)mailAccountIfAvailable;
@end

#endif /* MFGmailSMTPAccount_h */