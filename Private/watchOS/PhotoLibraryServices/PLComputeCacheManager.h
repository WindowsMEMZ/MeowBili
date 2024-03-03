//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLComputeCacheManager_h
#define PLComputeCacheManager_h
@import Foundation;

#include "PLCloudAssetPayloadRestoreDelegate-Protocol.h"
#include "PLJournalManager-Protocol.h"
#include "PLJournalManager.h"
#include "PLLibraryServicesManager.h"
#include "PLPhotoLibrary.h"

@class NSNumber, PLCoreAnalyticsEventManager;
@protocol OS_dispatch_queue;

@interface PLComputeCacheManager : NSObject<PLCloudAssetPayloadRestoreDelegate, PLJournalManager> {
  /* instance variables */
  PLLibraryServicesManager *_lsm;
  PLJournalManager *_journalManager;
  PLCoreAnalyticsEventManager *_coreAnalyticsManager;
  NSNumber *_restoreState;
  PLPhotoLibrary *_restoreCachePhotoLibrary;
  NSObject<OS_dispatch_queue> *_queue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restoreStateLock;
}

@property (readonly, nonatomic) BOOL isReadyForAnalysis;

/* class methods */
+ (id)name;
+ (id)baseURLFromPathManager:(id)manager;
+ (id)payloadClasses;
+ (id)restorePayloadClasses;
+ (BOOL)isEnabledWithPathManager:(id)manager error:(id *)error;
+ (BOOL)shouldPublishAnalyticsForRestoreError:(id)error;
+ (id)_urlForLocation:(long long)location pathManager:(id)manager createIfNeeded:(BOOL)needed error:(id *)error;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager;
- (void)_publish;
- (void)start;
- (void)stop;
- (void)notifyReadyToRestoreWithInitialSyncDate:(id)date;
- (void)notifyCPLConfiguration:(id)cplconfiguration;
- (BOOL)_isInitialSyncWithInitialSyncDate:(id)date;
- (BOOL)resetComputeCacheWithError:(id *)error;
- (BOOL)snapshotComputeCacheAndBackupIfNeededWithError:(id *)error;
- (BOOL)snapshotJournalsForPayloadClassIDs:(id)ids error:(id *)error;
- (void)snapshotJournalsForPayloadClassIDs:(id)ids withCompletionHandler:(id /* block */)handler;
- (BOOL)_snapshotJournalsForPayloadClassIDs:(id)ids error:(id *)error;
- (BOOL)_performSnapshotForPayloadClassIDs:(id)ids error:(id *)error;
- (BOOL)_removeSnapshotWithError:(id *)error;
- (id)_snapshotPolicy;
- (void)coalesceJournalsForPayloadClassIDs:(id)ids withChangeJournalOverThreshold:(float)threshold completionHandler:(id /* block */)handler;
- (BOOL)coalesceJournalsForPayloadClassIDs:(id)ids withChangeJournalOverThreshold:(float)threshold error:(id *)error;
- (BOOL)createArchiveWithError:(id *)error;
- (BOOL)_createArchiveWithError:(id *)error;
- (BOOL)_archiveSnapshotIfNecessaryWithError:(id *)error;
- (BOOL)_hasPrepareDataToBackupWithError:(id *)error;
- (BOOL)_archiveSnapshotWithError:(id *)error;
- (BOOL)_transferToBackupLocationWithError:(id *)error;
- (BOOL)_addBackupCreatedMarkerWithError:(id *)error;
- (BOOL)restoreComputeCacheWithProgress:(id)progress error:(id *)error;
- (BOOL)_restoreComputeCacheWithProgress:(id)progress error:(id *)error;
- (BOOL)_restoreComputeCacheArchiveWithProgress:(id)progress error:(id *)error;
- (BOOL)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(id *)error;
- (BOOL)_removeRestoreDataWithError:(id *)error;
- (long long)_restoreState;
- (long long)_performBlockOnRestoreStateLockAndWait:(id /* block */)wait;
- (void)_setRestoreState:(long long)state;
- (void)_resetRestoreState;
- (BOOL)_hasBackupCreatedMarker;
- (BOOL)_hasBackupArchive;
- (BOOL)_removeComputeCacheDataForMatchingRestoreState:(long long)state error:(id *)error;
- (BOOL)_removeLocation:(long long)location error:(id *)error;
- (BOOL)_incrementRestoreCount:(short *)count error:(id *)error;
- (BOOL)_getRestoreCount:(short *)count error:(id *)error;
- (unsigned long long)_getArchiveSize;
- (void)_enumerateComputeCachePrepareDirectoryUsingBlock:(id /* block */)block;
- (id)_filenameExclusionList;
- (BOOL)_isValidArchiveURL:(id)url filenameExclusionList:(id)list;
- (BOOL)_archivePrepareDirectoryWithError:(id *)error;
- (void)_cleanupLegacyArchiveFilename;
- (BOOL)_cleanupLegacyArchiveURL:(id)url replacementURL:(id)url error:(id *)error;
- (id)status;
- (id)statusFromPolicy:(id)policy;
- (void)_updateCachedPolicyConfigurationWithCPLConfiguration:(id)cplconfiguration;
- (id)_cachedPolicyConfiguration;
- (id)_newTransientContext;
- (long long)_libraryAssetCount;
- (id)_shortLivedLibrary;
- (id)managedObjectContext;
- (void)performTransactionAndWait:(id /* block */)wait;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)identifiers error:(id *)error;
@end

#endif /* PLComputeCacheManager_h */