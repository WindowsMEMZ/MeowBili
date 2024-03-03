//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudZone_h
#define HMBCloudZone_h
@import Foundation;

#include "HMFObject.h"
#include "HMBCloudDatabase.h"
#include "HMBCloudZoneConfiguration.h"
#include "HMBCloudZoneID.h"
#include "HMBCloudZoneRebuilder-Protocol.h"
#include "HMBCloudZoneShareModel.h"
#include "HMBLocalZone.h"
#include "HMBLocalZoneID-Protocol.h"
#include "HMBMirrorProtocol-Protocol.h"
#include "HMBModelContainer.h"
#include "HMFLogging-Protocol.h"

@class CKDatabase, NAFuture, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSUUID;
@protocol HMBCloudZoneDelegate;

@interface HMBCloudZone : HMFObject<HMFLogging, HMBMirrorProtocol> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly, nonatomic) long long keyStatus;
@property (readonly, nonatomic) NAFuture *waitForPendingRebuild;
@property (readonly, nonatomic) BOOL zoneRebuildInProgress;
@property (readonly) BOOL hasPerformedInitialFetch;
@property (readonly, copy) NSSet *subscriptions;
@property (readonly, nonatomic) NSSet *participants;
@property (readonly, nonatomic) CKDatabase *database;
@property (weak, nonatomic) HMBCloudDatabase *cloudDatabase;
@property (weak, nonatomic) HMBLocalZone *stateZone;
@property (readonly, nonatomic) NSUUID *stateModelID;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (readonly, nonatomic) NSMapTable *modelClassToRequiresPostProcessingMap;
@property (readonly, nonatomic) NSMutableDictionary *inProgressPushFuturesByOutputBlockRow;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NAFuture *shutdownFuture;
@property (retain, nonatomic) NAFuture *destroyFuture;
@property (retain, nonatomic) NSObject<HMBCloudZoneRebuilder> *rebuilder;
@property (readonly, nonatomic) NSOperationQueue *recordOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *shareOperationQueue;
@property (retain) NAFuture *queuedCloudPullFuture;
@property (retain) NSMutableSet *queuedFetchRecordsContexts;
@property (retain) HMBCloudZoneShareModel *shareModel;
@property (readonly, nonatomic) NSMutableDictionary *shareParticipantModelsByClientIdentifier;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (retain, nonatomic) NSArray *defaultDesiredKeys;
@property (weak, nonatomic) NSObject<HMBCloudZoneDelegate> *delegate;
@property (readonly, copy, nonatomic) HMBCloudZoneConfiguration *configuration;
@property (weak, nonatomic) HMBLocalZone *localZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HMBLocalZoneID> *zoneID;
@property (readonly, nonatomic) NAFuture *startUp;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (BOOL)populateV4CloudRecord:(id)record withModel:(id)model metadataFieldData:(id)data startEncoding:(unsigned long long)encoding endEncoding:(unsigned long long)encoding error:(id *)error;
- (id)cloudMetadataForModel:(id)model usingEncoding:(unsigned long long)encoding;
- (id)cloudFieldForEncoding:(unsigned long long)encoding;
- (id)fetchOwnerParticipantCloudShareID;
- (id)fetchCurrentParticipantCloudShareID;
- (id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)identifier;
- (id)fetchInvitationWithContext:(id)context;
- (id)_fetchInvitationWithContext:(id)context usingShare:(id)share;
- (id)setWriteAccessEnabled:(BOOL)enabled forParticipant:(id)participant;
- (id)_setWriteAccessEnabled:(BOOL)enabled forParticipant:(id)participant usingShare:(id)share;
- (id)revokeShareAccessForParticipant:(id)participant;
- (id)_revokeShareAccessForParticipant:(id)participant usingShare:(id)share;
- (id)participantWithClientIdentifier:(id)identifier;
- (void)initializeShareModels;
- (BOOL)handleUpdatedShare:(id)share error:(id *)error;
- (BOOL)handleUpdatedShareParticipantRecord:(id)record error:(id *)error;
- (void)handleUpdatedShareModel:(id)model;
- (void)handleUpdatedShareParticipantModels:(id)models;
- (id)createShareModel;
- (id)_createShareModel;
- (id)leaveCloudShareRequestingNewInvitationToken:(BOOL)token;
- (id)_leaveCloudShareRequestingNewInvitationToken:(BOOL)token allowCloudPull:(BOOL)pull;
- (id)_addShareOperationWithName:(id)name block:(id /* block */)block;
- (id)_addShareOperationAfterStartupWithName:(id)name block:(id /* block */)block;
- (id)_pushUpdatedShare:(id)share;
- (id)_pushUpdatedShare:(id)share participantRecord:(id)record;
- (id)_pushDeletedParticipantRecordIDs:(id)ids;
- (void)pushGroupWithBlockRow:(unsigned long long)row tuples:(id)tuples options:(id)options activity:(id)activity completionPromise:(id)promise;
- (id)_triggerOutputForOutputRow:(unsigned long long)row options:(id)options;
- (id)queryRecordsWithType:(id)type;
- (id)fetchCompleteModelWithID:(id)id;
- (id)fetchCompleteModelsWithIDs:(id)ids;
- (id)fetchCompleteModel:(id)model force:(BOOL)force;
- (id)fetchCompleteModels:(id)models force:(BOOL)force;
- (id)_fetchCompleteModelsWithIDs:(id)ids force:(BOOL)force;
- (id)_fetchRecordsWithRecordIDs:(id)ids canRetry:(BOOL)retry;
- (void)_fetchRecordsForContexts:(id)contexts;
- (id)fetchRecordsWithRecordIDs:(id)ids;
- (id)fetchRecordWithRecordID:(id)id canRetry:(BOOL)retry;
- (id)fetchCompleteModelForRecordID:(id)id;
- (id)fetchCompleteModelsForRecordIDs:(id)ids;
- (id)registerSubscriptionForExternalRecordType:(id)type;
- (id)unregisterSubscriptionForExternalRecordType:(id)type;
- (id)performCloudPullWithOptions:(id)options;
- (id)performFullCloudPullWithOptions:(id)options;
- (id)performStartupCloudPullWithOptions:(id)options;
- (id)_performCloudPullWithOptions:(id)options useCachedServerToken:(BOOL)token;
- (id)_performImmediateCloudPullWithOptions:(id)options useCachedServerToken:(BOOL)token;
- (id)_syncInternalModels;
- (BOOL)resolveConflicts:(id)conflicts options:(id)options;
- (id)fetchChangesWithToken:(id)token options:(id)options;
- (id)recordIDForModel:(id)model;
- (BOOL)populateManateeCloudRecord:(id)record withModel:(id)model encodingContext:(id)context error:(id *)error;
- (id)encodeManateeCloudModel:(id)model existingRecord:(id)record encodingContext:(id)context error:(id *)error;
- (id)decodeManateeCloudFromRecord:(id)record externalRecordFields:(id)fields source:(unsigned long long)source error:(id *)error;
- (id)pushRecordsToUpdate:(id)update recordIDsToRemove:(id)remove configuration:(id)configuration rollbackEnabled:(BOOL)enabled needsNewInvitationToken:(BOOL)token;
- (id)pushRecordsToUpdate:(id)update recordIDsToRemove:(id)remove configuration:(id)configuration rollbackEnabled:(BOOL)enabled;
- (id)encodeShareModel:(id)model;
- (id)decodeShareModelFromShare:(id)share;
- (id)startUpRebuilderIfNeeded;
- (void)handleLostKeys;
- (BOOL)isZoneRebuildInProgress;
- (void)handleZoneChangedNotification;
- (void)handleUpdatedRebuilderModel:(id)model;
- (void)rebuild;
- (id)decodeModelFromRecord:(id)record externalRecordFields:(id)fields source:(unsigned long long)source error:(id *)error;
- (id)encodeRecordFromModel:(id)model externalData:(id)data encodingContext:(id)context error:(id *)error;
- (id)encodeRecordFromModel:(id)model existingRecord:(id)record encodingContext:(id)context error:(id *)error;
- (id)initWithCloudDatabase:(id)database configuration:(id)configuration state:(id)state;
- (void)dealloc;
- (id)shutdown;
- (id)destroy;
- (id)triggerOutputForOutputRow:(unsigned long long)row options:(id)options;
- (BOOL)retryCloudKitOperation:(id)operation afterError:(id)error retryBlock:(id /* block */)block;
- (void)notifyDelegateOfError:(id)error forOperation:(id)operation;
- (void)startUpWithLocalZone:(id)zone;
- (void)_startUpWithPrivateLocalZone:(id)zone;
- (void)_startUpWithPublicLocalZone:(id)zone;
- (id)flush;
- (BOOL)isInternalModel:(id)model;
- (void)handleUpdatedInternalModels:(id)models;
- (void)handleDeletion;
- (id)createZoneState;
- (id)logIdentifier;
- (id)attributeDescriptions;
@end

#endif /* HMBCloudZone_h */