//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFDeviceSetupServiceiOS_h
#define SFDeviceSetupServiceiOS_h
@import Foundation;

#include "SFClient.h"
#include "SFService.h"
#include "SFSession.h"

@class NSData, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupServiceiOS : NSObject {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _advertiseFast;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  NSUUID *_peer;
  BOOL _pinShowing;
  SFClient *_preventExitForLocaleClient;
  NSData *_resumeAuthTag;
  NSString *_resumePassword;
  int _resumeState;
  SFService *_sfService;
  BOOL _sfServiceActivated;
  SFSession *_sfSession;
  BOOL _suspendPending;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ progressHandlerEx;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (void)activate;
- (void)invalidate;
- (void)_invalidated;
- (void)_completed:(int)_completed;
- (void)_run;
- (int)_runResumeIfNeeded;
- (void)_sfServiceStart;
- (void)_receivedObject:(id)object flags:(unsigned int)flags;
- (void)sendObject:(id)object;
- (void)sendSetupAction:(unsigned int)action info:(id)info responseHandler:(id /* block */)handler;
- (void)_handleSessionStarted:(id)started;
- (void)_handleSessionEnded:(id)ended;
- (void)_handleSessionSecured:(id)secured;
- (void)_handleConfigRequestReceived:(id)received;
- (void)_handleAppEventReceived:(id)received;
- (void)_handleSetupActionRequest:(id)request responseHandler:(id /* block */)handler;
- (void)_handleSetupActionSuspend;
- (void)_handleSetupActionResume;
@end

#endif /* SFDeviceSetupServiceiOS_h */