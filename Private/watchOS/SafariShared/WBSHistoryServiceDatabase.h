//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryServiceDatabase_h
#define WBSHistoryServiceDatabase_h
@import Foundation;

#include "WBSHistoryCrypto.h"
#include "WBSHistoryServiceDatabaseProtocol-Protocol.h"
#include "WBSHistoryServiceURLCompletion.h"
#include "WBSSQLiteDatabaseDelegate-Protocol.h"

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSURL, WBSSQLiteDatabase, WBSSQLiteStatementCache;
@protocol OS_dispatch_group, OS_dispatch_queue, {LatestVisitInformationMap="_map"{unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>>="__table_"{__hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>>="__value_"f}}}}, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>>="__table_"{__hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>>="__value_"f}}};

@interface WBSHistoryServiceDatabase : NSObject<WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_group> *_fileOperationGroup;
  unsigned long long _currentRangeForTemporaryID;
  WBSHistoryCrypto *_crypto;
  WBSSQLiteDatabase *_database;
  NSDictionary *_databaseOptions;
  WBSSQLiteStatementCache *_statements;
  NSMapTable *_delegates;
  NSMapTable *_listeners;
  NSMutableSet *_registeredListeners;
  struct LatestVisitInformationMap { struct unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>> { struct __hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _map; } _latestVisitMap;
  BOOL _hasComputedLatestVisit;
  struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _temporaryIDToItem;
  struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _visitForTemporaryID;
  NSMutableArray *_pendingVisits;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _integrityCheckPending;
  NSURL *_clearHistoryInProgressFileURL;
  id /* block */ _pendingVisitsTimeout;
}

@property (readonly, copy, nonatomic) NSString *databaseID;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) WBSHistoryServiceURLCompletion *urlCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithID:(id)id url:(id)url options:(id)options fileOperationGroup:(id)group error:(id *)error;
- (void)dealloc;
- (void)forceCloseWithCompletionHandler:(id /* block */)handler;
- (BOOL)_prepareDatabase:(id *)database;
- (BOOL)_reopenDatabase:(id *)database;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (long long)allocateTemporaryIDRange:(long long *)idrange;
- (void)addDelegate:(id)delegate listenerName:(id)name forConnection:(id)connection;
- (void)fetchDatabaseURL:(id /* block */)url;
- (void)database:(id)database hadSevereError:(id)error;
- (void)warmUp;
- (id)_ensureLatestVisitsAreComputed;
- (void)ensureLatestVisitsAreComputed:(id /* block */)computed;
- (struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { float x0; } x3; } x0; })_recomputeLatestVisitsForItems:(const void *)items error:(id *)error;
- (id)_fetchVisitsWithOptions:(unsigned long long)options predicate:(id)predicate writeDescriptor:(int)descriptor;
- (void)fetchWithOptions:(unsigned long long)options predicate:(id)predicate completionHandler:(id /* block */)handler;
- (void)fetchDomainExpansions:(id /* block */)expansions;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)handler;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)date endDate:(id)date completionHandler:(id /* block */)handler;
- (void)fetchCloudClientVersionTable:(id /* block */)table;
- (id)_lastSeenDateForCloudClientVersion:(unsigned long long)version;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)version completionHandler:(id /* block */)handler;
- (void)setLastSeenDate:(id)date forCloudClientVersion:(unsigned long long)version completionHandler:(id /* block */)handler;
- (BOOL)_shouldEmitLegacyTombstones;
- (id)_metadataForKey:(id)key error:(id *)error;
- (void)fetchMetadataForKeys:(id)keys completionHandler:(id /* block */)handler;
- (id)_setMetadataValue:(id)value forKey:(id)key;
- (void)setMetadataValue:(id)value forKey:(id)key completionHandler:(id /* block */)handler;
- (unsigned long long)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)date error:(id *)error;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)date completionHandler:(id /* block */)handler;
- (id)_convertTombstoneWithGenerationToSecureFormat:(long long)format lastSyncedGeneration:(long long)generation;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)format lastSyncedGeneration:(long long)generation completionHandler:(id /* block */)handler;
- (void)replayAndAddTombstones:(id)tombstones completionHandler:(id /* block */)handler;
- (void)fetchAllTombstonesWithCompletionHandler:(id /* block */)handler;
- (void)_queuePendingUpdates;
- (void)_commitPendingUpdates;
- (void)_ensureDatabaseIsSynced;
- (id)_findItemIDsForPendingVisitsWithError:(id *)error;
- (BOOL)_commitPendingItems:(id)items;
- (BOOL)_commitPendingVisits:(id)visits;
- (long long)_permanentIDsForItemIfAvailable:(long long)available;
- (long long)_permanentIDsForVisitIfAvailable:(long long)available;
- (id)_insertItem:(id)item;
- (id)_updateItem:(id)item;
- (id)_insertVisit:(id)visit;
- (id)_updateVisit:(id)visit;
- (id)_updateVisitRedirectRelationships:(id)relationships;
- (void)_notifyDelegatesOfItemIDs;
- (void)_notifyDelegatesOfVisitIDs;
- (id)_addOrModifyObjects:(id)objects;
- (void)_checkpointWriteAheadLog;
- (id)_updateByAddingOrModifyObjects:(id)objects updateCurrentGeneration:(id)generation updateLastSyncGeneration:(id)generation updateLastMaintenance:(id)maintenance;
- (void)updateWithType:(unsigned long long)type addOrModifyObjects:(id)objects updateCurrentGeneration:(id)generation updateLastSyncGeneration:(id)generation updateLastMaintenance:(id)maintenance completionHandler:(id /* block */)handler;
- (BOOL)_addAutocompleteTrigger:(id)trigger forURL:(id)url error:(id *)error;
- (void)addAutocompleteTrigger:(id)trigger forURL:(id)url completionHandler:(id /* block */)handler;
- (void)fetchAutocompleteTriggersForURLString:(id)urlstring completionHandler:(id /* block */)handler;
- (void)recordVisitWithIdentifier:(id)identifier sourceVisit:(id)visit title:(id)title wasHTTPNonGet:(BOOL)get loadSuccessful:(BOOL)successful origin:(long long)origin attributes:(unsigned long long)attributes statusCode:(long long)code completionHandler:(id /* block */)handler;
- (void)_updateVisitWithIdentifier:(id)identifier removeAttributes:(unsigned long long)attributes addAttributes:(unsigned long long)attributes pendingVisit:(id)visit;
- (void)updateVisitWithIdentifier:(id)identifier removeAttributes:(unsigned long long)attributes addAttributes:(unsigned long long)attributes completionHandler:(id /* block */)handler;
- (void)updateVisitWithIdentifier:(id)identifier title:(id)title completionHandler:(id /* block */)handler;
- (void)_updateItem:(long long)item visitCountScore:(long long)score dailyVisitCounts:(id)counts weeklyVisitCounts:(id)counts shouldRecomputeDerivedVisitCounts:(BOOL)counts;
- (void)flushWithCompletionHandler:(id /* block */)handler;
- (long long)_currentGeneration;
- (long long)_lastSyncedGeneration;
- (id)_clearAllHistoryInsertingTombstoneUpToDate:(id)date;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)date completionHandler:(id /* block */)handler;
- (id)_generateDisposedVisitsForPlan:(void *)plan;
- (id)_generateUpdatedLastVisit:(const void *)visit;
- (id)_generateItemsDictionary:(const void *)dictionary;
- (id)_generateVisitsDictionary:(const void *)dictionary;
- (id)_clearHistoryVisitsAddedAfterDate:(id)date beforeDate:(id)date tombstoneMode:(unsigned long long)mode;
- (void)_notifyExecutionOfPlan:(void *)plan;
- (void)clearHistoryVisitsAddedAfterDate:(id)date beforeDate:(id)date tombstoneMode:(unsigned long long)mode completionHandler:(id /* block */)handler;
- (void)_removeLegacyHistoryDatabaseIfNeeded;
- (id)_insertTombstonesForURLs:(id)urls afterDate:(id)date beforeDate:(id)date tombstoneMode:(unsigned long long)mode;
- (id)_clearHistoryItems:(id)items afterDate:(id)date beforeDate:(id)date tombstoneMode:(unsigned long long)mode;
- (void)clearHistoryItems:(id)items afterDate:(id)date beforeDate:(id)date tombstoneMode:(unsigned long long)mode completionHandler:(id /* block */)handler;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)handler;
- (double)_oldestLatestVisit;
- (id)_expireOldVisits:(double)visits;
- (void)expireOldVisits:(double)visits completionHandler:(id /* block */)handler;
- (id)_recomputeVisitScores:(void *)scores;
- (id)_recomputeItemScores:(void *)scores;
- (void)recomputeItemScoresWithCompletionHandler:(id /* block */)handler;
- (id)_findAllRelatedVisits:(const void *)visits forPlan:(void *)plan afterDate:(id)date beforeDate:(id)date;
- (id)_findAllRelatedVisitsToItems:(const void *)items forPlan:(void *)plan;
- (id)_findObsoleteItemsForPlan:(void *)plan;
- (id)_preparePlan:(void *)plan itemsToDelete:(const void *)delete visitsToDelete:(const void *)delete afterDate:(id)date beforeDate:(id)date;
- (unsigned long long)_countOfItems;
- (id)_deleteOldestItems:(unsigned long long)items forPlan:(void *)plan;
- (id)_preparePlan:(void *)plan ageLimit:(double)limit itemCountLimit:(unsigned long long)limit;
- (void)deletionPlanForItemsToDelete:(id)delete visitsToDelete:(id)delete completionHandler:(id /* block */)handler;
- (void)deletionPlanForAgeLimit:(double)limit itemCountLimit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (id)_collectDeletedURLsForPlan:(void *)plan;
- (id)_collectDeletedHighLevelDomainsForPlan:(void *)plan;
- (id)_collectDeletedHighLevelDomainsFromDeletedHostnamesForPlan:(void *)plan;
- (id)_collectDeletedHostnamesForPlan:(void *)plan;
- (id)_executePlan:(void *)plan outDeletedItemCount:(unsigned long long *)count outDeletedVisitCount:(unsigned long long *)count;
- (void)performMaintenanceWithAgeLimit:(double)limit itemCountLimit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)handler;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)ids withCompletion:(id /* block */)completion;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)date beforeDate:(id)date onlyFromThisDevice:(BOOL)device completionHandler:(id /* block */)handler;
- (void)getItemCountBeforeDate:(id)date completionHandler:(id /* block */)handler;
- (void)searchForUserTypedString:(id)string options:(unsigned long long)options currentTime:(double)time writeHandle:(id)handle completionHandler:(id /* block */)handler;
- (void)computeFrequentlyVisitedSites:(unsigned long long)sites minimalVisitCountScore:(unsigned long long)score blockList:(id)list allowList:(id)list options:(unsigned long long)options currentTime:(double)time completionHandler:(id /* block */)handler;
- (id)_fetchListenerNamesFromDatabase:(id *)database;
- (id)_updateListenerRegistration:(id)registration lastSeen:(double)seen;
- (id)_fetchEventsForListener:(id)listener error:(id *)error;
- (void)fetchEventsForListener:(id)listener completionHandler:(id /* block */)handler;
- (id)_markEventsAsReceivedByListener:(id)listener eventIDs:(id)ids;
- (void)markEventsAsReceivedByListener:(id)listener eventIDs:(id)ids completionHandler:(id /* block */)handler;
- (long long)_writeEventToDatabase:(id)database listeners:(id)listeners error:(id *)error;
- (void)_dispatchEvent:(id)event listenersToIgnore:(id)ignore persistForDelayedDispatching:(BOOL)dispatching completionHandler:(id /* block */)handler;
- (void)dispatchEvent:(id)event listenersToIgnore:(id)ignore persistForDelayedDispatching:(BOOL)dispatching completionHandler:(id /* block */)handler;
- (id)_dateForMetadataKey:(id)key error:(id *)error;
- (void)_startingClearHistoryOperationForStartDate:(id)date endDate:(id)date;
- (void)_finishedClearingHistory;
- (void)_clearWBSHistorySQLiteStoreClearHistoryKeys;
- (void)visitIdentifiersMatchingExistingVisits:(id)visits completionHandler:(id /* block */)handler;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)handler;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)window completionHandler:(id /* block */)handler;
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)generation completionHandler:(id /* block */)handler;
@end

#endif /* WBSHistoryServiceDatabase_h */