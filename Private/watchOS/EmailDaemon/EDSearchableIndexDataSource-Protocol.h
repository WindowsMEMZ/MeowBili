//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDSearchableIndexDataSource_Protocol_h
#define EDSearchableIndexDataSource_Protocol_h
@import Foundation;

@protocol EDSearchableIndexDataSource <NSObject>
/* instance methods */
- (id)updatesForSearchableIndex:(id)index excludingIdentifiers:(id)identifiers count:(unsigned long long)count cancelationToken:(id)token;
- (long long)indexingTypeForSearchableIndex:(id)index item:(id)item;
- (void)searchableIndex:(id)index assignIndexingType:(long long)type forIdentifiers:(id)identifiers;
- (void)searchableIndex:(id)index willRemoveIdentifiers:(id)identifiers type:(long long)type;
- (id)childIdentifiersToRemoveFromSearchableIndex:(id)index whenRemovingParentIdentifiers:(id)identifiers;
- (id)searchableIndex:(id)index assignTransaction:(long long)transaction updates:(id)updates;
- (void)searchableIndex:(id)index invalidateItemsGreaterThanTransaction:(long long)transaction;
- (id)searchableIndex:(id)index invalidateItemsInTransactions:(id)transactions;
- (id)verificationDataSamplesForSearchableIndex:(id)index count:(unsigned long long)count lastVerifiedMessageID:(long long)id;
- (id)distinctTransactionIDsForSearchableIndex:(id)index;
- (void)clearOrphanedSearchableMessagesFromDatabase;
@optional
/* instance methods */
- (void)searchableIndex:(id)index foundAttachmentPaths:(id)paths forMessagePersistentID:(id)id;
- (void)searchableIndex:(id)index prepareToIndexAttachmentsForMessageWithIdentifier:(id)identifier;
- (id)searchableIndex:(id)index attachmentItemsForMessageWithIdentifier:(id)identifier;
- (void)indexRichLinksForMessageWithIdentifier:(id)identifier immediately:(BOOL)immediately;
- (id)searchableIndex:(id)index richLinkItemsForMessageWithIdentifier:(id)identifier;
@end

#endif /* EDSearchableIndexDataSource_Protocol_h */