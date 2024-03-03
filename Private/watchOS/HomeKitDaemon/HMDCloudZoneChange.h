//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudZoneChange_h
#define HMDCloudZoneChange_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCloudGroupChange.h"
#include "HMDCloudZone.h"

@class CKRecordID, NSArray, NSUUID;

@interface HMDCloudZoneChange : HMFObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) HMDCloudZone *cloudZone;
@property (retain, nonatomic) HMDCloudGroupChange *rootGroupChange;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (readonly, nonatomic) BOOL temporaryCache;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly, nonatomic) BOOL encryptionFailed;
@property (readonly, nonatomic) BOOL controllerIdentifierChanged;
@property (readonly, nonatomic) NSArray *objectChanges;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly) BOOL doRecordsExistInCache;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)init;
- (id)initWithZone:(id)zone temporaryCache:(BOOL)cache;
- (id)shortDescription;
- (id)description;
- (void)addChangeWithObjectChange:(id)change;
- (void)addChangeWithRecord:(id)record;
- (void)addChangeWithDeletedRecordID:(id)id;
- (void)removeChangeWithObjectID:(id)id;
- (BOOL)doesRecordExistWithObjectID:(id)id;
- (BOOL)doesRecordExistInCacheWithObjectID:(id)id;
- (id)cachedCloudRecordWithObjectID:(id)id;
- (void)cachedCloudRecordWithObjectID:(id)id completionHandler:(id /* block */)handler;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)cache;
- (void)setAllChangedAsProcessed;
- (BOOL)moreChangesToProcess;
- (void)fetchBatchToUpload:(id /* block */)upload;
- (void)setSaveAsProcessedWithRecord:(id)record;
- (void)resetRecordWithRecordID:(id)id;
- (void)setDeleteAsProcessedWithRecordID:(id)id;
- (void)flushAllChangesToCache;
- (id)changeWithObjectID:(id)id;
- (id)changeWithRecordName:(id)name;
- (BOOL)isTemporaryCache;
@end

#endif /* HMDCloudZoneChange_h */