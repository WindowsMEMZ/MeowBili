//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSetupSingleAccessoryPairingController_h
#define HFSetupSingleAccessoryPairingController_h
@import Foundation;

#include "HFDiscoveredAccessory.h"
#include "HFHomeObserver-Protocol.h"
#include "HFSetupAccessoryResult.h"
#include "HFSetupPairingContext.h"
#include "HFSetupPairingController-Protocol.h"

@class HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString;

@interface HFSetupSingleAccessoryPairingController : NSObject<HFHomeObserver, HFSetupPairingController>

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NAFuture *pairingFuture;
@property (retain, nonatomic) NSDate *phaseStartDate;
@property (nonatomic) BOOL accessoryRequiresCode;
@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;

/* class methods */
+ (BOOL)supportsSetupPayloadRetry;

/* instance methods */
- (id)initWithContext:(id)context discoveredAccessory:(id)accessory;
- (void)addPairingObserver:(id)observer;
- (void)removePairingObserver:(id)observer;
- (void)startWithHome:(id)home;
- (id)cancel;
- (void)_tryPairing;
- (void)_updateStatusTextAndNotifyDelegate:(BOOL)delegate;
- (void)home:(id)home didAddAccessory:(id)accessory;
- (void)_finishPairingWithAccessories:(id)accessories completedInfo:(id)info;
- (void)_failPairingWithDiscoveredAccessory:(id)accessory error:(id)error;
- (void)_assertValidTransitionFromPhase:(unsigned long long)phase toPhase:(unsigned long long)phase;
@end

#endif /* HFSetupSingleAccessoryPairingController_h */