//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDLegacyClinicalCredentialManager_h
#define HDLegacyClinicalCredentialManager_h
@import Foundation;

@class NSData;
@protocol OS_dispatch_queue;

@interface HDLegacyClinicalCredentialManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}

@property (copy, nonatomic) NSData *cachedCredentialKey;

/* instance methods */
- (id)init;
- (id)_tokenDataFromToken:(id)token error:(out id *)error;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id *)error;
- (BOOL)unitTesting_storeCredentialKeyInKeychain:(id)keychain error:(id *)error;
- (BOOL)deleteCredentialKeyFromKeychainWithError:(id *)error;
@end

#endif /* HDLegacyClinicalCredentialManager_h */