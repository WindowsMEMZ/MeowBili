//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDGymKitMetricsDataSource_h
#define HDGymKitMetricsDataSource_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDMetricsCollectorObserver-Protocol.h"
#include "HDWorkoutDataSource-Protocol.h"
#include "HKDataFlowLinkProcessor-Protocol.h"
#include "HKGymKitDataSourceServerInterface-Protocol.h"

@class HKDataFlowLink, NSLock, NSMutableDictionary, NSString, NSUUID;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer<HKGymKitDataSourceServerInterface, HDMetricsCollectorObserver, HKDataFlowLinkProcessor, HDWorkoutDataSource> {
  /* instance variables */
  NSLock *_lock;
  NSMutableDictionary *_accumulatedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)dealloc;
- (void)workoutDataDestination:(id)destination requestsDataFrom:(id)from to:(id)to;
- (void)workoutDataDestination:(id)destination didChangeFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)workoutDataDestination:(id)destination requestsFinalDataFrom:(id)from to:(id)to completion:(id /* block */)completion;
- (void)workoutDataDestination:(id)destination didUpdateConfiguration:(id)configuration;
- (void)workoutDataDestination:(id)destination didBeginActivity:(id)activity;
- (void)workoutDataDestination:(id)destination didEndActivity:(id)activity;
- (void)workoutDataDestination:(id)destination didInsertEvent:(id)event;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_startTaskServerIfNeeded;
- (void)metricsCollector:(id)collector didCollectMetrics:(id)metrics;
- (void)_startObservingMetrics;
@end

#endif /* HDGymKitMetricsDataSource_h */