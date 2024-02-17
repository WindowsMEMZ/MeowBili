//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKConversationListScrollingController_h
#define CKConversationListScrollingController_h
@import Foundation;

#include "CKConversationList.h"

@class IMChatRegistry, NSMutableDictionary;

@interface CKConversationListScrollingController : NSObject

@property (readonly, nonatomic) CKConversationList *conversationList;
@property (readonly, nonatomic) IMChatRegistry *chatRegistry;
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestFetchedDate;
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestReachedDate;
@property (nonatomic) BOOL fetchingOlderConversations;

/* instance methods */
- (id)initWithConversationList:(id)list chatRegistry:(id)registry;
- (void)_resetDateTrackingWithChatRegistry:(id)registry;
- (void)_handleRegistryDidLoadNotification:(id)notification;
- (void)reachedConversationWithLastMessageDate:(id)date filterMode:(unsigned long long)mode remainingRows:(long long)rows;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)mode;
- (void)_loadOlderConversationsWithFilterMode:(unsigned long long)mode limit:(unsigned long long)limit iteration:(unsigned long long)iteration;
- (id)_convertFilterActionDictionaryToConversationListFilterModeDictionary:(id)dictionary;
- (id)_chatPredicateForFilterMode:(unsigned long long)mode;
- (BOOL)isFetchingOlderConversations;
@end

#endif /* CKConversationListScrollingController_h */