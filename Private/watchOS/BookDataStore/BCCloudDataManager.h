//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudDataManager_h
#define BCCloudDataManager_h
@import Foundation;

#include "BCCloudDataPrivacyDelegate-Protocol.h"
#include "BCCloudDataSource.h"
#include "BCCloudDataSyncProvider-Protocol.h"
#include "BCCloudKitController.h"
#include "BDSCloudKitSupportSignOutDissociate-Protocol.h"

@class NSManagedObjectContext, NSString;
@protocol BCCloudDataMapper, BDSCloudDataManagerMonitor, OS_dispatch_queue;

@interface BCCloudDataManager : NSObject<BDSCloudKitSupportSignOutDissociate>

@property (weak, nonatomic) NSManagedObjectContext *moc;
@property (retain, nonatomic) BCCloudDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *notificationName;
@property (weak, nonatomic) NSObject<BCCloudDataSyncProvider> *syncManager;
@property Class immutableClass;
@property Class mutableClass;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) BOOL signalDataChangedTransaction;
@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) NSObject<BCCloudDataMapper> *dataMapper;
@property (weak, nonatomic) NSObject<BDSCloudDataManagerMonitor> *monitor;

/* instance methods */
- (id)initWithCloudDataSource:(id)source entityName:(id)name notificationName:(id)name immutableClass:(Class)class mutableClass:(Class)class syncManager:(id)manager cloudKitController:(id)controller;
- (id)initWithCloudDataSource:(id)source entityName:(id)name notificationName:(id)name immutableClass:(Class)class mutableClass:(Class)class syncManager:(id)manager cloudKitController:(id)controller dataMapper:(id)mapper;
- (id)initWithCloudDataSource:(id)source entityName:(id)name notificationName:(id)name immutableClass:(Class)class mutableClass:(Class)class syncManager:(id)manager cloudKitController:(id)controller privacyDelegate:(id)delegate;
- (id)initWithCloudDataSource:(id)source entityName:(id)name notificationName:(id)name immutableClass:(Class)class mutableClass:(Class)class syncManager:(id)manager cloudKitController:(id)controller dataMapper:(id)mapper privacyDelegate:(id)delegate;
- (void)_logError:(id)error at:(id)at;
- (void)mq_incrementCloudVersion;
- (void)startSyncToCKWithSyncManager:(id)manager completion:(id /* block */)completion;
- (void)_dirtyMutableCloudDataWithFetchLimit:(unsigned long long)limit synchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)dirtyMutableCloudDataWithFetchLimit:(unsigned long long)limit completion:(id /* block */)completion;
- (id)mq_cloudSyncVersions;
- (void)mq_signalTransactions;
- (id)mq_sanitizeError:(id)error;
- (void)currentCloudSyncVersions:(id /* block */)versions;
- (void)setCloudData:(id)data predicate:(id)predicate completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate mergers:(id)mergers completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate isEqualCheckIgnoringEmptySalt:(BOOL)salt completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate mergers:(id)mergers isEqualCheckIgnoringEmptySalt:(BOOL)salt completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate propertyIDKey:(id)idkey completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate propertyIDKey:(id)idkey mergers:(id)mergers completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate propertyIDKey:(id)idkey isEqualCheckIgnoringEmptySalt:(BOOL)salt completion:(id /* block */)completion;
- (void)setCloudData:(id)data predicate:(id)predicate propertyIDKey:(id)idkey mergers:(id)mergers isEqualCheckIgnoringEmptySalt:(BOOL)salt completion:(id /* block */)completion;
- (void)removeCloudDataForPredicate:(id)predicate completion:(id /* block */)completion;
- (void)updateSyncGenerationFromCloudData:(id)data predicate:(id)predicate propertyIDKey:(id)idkey completion:(id /* block */)completion;
- (void)deleteCloudDataForPredicate:(id)predicate completion:(id /* block */)completion;
- (void)countWithPredicate:(id)predicate completion:(id /* block */)completion;
- (void)cloudDataWithPredicate:(id)predicate sortDescriptors:(id)descriptors completion:(id /* block */)completion;
- (id)mutableCloudDataWithPredicate:(id)predicate sortDescriptors:(id)descriptors;
- (void)mutableCloudDataWithPredicate:(id)predicate sortDescriptors:(id)descriptors synchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)cloudDatasWithPredicate:(id)predicate sortDescriptors:(id)descriptors maximumResultCount:(unsigned long long)count filter:(id /* block */)filter completion:(id /* block */)completion;
- (void)cloudDatasWithPredicate:(id)predicate completion:(id /* block */)completion;
- (void)transformedCloudDatasWithPredicate:(id)predicate transformer:(id /* block */)transformer limit:(long long)limit completion:(id /* block */)completion;
- (void)resolvedCloudDataForCloudData:(id)data predicate:(id)predicate completion:(id /* block */)completion;
- (void)resolvedCloudDataForCloudData:(id)data withResolvers:(id)resolvers predicate:(id)predicate completion:(id /* block */)completion;
- (void)resolvedCloudDataForCloudData:(id)data withResolvers:(id)resolvers mergers:(id)mergers predicate:(id)predicate completion:(id /* block */)completion;
- (void)resolveConflictsForRecords:(id)records completion:(id /* block */)completion;
- (void)resolveConflictsForRecords:(id)records withResolvers:(id)resolvers completion:(id /* block */)completion;
- (void)resolveConflictsForRecords:(id)records withResolvers:(id)resolvers mergers:(id)mergers completion:(id /* block */)completion;
- (void)failedRecordIDs:(id)ids completion:(id /* block */)completion;
- (void)fetchCloudDataIncludingDeleted:(BOOL)deleted completion:(id /* block */)completion;
- (void)getChangesSince:(id)since forEntityClass:(Class)class completion:(id /* block */)completion;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)completion;
- (void)hasSaltChangedWithCompletion:(id /* block */)completion;
- (id)diagnosticDirtyCloudDataInfos;
@end

#endif /* BCCloudDataManager_h */