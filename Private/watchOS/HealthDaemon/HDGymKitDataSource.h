//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDGymKitDataSource_h
#define HDGymKitDataSource_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDWorkoutBasicDataSource.h"
#include "HDWorkoutDataAccumulator-Protocol.h"
#include "HDWorkoutDataDestination-Protocol.h"
#include "HDWorkoutDataSource-Protocol.h"
#include "HKDataFlowLinkProcessor-Protocol.h"
#include "HKGymKitDataSourceServerInterface-Protocol.h"
#include "HKLiveWorkoutDataSourceServerInterface-Protocol.h"

@class HKDataFlowLink, HKWorkoutDataSourceConfiguration, NSSet, NSString, NSUUID;

@interface HDGymKitDataSource : HDStandardTaskServer<HKDataFlowLinkProcessor, HKGymKitDataSourceServerInterface, HKLiveWorkoutDataSourceServerInterface, HDWorkoutDataSource, HDWorkoutDataDestination> {
  /* instance variables */
  HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
  HDWorkoutBasicDataSource *_basicDataSource;
  NSSet *_machineSourceTypes;
  NSSet *_localDevicePreferredTypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_setDataSourceConfiguration:(id)configuration;
- (void)remote_synchronizeWithCompletion:(id /* block */)completion;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)workoutDataDestination:(id)destination requestsDataFrom:(id)from to:(id)to;
- (void)workoutDataDestination:(id)destination didChangeFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)workoutDataDestination:(id)destination requestsFinalDataFrom:(id)from to:(id)to completion:(id /* block */)completion;
- (void)workoutDataDestination:(id)destination didUpdateConfiguration:(id)configuration;
- (id)quantityTypesToIncludeWhilePaused;
- (void)workoutDataDestination:(id)destination didBeginActivity:(id)activity;
- (void)workoutDataDestination:(id)destination didEndActivity:(id)activity;
- (void)workoutDataDestination:(id)destination didInsertEvent:(id)event;
- (void)addQuantities:(id)quantities dataSource:(id)source;
- (void)addOtherSamples:(id)samples dataSource:(id)source;
- (void)addWorkoutEvents:(id)events dataSource:(id)source;
- (void)addMetadata:(id)metadata dataSource:(id)source;
- (void)updateWorkoutConfiguration:(id)configuration dataSource:(id)source;
- (void)didBeginActivity:(id)activity dataSource:(id)source;
- (void)didEndActivity:(id)activity dataSource:(id)source;
- (void)didSuggestActivity:(id)activity dataSource:(id)source;
@end

#endif /* HDGymKitDataSource_h */