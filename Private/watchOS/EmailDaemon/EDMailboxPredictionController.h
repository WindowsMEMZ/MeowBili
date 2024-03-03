//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDMailboxPredictionController_h
#define EDMailboxPredictionController_h
@import Foundation;

#include "EDCachingMailboxPredictor.h"
#include "EDMailboxPersistence.h"
#include "EDMailboxPredictionQueryAdapter-Protocol.h"
#include "EDMessageChangeHookResponder-Protocol.h"
#include "EDMessagePersistence.h"
#include "EDPersistenceHookRegistry.h"
#include "EFLoggable-Protocol.h"

@class NSString;
@protocol EMUserProfileProvider, OS_dispatch_queue;

@interface EDMailboxPredictionController : NSObject<EDMessageChangeHookResponder, EFLoggable>

@property (readonly, nonatomic) NSObject<EDMailboxPredictionQueryAdapter> *queryAdapter;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) EDCachingMailboxPredictor *cachingPredictor;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithMessagePersistence:(id)persistence mailboxPersistence:(id)persistence hookRegistry:(id)registry userProfileProvider:(id)provider;
- (void)persistenceWillAddNewMessage:(id)message fromExistingMessage:(BOOL)message;
- (id)predictMailboxForMovingObjectIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)_predictMailboxForMovingMessages:(id)messages cancelationToken:(id)token completionHandler:(id /* block */)handler;
- (id)_processPredictionForMessages:(id)messages;
- (id)_accountsForMessages:(id)messages;
- (void)_invalidateCacheForAddedMessage:(id)message;
- (id)_createPredictor;
@end

#endif /* EDMailboxPredictionController_h */