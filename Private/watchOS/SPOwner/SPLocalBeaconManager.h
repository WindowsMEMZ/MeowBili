//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPLocalBeaconManager_h
#define SPLocalBeaconManager_h
@import Foundation;

#include "SPBLEStateMonitor.h"
#include "SPBLEStateMonitorDelegate-Protocol.h"
#include "SPLocalBeaconManagerXPCProtocol-Protocol.h"
#include "SPMonitorsWrapper.h"
#include "SPMonitorsWrapperDelegate-Protocol.h"

@class FMXPCActivity, FMXPCServiceDescription, FMXPCSession, NSData, NSDate, NSDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPLocalBeaconManager : NSObject<SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate>

@property (retain, nonatomic) FMXPCServiceDescription *spdServiceDescription;
@property (retain, nonatomic) FMXPCServiceDescription *findMyBeaconingDaemonServiceDescription;
@property (retain, nonatomic) FMXPCSession *spdSession;
@property (retain, nonatomic) FMXPCSession *findMyBeaconDaemonSession;
@property (retain, nonatomic) NSObject<SPLocalBeaconManagerXPCProtocol> *searchPartyDaemonProxy;
@property (retain, nonatomic) NSObject<SPLocalBeaconManagerXPCProtocol> *findMyBeaconDaemonProxy;
@property (retain, nonatomic) NSObject<SPLocalBeaconManagerXPCProtocol> *userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCActivity *periodicActionXpcActivity;
@property (nonatomic) BOOL schedulePeriodicActionXpcActivity;
@property (nonatomic) double periodicActionXpcActivityInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer;
@property (retain, nonatomic) SPMonitorsWrapper *monitorWrapper;
@property (retain, nonatomic) SPBLEStateMonitor *bleMonitor;
@property (nonatomic) BOOL currentBeaconingState;
@property (nonatomic) BOOL forceBeaconingOff;
@property (nonatomic) unsigned char currentStatus;
@property (nonatomic) long long cachedLocalBeaconManagerState;
@property (nonatomic) BOOL initialStateChangeSent;
@property (nonatomic) BOOL beaconFromNVRAM;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (copy, nonatomic) NSUUID *selfBeaconingUUID;
@property (nonatomic) unsigned long long selfBeaconingIndex;
@property (copy, nonatomic) NSDate *selfBeaconingPairDate;
@property (copy, nonatomic) NSData *selfBeaconingDerivedSharedSecretKey;
@property (copy, nonatomic) NSData *selfBeaconingPublicKey;
@property (copy, nonatomic) NSDictionary *selfBeaconingConfigurations;
@property (nonatomic) BOOL alreadyPoisonedLocalBeacon;
@property (copy, nonatomic) id /* block */ stateChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ statusChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ beaconingKeyChangedBlockWithCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)scheduleDateInterval:(id)interval;

/* instance methods */
- (unsigned long long)bucketWithBaseTime:(id)time date:(id)date;
- (id)dateIntervalForIndex:(unsigned long long)index baseDate:(id)date;
- (void)generateBeaconingKeysOfType:(long long)type now:(id)now withCompletion:(id /* block */)completion;
- (id)generateOfflineAdvertisingKeysForReason:(long long)reason now:(id)now;
- (id)init;
- (void)dealloc;
- (id)searchPartyUserAgentProxy;
- (id)remoteInterface;
- (id)rawNVRAMData;
- (void)localActivationLockInfoChanged;
- (void)updateStateFromNVRAM;
- (void)start;
- (void)beaconingStateChangedNotification:(id)notification;
- (void)beaconsChanged:(id)changed;
- (void)beaconingStateChanged:(long long)changed;
- (void)notifyStateChange:(BOOL)change;
- (void)notifyStatusChange:(unsigned char)change;
- (void)_invalidate;
- (void)invalidate;
- (void)handlerForActivity:(id)activity state:(long long)state;
- (id)xpcActivityCriteria:(id)criteria;
- (double)timeIntervalToNextFireDateFromDate:(id)date;
- (void)setPeriodicActionDispatchTimerWithInterval:(double)interval;
- (void)timerFired;
- (void)periodicActionWithCompletion:(id /* block */)completion;
- (void)notifyBeaconingKeysChangedBlockWithCompletion:(id /* block */)completion;
- (void)notifyNearbyTokensChangedBlockWithCompletion:(id /* block */)completion;
- (void)refreshBeaconingState;
- (BOOL)isBeaconing;
- (void)stateDidChange:(BOOL)change powerState:(unsigned long long)state;
- (void)bleMonitor:(id)monitor didChangeState:(unsigned long long)state;
@end

#endif /* SPLocalBeaconManager_h */