//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFRemoteAutoFillService_h
#define SFRemoteAutoFillService_h
@import Foundation;

#include "SFDeviceDiscovery.h"
#include "SFService.h"
#include "SFSession.h"

@class CUSystemMonitor, NSArray, NSData, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillService : NSObject {
  /* instance variables */
  BOOL _activateCalled;
  id /* block */ _activateCompletion;
  SFDeviceDiscovery *_discovery;
  int _discoveryState;
  NSMutableDictionary *_devices;
  BOOL _invalidateCalled;
  NSString *_receivedPassword;
  NSString *_receivedUsername;
  BOOL _requestingAutoFill;
  SFService *_service;
  int _serviceState;
  SFSession *_session;
  NSData *_systemBTAddress;
  CUSystemMonitor *_systemMonitor;
  int _systemMonitorState;
  NSURL *_urlForVisualScanning;
}

@property (readonly, nonatomic) BOOL needsSetup;
@property (nonatomic) BOOL unitTesting;
@property (copy, nonatomic) NSData *appIconData;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSString *unlocalizedAppName;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ receivedCredentialsHandler;
@property (copy, nonatomic) id /* block */ sessionStartedHandler;
@property (copy, nonatomic) id /* block */ sessionEndedHandler;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (readonly, nonatomic) unsigned long long discoveredDevices;
@property (copy, nonatomic) id /* block */ discoveredDevicesChanged;
@property (copy, nonatomic) id /* block */ urlForVisualScanningChanged;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)_activated;
- (void)invalidate;
- (void)startRequestingAutoFill;
- (void)stopRequestingAutoFill;
- (id)urlForVisualScanning;
- (void)updateURLForVisualScanning;
- (void)_completedWithError:(id)error;
- (int)_readyForAutoFillRequest;
- (void)_discoveryStart;
- (void)_discoveryFound:(id)found;
- (void)_discoveryLost:(id)lost;
- (void)_discoveryChanged:(id)changed;
- (void)_serviceStart;
- (void)_serviceHandleReceivedContextRequest:(id)request handler:(id /* block */)handler;
- (void)_serviceHandleReceivedCredentialRequest:(id)request handler:(id /* block */)handler;
- (void)_serviceHandleReceivedRequest:(id)request handler:(id /* block */)handler;
- (void)_serviceHidePIN;
- (void)_serviceSessionEnded:(id)ended withError:(id)error;
- (void)_serviceSessionStarted:(id)started;
- (void)_systemMonitorStart;
- (void)_bluetoothAddressChanged;
@end

#endif /* SFRemoteAutoFillService_h */