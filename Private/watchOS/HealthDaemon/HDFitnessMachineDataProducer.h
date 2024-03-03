//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineDataProducer_h
#define HDFitnessMachineDataProducer_h
@import Foundation;

#include "HDEurotasData.h"
#include "HDProfile.h"
#include "HDWorkoutDataAccumulatorObserver-Protocol.h"
#include "_HDFTMProducerMetricTracker.h"

@class HKQuantity, NSString;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataProducer : NSObject<HDWorkoutDataAccumulatorObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  unsigned long long _sessionIdentifier;
  HKQuantity *_totalActiveEnergy;
  HKQuantity *_totalBasalEnergy;
  HKQuantity *_latestHeartRate;
  HKQuantity *_averageHeartRate;
  _HDFTMProducerMetricTracker *_heartRateTracker;
  BOOL _heartRateEnabled;
  HDEurotasData *_previousEurotasData;
  HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)dealloc;
- (void)attachHealthServiceSession:(unsigned long long)session;
- (void)sendInitialValues;
- (void)deliverFinalValuesAndDetachWithCompletion:(id /* block */)completion;
- (void)detachHealthServiceSession;
- (void)pauseCurrentSession;
- (void)resumeCurrentSession;
- (void)workoutDataAccumulator:(id)accumulator didUpdateStatistics:(id)statistics;
@end

#endif /* HDFitnessMachineDataProducer_h */