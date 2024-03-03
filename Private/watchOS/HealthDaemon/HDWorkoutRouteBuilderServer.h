//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutRouteBuilderServer_h
#define HDWorkoutRouteBuilderServer_h
@import Foundation;

#include "HDSeriesBuilderServer.h"
#include "HKWorkoutRouteBuilderServerInterface-Protocol.h"

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer<HKWorkoutRouteBuilderServerInterface>

@property (retain, nonatomic) HKWorkoutRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;

/* instance methods */
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_insertRouteData:(id)data completion:(id /* block */)completion;
- (void)remote_finishRouteWithWorkout:(id)workout metadata:(id)metadata completion:(id /* block */)completion;
- (void)server_insertRouteData:(id)data completion:(id /* block */)completion;
- (id)seriesSample;
- (void)createSeriesSampleIfNeeded:(id /* block */)needed errorHandler:(id /* block */)handler;
- (void)queue_recoverBuilder;
@end

#endif /* HDWorkoutRouteBuilderServer_h */