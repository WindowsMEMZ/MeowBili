//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSAssertion_h
#define BLSAssertion_h
@import Foundation;

#include "BLSAssertionAcquisitionObserver.h"
#include "BLSAssertionDescriptor.h"
#include "BLSAssertionIdentifier.h"
#include "BLSAssertionService-Protocol.h"
#include "BLSAssertionServiceResponding-Protocol.h"
#include "BSCancellable-Protocol.h"
#include "BSInvalidatable-Protocol.h"

@class NSArray, NSHashTable, NSString;

@interface BLSAssertion : NSObject<BLSAssertionServiceResponding, BSCancellable, BSInvalidatable> {
  /* instance variables */
  BLSAssertionAcquisitionObserver *_acquisitionObserver;
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_paused;
  BOOL _lock_invalidated;
  unsigned long long _lock_acquisitionState;
  unsigned long long _lock_acquiredMachContinuousTime;
}

@property (retain) NSObject<BLSAssertionService> *service;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, nonatomic) BOOL acquired;
@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BLSAssertionDescriptor *descriptor;
@property (retain, nonatomic) BLSAssertionIdentifier *identifier;
@property (readonly, nonatomic) unsigned long long acquisitionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)acquireWithExplanation:(id)explanation observer:(id)observer attributes:(id)attributes;
+ (void)setDefaultService:(id)service;

/* instance methods */
- (id)initWithExplanation:(id)explanation attributes:(id)attributes;
- (void)dealloc;
- (BOOL)isAcquired;
- (BOOL)isPaused;
- (BOOL)isActive;
- (void)acquireWithObserver:(id)observer;
- (void)acquireWithCompletion:(id /* block */)completion;
- (void)cancel;
- (void)invalidate;
- (void)restartTimeoutTimer;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)serviceDidAcquire;
- (void)serviceFailedToAcquireWithError:(id)error;
- (void)serviceDidPause;
- (void)serviceDidResume;
- (void)serviceWillCancel;
- (void)serviceDidCancelWithError:(id)error;
@end

#endif /* BLSAssertion_h */