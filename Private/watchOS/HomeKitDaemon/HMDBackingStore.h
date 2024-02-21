//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStore_h
#define HMDBackingStore_h
@import Foundation;

#include "HMFObject.h"
#include "HMCContext.h"
#include "HMCPartition.h"
#include "HMDBackingStoreDataSource-Protocol.h"
#include "HMDBackingStoreLocal.h"
#include "HMDBackingStoreObjectProtocol-Protocol.h"
#include "HMDCoreData.h"
#include "HMDHome.h"
#include "HMDHomeManager.h"
#include "HMDObjectLookup.h"
#include "HMFLogging-Protocol.h"

@class CKRecordID, HMBLocalZone, NSString, NSUUID;

@interface HMDBackingStore : HMFObject<HMDBackingStoreDataSource, HMFLogging> {
  /* instance variables */
  BOOL _removedLegacyArchive;
  NSObject<HMDBackingStoreDataSource> *_dataSource;
}

@property (readonly, @dynamic, nonatomic) HMCPartition *partition;
@property (readonly, nonatomic) HMDCoreData *coreData;
@property (readonly, nonatomic) CKRecordID *root;
@property (retain, nonatomic) HMDBackingStoreLocal *local;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDObjectLookup *lookup;
@property (retain, nonatomic) HMBLocalZone *localZone;
@property (readonly, nonatomic) NSString *contextName;
@property (readonly, nonatomic) NSString *contextTransactionAuthor;
@property (retain, nonatomic) HMCContext *context;
@property (weak, nonatomic) NSObject<HMDBackingStoreObjectProtocol> *delegate;
@property (readonly) NSString *activeControllerKeyUsername;
@property (readonly) BOOL isAtomicSaveFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cdlsActiveBackingStores;
+ (id)cdlsBackingStoreWithHandle:(id)handle error:(id *)error;
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)error;
+ (id)dependencySortTestInterface:(id)interface;
+ (id)cdlsFetchManagedObjectWithUUID:(id)uuid ofModelType:(Class)type error:(id *)error;
+ (id)cdlsFetchManagedObjectWithUUID:(id)uuid ofManagedObjectType:(Class)type error:(id *)error;
+ (id)cdlsFetchObjectWithUUID:(id)uuid ofModelType:(Class)type error:(id *)error;
+ (id)cdlsModelIDStringsForManagedObjects:(id)objects;
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)uuidstrings ofManagedObjectType:(Class)type;
+ (void)start;
+ (id)allowedTypes;
+ (id)deeplyProblematicObjectTypes;
+ (id)internalAllowedTypes;
+ (id)flushBackingStore;
+ (id)resetBackingStore;
+ (id)logCategory;
+ (id)currentDevice;
+ (void)saveToPersistentStoreWithReason:(id)reason homeManager:(id)manager shouldIncrementGenerationCounter:(BOOL)counter backingStore:(id)store completionHandler:(id /* block */)handler;
+ (id)_saveToLocalStoreWithReason:(id)reason homeManager:(id)manager shouldIncrementGenerationCounter:(BOOL)counter backingStore:(id)store;

/* instance methods */
- (void)handleCoreDataWillSaveNotification:(id)notification;
- (void)handleCoreDataDidSaveNotification:(id)notification;
- (void)handleCoreDataDidSaveNotification:(id)notification sourceContext:(id)context;
- (void)dmKickClients;
- (id)cdlsFetchObjectWithUUID:(id)uuid ofModelType:(Class)type error:(id *)error;
- (void)cdlsReplayAllModelsStartingAt:(id)at isInitialGraphLoad:(BOOL)load;
- (void)_cdlsReplayAllModelsStartingAt:(id)at isInitialGraphLoad:(BOOL)load;
- (void)cdlsCommit:(id)commit run:(BOOL)run save:(BOOL)save completionHandler:(id /* block */)handler;
- (void)cdlsUpdate:(id)update destination:(unsigned long long)destination;
- (void)cdlsDelete:(id)delete destination:(unsigned long long)destination;
- (id)initWithUUID:(id)uuid homeManager:(id)manager home:(id)home dataSource:(id)source;
- (id)initWithUUID:(id)uuid homeManager:(id)manager;
- (id)initWithUUID:(id)uuid home:(id)home;
- (id)initWithUUID:(id)uuid;
- (id)transaction:(id)transaction options:(id)options;
- (void)commit:(id)commit run:(BOOL)run save:(BOOL)save completionHandler:(id /* block */)handler;
- (void)commit:(id)commit run:(BOOL)run save:(BOOL)save archiveInline:(BOOL)inline completionHandler:(id /* block */)handler;
- (void)updateModelObjects:(id)objects destination:(unsigned long long)destination;
- (void)deleteModelObjects:(id)objects destination:(unsigned long long)destination;
- (void)submit:(id)submit;
- (id)logIdentifier;
- (void)saveToPersistentStoreWithReason:(id)reason incrementGeneration:(BOOL)generation;
- (void)submitBlock:(id /* block */)block;
- (id)__fetchWithGroup:(id)group uuids:(id)uuids error:(id *)error;
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)transaction;
- (id)createBackingStoreOperation;
- (id)localBackingStore;
- (id)backingStoreOperationQueue;
- (id)createHomeObjectLookupWithHome:(id)home;
- (id)dataForPersistentStoreIncrementingGeneration:(BOOL)generation reason:(id)reason;
@end

#endif /* HMDBackingStore_h */