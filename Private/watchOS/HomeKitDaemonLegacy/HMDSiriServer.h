//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSiriServer_h
#define HMDSiriServer_h
@import Foundation;

#include "HMDDataStreamBulkSendListener-Protocol.h"
#include "HMDNotificationRegistration.h"
#include "HMDSiriAccessoryMonitor.h"
#include "HMDSiriAccessoryMonitorDelegate-Protocol.h"
#include "HMDSiriRemoteInputServer.h"
#include "HMDSiriSession.h"
#include "HMFLogging-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface HMDSiriServer : NSObject<HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *audioWorkloop;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer;
@property (retain, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor;
@property (retain, nonatomic) HMDSiriSession *siriUISession;
@property (nonatomic) unsigned int targetControlIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSiriServer;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (void)setTargetableAccessory:(id)accessory withControllers:(id)controllers;
- (void)registerForMessages;
- (void)handleAccessoryHasBulkSendDataStream:(id)stream;
- (void)handleAccessoryConfigured:(id)configured;
- (void)handleAccessoryUnconfigured:(id)unconfigured;
- (void)handleAccessoryRemoved:(id)removed;
- (void)_handleDisconnectForAccessory:(id)accessory;
- (void)_setupSiriPlugin;
- (void)_maybeTearDownSiriPlugin;
- (void)_setupSiriUIContext;
- (void)_tearDownSiriUIContext;
- (void)_checkSiriSupportByAccessory:(id)accessory;
- (BOOL)_isSiriInputType:(long long)type supportedOnAccessory:(id)accessory siriAudioConfiguration:(id)configuration;
- (id)_getBestAudioCodecConfiguration:(id)configuration;
- (BOOL)_isAudioCodecSupported:(id)supported;
- (void)_removeDataStreamListenerForAccessory:(id)accessory;
- (id)_getSiriSessionForAccessory:(id)accessory;
- (void)monitor:(id)monitor needsSiriCapabilityForAccessory:(id)accessory;
- (void)monitor:(id)monitor willAllowAccessoryForDragonSiri:(id)siri;
- (void)monitor:(id)monitor willNotAllowAccessoryForDragonSiri:(id)siri;
- (void)monitorHasNoAccessoriesForDragonSiri:(id)siri;
- (void)accessory:(id)accessory didReceiveBulkSessionCandidate:(id)candidate;
- (void)accessoryDidStartListening:(id)listening;
- (void)accessory:(id)accessory didCloseDataStreamWithError:(id)error;
@end

#endif /* HMDSiriServer_h */