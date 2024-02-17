//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDialogPresentationManager_h
#define WFDialogPresentationManager_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "RBSAssertionObserving-Protocol.h"
#include "WFDialogAlertPresenter-Protocol.h"
#include "WFDialogAlertPresenterDelegate-Protocol.h"
#include "WFDialogNotificationManager.h"
#include "WFDialogXPCHostProtocol-Protocol.h"
#include "WFDialogXPCProtocol-Protocol.h"
#include "WFPresentedDialog.h"
#include "WFScreenOnObserverDelegate-Protocol.h"
#include "WFUIPresenterInterface-Protocol.h"
#include "WFWorkflowStatusHostProtocol-Protocol.h"
#include "WFWorkflowStatusPresenterDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, NSXPCListener, WFDialogAttribution, WFScreenOnObserver, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFDialogPresentationManagerDelegate;

@interface WFDialogPresentationManager : NSObject<NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate, WFWorkflowStatusHostProtocol, RBSAssertionObserving, WFUIPresenterInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSMutableSet *connectedRunners;
@property (readonly, nonatomic) NSObject<WFDialogAlertPresenter> *remoteAlertPresenter;
@property (retain, nonatomic) NSObject<WFDialogXPCProtocol> *connectedRemoteAlert;
@property (retain, nonatomic) WFPresentedDialog *presentedDialog;
@property (readonly, nonatomic) NSMutableArray *contentDismissalCompletionHandlers;
@property (retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext;
@property (retain, nonatomic) WFDialogAttribution *persistentRunningAttribution;
@property (readonly, nonatomic) NSMutableArray *persistentPresentationQueue;
@property (readonly, nonatomic) NSMutableArray *otherPresentationQueue;
@property (readonly, nonatomic) WFDialogNotificationManager *notificationManager;
@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (nonatomic) BOOL completePersistentModeAwaitingRemoteAlertReactivationSuccess;
@property (copy, nonatomic) id /* block */ completePersistentModeBlockAwaitingRemoteAlertReactivation;
@property (retain, nonatomic) NSString *dismissalReason;
@property (weak, nonatomic) NSObject<WFDialogPresentationManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationManager:(id)manager;
- (id)initWithListener:(id)listener notificationManager:(id)manager dialogAlertPresenter:(id)presenter screenOnObserver:(id)observer;
- (void)dealloc;
- (void)handleRemovedIgnoredNotifications:(id)notifications;
- (void)queue_connectedRemoteAlertDidDisconnect;
- (BOOL)queue_hasMoreDialogsToPresent;
- (BOOL)hasPersistentState;
- (void)showDialogRequest:(id)request runningContext:(id)context completionHandler:(id /* block */)handler;
- (void)dismissPresentedContentForRunningContext:(id)context completionHandler:(id /* block */)handler;
- (void)queue_presentNextDialog;
- (void)queue_deactivateRemoteAlertAndInvalidateConnection;
- (void)queue_clearPersistentModeStateIfNecessary;
- (void)activateRemoteAlert;
- (void)activateRemoteAlertTiedToBundleIdentifier:(id)identifier;
- (void)activateStatusPresenter;
- (void)postNotificationWithRequest:(id)request presentationMode:(unsigned long long)mode context:(id)context;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)beginConnection;
- (void)requestDismissalWithReason:(id)reason;
- (void)cancelWorkflow;
- (void)dialogAlertPresenter:(id)presenter didConnectToAlert:(id)alert;
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id)alert;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)alert;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)alert;
- (void)workflowStatusHostBeginConnection;
- (void)statusPresenterDidConnectToService:(id)service;
- (void)statusPresenterDidDisconnect;
- (void)acquireStatusPresenterAssertionIfNecessary;
- (void)assertion:(id)assertion didInvalidateWithError:(id)error;
- (BOOL)shouldShowStatus;
- (void)beginPersistentModeWithRunningContext:(id)context attribution:(id)attribution completionHandler:(id /* block */)handler;
- (void)completePersistentModeWithSuccess:(id)success runningContext:(id)context completion:(id /* block */)completion;
- (void)dismissPersistentChromeInDialog:(id)dialog success:(BOOL)success customAttribution:(id)attribution completionHandler:(id /* block */)handler;
- (void)screenOnStateDidChange:(id)change;
- (void)trackSuspendShortcutWithPresentedDialog:(id)dialog;
- (void)logStartDialogPresentationWithRequest:(id)request presentationMode:(unsigned long long)mode;
- (void)logFinishDialogPresentationWithPresentedDialog:(id)dialog;
- (void)logFinishDialogPresentationWithRequest:(id)request presentationMode:(unsigned long long)mode automationType:(id)type;
- (void)trackDialogEventWithKey:(id)key request:(id)request presentationMode:(unsigned long long)mode automationType:(id)type;
@end

#endif /* WFDialogPresentationManager_h */