//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSIDSSyncEngine_h
#define DNDSIDSSyncEngine_h
@import Foundation;

#include "DNDSIDSSyncEngineMetadataStoring-Protocol.h"
#include "DNDSIDSSyncEngineSynchronizing-Protocol.h"
#include "DNDSKeybagStateObserver-Protocol.h"
#include "DNDSKeybagStateProviding-Protocol.h"
#include "DNDSPairedDevice.h"
#include "DNDSSyncService-Protocol.h"
#include "DNDSSyncServiceDelegate-Protocol.h"
#include "DNDSSysdiagnoseDataProvider-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DNDSIDSSyncEngine : NSObject<DNDSSyncServiceDelegate, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, DNDSIDSSyncEngineSynchronizing> {
  /* instance variables */
  NSMapTable *_sourcesByZone;
  NSObject<DNDSSyncService> *_syncService;
  DNDSPairedDevice *_pairedDevice;
  unsigned long long _syncState;
  NSObject<DNDSIDSSyncEngineMetadataStoring> *_metadataStore;
  NSObject<DNDSKeybagStateProviding> *_keybag;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_retryTimer;
  NSObject<OS_dispatch_source> *_inflightExpirationTimer;
  unsigned long long _retriesAvailable;
  unsigned long long _inflightExpirationTime;
  NSMutableDictionary *_inflightMetadataByRequestIdentifier;
  NSMutableDictionary *_inflightDateByRequestIdentifier;
  NSMutableSet *_inflightMetadata;
  unsigned long long _role;
  id /* block */ _didReceiveUnlockMessage;
  id /* block */ _didFireMetadataExpirationTimer;
}

@property (readonly, nonatomic) unsigned long long pairSyncState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

/* instance methods */
- (id)initWithMetadataStore:(id)store syncService:(id)service keybag:(id)keybag;
- (id)initWithMetadataStore:(id)store syncService:(id)service keybag:(id)keybag role:(unsigned long long)role syncState:(unsigned long long)state inflightExpirationTime:(unsigned long long)time;
- (void)addRecordIDsToSave:(id)save recordIDsToDelete:(id)delete;
- (void)setDataSource:(id)source forZone:(id)zone;
- (void)setPairedDevice:(id)device syncEnabled:(BOOL)enabled;
- (void)setDidReceiveUnlockMessage:(id /* block */)message;
- (void)setDidFireMetadataExpirationTimer:(id /* block */)timer;
- (void)validate;
- (void)sync;
- (id)inflightMetadata;
- (void)syncService:(id)service didReceiveMessage:(id)message withVersionNumber:(unsigned long long)number messageType:(id)type fromDeviceIdentifier:(id)identifier;
- (BOOL)syncService:(id)service shouldAcceptIncomingMessage:(id)message withVersionNumber:(unsigned long long)number messageType:(id)type fromDeviceIdentifier:(id)identifier;
- (void)syncService:(id)service didSendWithRequestIdentifier:(id)identifier withSuccess:(BOOL)success error:(id)error;
- (void)keybagDidUnlockForTheFirstTime:(id)time;
- (id)sysdiagnoseDataForDate:(id)date redacted:(BOOL)redacted;
- (BOOL)_isTinkerWatch;
- (id)_queue_dataSourceForZone:(id)zone;
- (void)_queue_syncDataSourcesToDeviceWithIdentifier:(id)identifier;
- (void)_queue_sendAckWithMetadata:(id)metadata forAction:(id)action toDeviceWithIdentifier:(id)identifier;
- (void)_queue_sendUnlockMessageToDeviceWithIdentifier:(id)identifier;
- (void)_queue_sendResyncMessageToDeviceWithIdentifier:(id)identifier;
- (void)_queue_sendModifiedRecordIDs:(id)ids deletedRecordIDs:(id)ids toDeviceWithIdentifier:(id)identifier;
- (void)_queue_startRetryTimer;
- (void)_queue_resetRetryTimer;
- (BOOL)_queue_cancelRetryTimer;
- (double)_queue_earliestExpirationTimeSinceNowForInflightMetadata;
- (void)_queue_restartInflightExpirationTimer;
- (void)_queue_startInflightExpirationTimer;
- (BOOL)_queue_cancelInflightExpirationTimer;
- (void)_queue_removeAllInflightMetadata;
- (void)_queue_removeAllInflightMetadataWithExpirationDate:(id)date;
- (void)_queue_handleMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_handleResyncMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_handleAckMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_handleUnlockMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_handleUpdateMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_handleReplaceMessage:(id)message fromPairedDeviceIdentifier:(id)identifier;
- (void)_queue_validate;
@end

#endif /* DNDSIDSSyncEngine_h */