//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWalletTransactionTrigger_BiomeContext_h
#define WFWalletTransactionTrigger_BiomeContext_h
@import Foundation;

@interface WFWalletTransactionTrigger (BiomeContext)
/* class methods */
+ (BOOL)registerContextSyncClient;
+ (BOOL)unregisterContextSyncClient;

/* instance methods */
- (BOOL)requiresEventInfoAsInput;
- (void)eventInfoForEvent:(id)event completion:(id /* block */)completion;
- (id)dictionaryWithTransaction:(id)transaction transactionEvent:(id)event;
- (id)contentCollectionWithEventInfo:(id)info;
- (id)publisherWithScheduler:(id)scheduler;
- (BOOL)hasRemotePublisher;
- (id)remotePublisherWithScheduler:(id)scheduler;
- (id)transactionIdentifierWithEvent:(id)event;
- (void)shouldFireInResponseToEvent:(id)event triggerIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)isPassIdentifierValid:(id)valid;
@end

#endif /* WFWalletTransactionTrigger_BiomeContext_h */