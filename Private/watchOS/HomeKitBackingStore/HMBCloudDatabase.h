//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudDatabase_h
#define HMBCloudDatabase_h
@import Foundation;

#include "HMFObject.h"
#include "HMBCloudCredentialsAvailabilityListener.h"
#include "HMBCloudDatabaseConfiguration.h"
#include "HMBCloudDatabaseDataSource-Protocol.h"
#include "HMBCloudDatabaseStateModel.h"
#include "HMBCloudPushObserver-Protocol.h"
#include "HMBLocalDatabase.h"
#include "HMBLocalZone.h"
#include "HMFLogging-Protocol.h"

@class CKContainer, CKContainerID, CKDatabase, NAFuture, NSMutableDictionary, NSOperationQueue, NSSet, NSString;
@protocol HMBCloudDatabaseDelegate;

@interface HMBCloudDatabase : HMFObject<HMBCloudPushObserver, HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly, nonatomic) NSSet *privateZoneIDs;
@property (readonly, nonatomic) NSSet *sharedZoneIDs;
@property (readonly, nonatomic) NSSet *publicZoneIDs;
@property (readonly, nonatomic) NSObject<HMBCloudDatabaseDataSource> *dataSource;
@property (readonly, nonatomic) HMBLocalZone *stateZone;
@property (retain, nonatomic) HMBCloudDatabaseStateModel *privateDatabaseState;
@property (retain, nonatomic) HMBCloudDatabaseStateModel *sharedDatabaseState;
@property (retain, nonatomic) HMBCloudDatabaseStateModel *publicDatabaseState;
@property (readonly, nonatomic) NSMutableDictionary *zoneStateByZoneID;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) HMBCloudCredentialsAvailabilityListener *credentialsAvailabilityListener;
@property (readonly, nonatomic) CKDatabase *sharedDatabase;
@property (readonly, nonatomic) CKDatabase *privateDatabase;
@property (readonly, nonatomic) CKDatabase *publicDatabase;
@property (copy, nonatomic) id /* block */ cloudZoneFactory;
@property (readonly, nonatomic) NSOperationQueue *invitationOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *databaseFetchOperationQueue;
@property (retain, nonatomic) NAFuture *initialCloudSyncFuture;
@property (weak, nonatomic) NSObject<HMBCloudDatabaseDelegate> *delegate;
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) HMBCloudDatabaseConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)registerSubscriptionForExternalRecordType:(id)type databaseState:(id)state;
- (id)registerPrivateSubscriptionForExternalRecordType:(id)type;
- (id)registerSharedSubscriptionForExternalRecordType:(id)type;
- (id)unregisterPrivateSubscriptionForExternalRecordType:(id)type;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)type;
- (id)pushSubscriptionsForDatabase:(id)database subscriptionsToSave:(id)save subscriptionIDsToRemove:(id)remove;
- (id)registerSubscription:(id)subscription forZoneWithID:(id)id;
- (id)unregisterSubscription:(id)subscription forZoneWithID:(id)id;
- (id)subscriptionsForZoneWithID:(id)id;
- (id)unregisterPrivateSubscriptionForSubscriptionID:(id)id;
- (id)unregisterSharedSubscriptionForSubscriptionID:(id)id;
- (id)registerPrivateSubscription:(id)subscription;
- (id)_zonesWithScope:(long long)scope;
- (id)synchronizeSharedZones;
- (id)databaseStateForDatabaseScope:(long long)scope;
- (id)performCloudPullForScope:(long long)scope;
- (id)fetchParticipantWithLookupInfo:(id)info;
- (id)fetchShareMetadataForInvitation:(id)invitation;
- (id)acceptInvitationWithShareMetadata:(id)metadata;
- (id)fetchCurrentUserRecordForDatabase:(id)database;
- (id)fetchSubscriptionsInDatabase:(id)database;
- (id)subscriptionIDForCloudID:(id)id recordType:(id)type;
- (id)subscriptionIDForZoneID:(id)id recordType:(id)type;
- (id)serverChangeTokenForZoneWithID:(id)id;
- (BOOL)needsZoneCreationForZoneWithID:(id)id;
- (void)updateServerChangeToken:(id)token forDatabaseWithScope:(long long)scope;
- (void)updateServerChangeToken:(id)token forZoneWithID:(id)id;
- (void)updateRebuildStatus:(id)status forZoneWithID:(id)id;
- (void)updateNeedsZoneDeletion:(BOOL)deletion forZoneWithID:(id)id;
- (id)fetchZonesWithIDs:(id)ids inDatabase:(id)database;
- (id)createPrivateZoneWithID:(id)id;
- (id)removePrivateZoneWithID:(id)id;
- (id)acceptInvitation:(id)invitation;
- (id)_acceptInvitation:(id)invitation;
- (id)performCodeOperationWithServiceName:(id)name functionName:(id)name request:(id)request responseClass:(Class)class;
- (id)initWithLocalDatabase:(id)database stateZone:(id)zone container:(id)container configuration:(id)configuration databaseStateModelsByScope:(id)scope zoneStateModels:(id)models credentialsAvailabilityListener:(id)listener dataSource:(id)source;
- (id)initWithLocalDatabase:(id)database configuration:(id)configuration;
- (id)performInitialCloudSync;
- (void)_performInitialCloudSync;
- (id)waitForManateeAvailability;
- (id)_updateAPSRegistration:(BOOL)apsregistration;
- (void)addContainerOperation:(id)operation;
- (void)addDatabaseOperation:(id)operation forScope:(long long)scope;
- (id)synchronizeZoneStateForZoneIDs:(id)ids;
- (id)shutdown;
- (void)handleCreatedZoneIDs:(id)ids;
- (void)handleUpdatedZonesIDs:(id)ids;
- (void)handleRemovedZoneIDs:(id)ids userInitiated:(BOOL)initiated;
- (id)openOrCreatePrivateZoneWithID:(id)id configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)openExistingPrivateZoneWithID:(id)id configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)openExistingSharedZoneWithID:(id)id configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (BOOL)reopenOrRecreatePrivateZone:(id)zone error:(id *)error;
- (id)_openOrCreateZoneWithScope:(long long)scope recordZoneID:(id)id delegate:(id)delegate shouldCreate:(BOOL)create configuration:(id)configuration existingCloudZone:(id)zone error:(id *)error;
- (id)removeZoneWithID:(id)id;
- (BOOL)retryCloudKitOperation:(id)operation afterError:(id)error retryBlock:(id /* block */)block;
- (BOOL)_retryCloudKitOperationAfterError:(id)error retryBlock:(id /* block */)block;
- (void)notifyDelegateOfError:(id)error forOperation:(id)operation;
- (void)removeStateForZoneID:(id)id;
- (void)retryStartupBlock:(id /* block */)block;
- (id)operationConfigurationWithProcessingOptions:(id)options;
- (void)handler:(id)handler didReceiveCKNotification:(id)cknotification;
- (void)handler:(id)handler didReceiveMessageWithUserInfo:(id)info;
- (id)logIdentifier;
- (id)attributeDescriptions;
@end

#endif /* HMBCloudDatabase_h */