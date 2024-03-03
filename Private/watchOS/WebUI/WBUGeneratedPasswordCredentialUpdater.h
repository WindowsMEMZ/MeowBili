//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBUGeneratedPasswordCredentialUpdater_h
#define WBUGeneratedPasswordCredentialUpdater_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface WBUGeneratedPasswordCredentialUpdater : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableSet *_urlsScheduledForUpdating;
  NSMutableDictionary *_urlsToUpdateRequests;
}

/* class methods */
+ (id)sharedUpdater;

/* instance methods */
- (id)init;
- (void)updateCredentialWithNewUsername:(id)username newGeneratedPassword:(id)password lastGeneratedPassword:(id)password credentialURL:(id)url protectionSpace:(id)space shouldSaveNewCredential:(BOOL)credential;
- (void)_performRequest:(id)request;
@end

#endif /* WBUGeneratedPasswordCredentialUpdater_h */