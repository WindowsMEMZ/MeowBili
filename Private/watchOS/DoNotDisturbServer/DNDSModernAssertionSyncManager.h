//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSModernAssertionSyncManager_h
#define DNDSModernAssertionSyncManager_h
@import Foundation;

#include "DNDSAssertionSyncManager-Protocol.h"
#include "DNDSAssertionSyncManagerDataSource-Protocol.h"
#include "DNDSAssertionSyncManagerDelegate-Protocol.h"
#include "DNDSBackingStore-Protocol.h"
#include "DNDSClientDetailsProvider.h"
#include "DNDSKeybagStateObserver-Protocol.h"
#include "DNDSKeybagStateProviding-Protocol.h"
#include "DNDSModernAssertionSyncMetadataStore.h"
#include "DNDSSyncService-Protocol.h"
#include "DNDSSyncServiceDelegate-Protocol.h"
#include "DNDSSysdiagnoseDataProvider-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface DNDSModernAssertionSyncManager : NSObject<DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSKeybagStateObserver, DNDSAssertionSyncManager> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_fuzzTimer;
  NSObject<DNDSSyncService> *_localSyncService;
  NSObject<DNDSSyncService> *_cloudSyncService;
  DNDSClientDetailsProvider *_clientDetailsProvider;
  DNDSModernAssertionSyncMetadataStore *_metadata;
  NSObject<DNDSBackingStore> *_metadataBackingStore;
  NSObject<DNDSKeybagStateProviding> *_keybag;
  NSMutableSet *_timerQueuedDevices;
  BOOL _timerQueuedForceUpdate;
  unsigned long long _timerCurrentDelay;
  NSObject<OS_os_transaction> *_timerQueuedTransaction;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, @dynamic, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (weak, nonatomic) NSObject<DNDSAssertionSyncManagerDataSource> *dataSource;
@property (weak, nonatomic) NSObject<DNDSAssertionSyncManagerDelegate> *delegate;

/* instance methods */
- (id)initWithClientDetailsProvider:(id)provider localSyncService:(id)service cloudSyncService:(id)service keybag:(id)keybag;
- (void)dealloc;
- (void)resume;
- (void)keybagDidUnlockForTheFirstTime:(id)time;
- (void)updateForModeAssertionUpdateResult:(id)result;
- (void)updateDevices:(id)devices;
- (void)forceUpdateAllDevices;
- (void)updateDevices:(id)devices force:(BOOL)force shouldFuzz:(BOOL)fuzz;
- (void)_queue_updateDevices;
- (BOOL)syncService:(id)service shouldAcceptIncomingMessage:(id)message withVersionNumber:(unsigned long long)number messageType:(id)type fromDeviceIdentifier:(id)identifier;
- (void)syncService:(id)service didReceiveMessage:(id)message withVersionNumber:(unsigned long long)number messageType:(id)type fromDeviceIdentifier:(id)identifier;
- (void)syncService:(id)service didSendWithRequestIdentifier:(id)identifier withSuccess:(BOOL)success error:(id)error;
- (void)_queue_handleMessage:(id)message withVersionNumber:(unsigned long long)number fromDeviceIdentifier:(id)identifier;
- (void)_queue_sendStateSnapshotToPairedDevices:(id)devices force:(BOOL)force;
- (void)_queue_handleDidSendRequestIdentifier:(id)identifier withSuccess:(BOOL)success error:(id)error;
- (void)_loadMetadataFromBackingStore;
- (BOOL)_maintainMetadataBackingStore;
- (BOOL)_saveMetadataToBackingStore;
- (id)sysdiagnoseDataForDate:(id)date redacted:(BOOL)redacted;
@end

#endif /* DNDSModernAssertionSyncManager_h */