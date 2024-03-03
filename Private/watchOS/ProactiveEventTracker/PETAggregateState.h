//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETAggregateState_h
#define PETAggregateState_h
@import Foundation;

#include "PETAggregateStateStorage.h"

@interface PETAggregateState : NSObject {
  /* instance variables */
  PETAggregateStateStorage *_storage;
  struct { unsigned long long x[2] s; } _rng;
}

/* class methods */
+ (unsigned char)hashForString:(id)string;

/* instance methods */
- (id)init;
- (id)initWithStorage:(id)storage;
- (id)initInMemory;
- (id)initWithPath:(id)path;
- (void)incrementCounterBy:(double)by forKey:(const void *)key keyLength:(unsigned short)length;
- (void)updateCounterTo:(double)to forKey:(const void *)key keyLength:(unsigned short)length;
- (void)updateDistributionWithValue:(double)value forKey:(const void *)key keyLength:(unsigned short)length maxSampleSize:(unsigned short)size;
- (void)incrementCounterBy:(double)by forKey:(id)key;
- (void)updateCounterTo:(double)to forKey:(id)key;
- (void)updateDistributionWithValue:(double)value forKey:(id)key maxSampleSize:(unsigned short)size;
- (void)enumerateCounters:(id /* block */)counters distributions:(id /* block */)distributions;
- (void)reset;
- (void)enumerateAndResetCounters:(id /* block */)counters distributions:(id /* block */)distributions;
- (id)description;
- (BOOL)checkIntegrity;
@end

#endif /* PETAggregateState_h */