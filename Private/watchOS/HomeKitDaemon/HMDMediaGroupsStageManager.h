//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaGroupsStageManager_h
#define HMDMediaGroupsStageManager_h
@import Foundation;

#include "HMDMediaGroupsAggregateData.h"
#include "HMDMediaGroupsStageManagerDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFStagedValueDelegate-Protocol.h"

@class HMFStagedValue, NSString, NSUUID, NSUserDefaults;

@interface HMDMediaGroupsStageManager : NSObject<HMFLogging, HMFStagedValueDelegate>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSUserDefaults *userDefaults;
@property (readonly) HMFStagedValue *stagedAggregateData;
@property (retain) HMDMediaGroupsAggregateData *committedAggregateData;
@property (copy) HMDMediaGroupsAggregateData *lastNotifiedAggregateData;
@property (retain) NSUUID *stagedUnpairedCurrentDestinationControllerIdentifier;
@property (weak) NSObject<HMDMediaGroupsStageManagerDelegate> *delegate;
@property (readonly, copy) HMDMediaGroupsAggregateData *aggregateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithIdentifier:(id)identifier userDefaults:(id)defaults;
- (void)configure;
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)identifier;
- (void)unstageNullDestinationForCurrentDestinationController;
- (void)refreshManager;
- (id)transformedDestinations;
- (id)transformedDestinationControllersData;
- (id)transformedGroups;
- (void)notifyOfUpdatedAggregateData;
- (void)commitAggregateData:(id)data;
- (void)saveAssociatedGroupDataForLegacyCurrentAccessory:(id)accessory;
- (void)saveAssociatedGroupDataForCurrentLegacyHomePodAccessory:(id)accessory;
- (void)saveAssociatedGroupDataForCurrentLegacyAppleTVAccessory:(id)tvaccessory;
- (void)saveDataForLegacyMediaSystem:(id)system;
- (id)transformedDestinationForLegacyMediaSystem:(id)system role:(unsigned long long)role;
- (void)saveAggregateData:(id)data;
- (void)saveIdentifier;
- (id)savedAggregateData;
- (BOOL)hasSavedIdentifier;
- (void)saveDestinationControllerData:(id)data;
- (void)saveDestinations:(id)destinations;
- (void)saveGroup:(id)group;
- (void)clearSavedData;
- (void)stagedValue:(id)value didExpireValue:(id)value;
- (id)logIdentifier;
@end

#endif /* HMDMediaGroupsStageManager_h */