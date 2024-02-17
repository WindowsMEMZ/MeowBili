//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef RTTController_h
#define RTTController_h
@import Foundation;

#include "RTTCallDelegate-Protocol.h"
#include "TUCallCapabilitiesDelegate-Protocol.h"

@class AXDispatchTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol HCHeardControllerProtocol, OS_dispatch_queue;

@interface RTTController : NSObject<RTTCallDelegate, TUCallCapabilitiesDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workerQueue;
  NSMutableDictionary *_localSettingsCache;
  AXDispatchTimer *_preferredRelayCoalescer;
  AXDispatchTimer *_callUpdateCoalescer;
}

@property (retain, nonatomic) NSMutableArray *rttCalls;
@property (weak, nonatomic) NSObject<HCHeardControllerProtocol> *delegate;
@property (copy, nonatomic) id /* block */ serverInvalidateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedController;

/* instance methods */
- (id)init;
- (void)_requestNotificationAuthorizationIfNecessary;
- (void)_requestNotificationAuthorization;
- (void)_handlePreferredRelayNumberUpdate;
- (BOOL)invalidateServerCaches:(id)caches;
- (void)didChangeTelephonyCallingSupport;
- (void)callDidConnect:(id)connect;
- (void)_refreshCurrentCallList;
- (void)_refreshCurrentCallListWithExistingCalls:(id)calls;
- (void)handleUpdatedCalls:(id)calls;
- (id)_callForUUIDWithoutRefresh:(id)refresh;
- (id)callForUUID:(id)uuid;
- (void)dismissRTTFirstUseAlert;
- (void)displayRTTFirstUseAlert;
- (void)dealloc;
- (void)clientRemoved:(id)removed;
- (id)handleMediaAction:(id)action;
- (id)handleDatabaseRequest:(id)request;
- (id)handleDictionaryRequest:(id)request;
- (id)handleSettingsRequest:(id)request;
- (id)displayCallPrompt:(id)prompt;
- (id)handleIncomingNotificationSuppressionChange:(id)change;
- (id)handleRTTVoicemailMessage:(id)message;
- (void)ttyCall:(id)call didReceiveString:(id)string forUtterance:(id)utterance;
- (void)ttyCall:(id)call didSendRemoteString:(id)string forUtterance:(id)utterance;
- (void)ttyCall:(id)call setVisible:(BOOL)visible serviceUpdate:(id)update;
@end

#endif /* RTTController_h */