//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAwardsWorkoutClient_h
#define ACHAwardsWorkoutClient_h
@import Foundation;

#include "_HKXPCExportable-Protocol.h"

@class HKTaskServerProxyProvider, NSString, NSUUID;

@interface ACHAwardsWorkoutClient : NSObject<_HKXPCExportable>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)workoutsInDateInterval:(id)interval error:(id *)error;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)duration containedInInterval:(id)interval error:(id *)error;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration withType:(unsigned long long)type endingOnOrBeforeDate:(id)date error:(id *)error;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration containedInInterval:(id)interval error:(id *)error;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration withType:(unsigned long long)type andLocation:(unsigned long long)location containedInInterval:(id)interval error:(id *)error;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date error:(id *)error;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date error:(id *)error;
- (id)mindfulMinutesForForDateInterval:(id)interval error:(id *)error;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)connectionInvalidated;
@end

#endif /* ACHAwardsWorkoutClient_h */