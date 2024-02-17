//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKStarkManager_h
#define CKStarkManager_h
@import Foundation;

#include "CKStarkConversationController.h"

@interface CKStarkManager : NSObject

@property (retain, nonatomic) CKStarkConversationController *conversationController;

/* class methods */
+ (BOOL)isCarPlayConnected;
+ (void)activateForRecipient:(id)recipient;
+ (void)activateForConversation:(id)conversation;

/* instance methods */
- (void)scene:(id)scene willConnectToSession:(id)session options:(id)options;
- (void)scene:(id)scene openURLContexts:(id)urlcontexts;
- (void)openURL:(id)url sourceApplication:(id)application;
- (void)openSMSURL:(id)smsurl;
@end

#endif /* CKStarkManager_h */