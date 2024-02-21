//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUISceneBulletinClientFactory_h
#define WNUISceneBulletinClientFactory_h
@import Foundation;

#include "CUISBulletinClientFactory.h"
#include "BSDescriptionProviding-Protocol.h"
#include "BSInvalidatable-Protocol.h"
#include "CUISBulletinClientFactoryExtension-Protocol.h"
#include "CUISBulletinQuickLongLookDelegate-Protocol.h"
#include "FBSceneDelegate-Protocol.h"
#include "WNUIContentSwitcherViewController.h"
#include "WNUINotificationSceneEventDeferralPolicy.h"
#include "WNUINotificationScenePolicy-Protocol.h"
#include "WNUISceneNotificationTransactionFactory.h"
#include "WNUISceneNotificationTransactionFactoryDataProvider-Protocol.h"
#include "WNUIScenePresenterViewController.h"
#include "WNUISceneStateMachine.h"
#include "WNUISceneStateMachineDelegate-Protocol.h"

@class CUISAlertPresentationPolicy, NSArray, NSDictionary, NSString;

@interface WNUISceneBulletinClientFactory : CUISBulletinClientFactory<BSDescriptionProviding, WNUISceneStateMachineDelegate, FBSceneDelegate, WNUISceneNotificationTransactionFactoryDataProvider, CUISBulletinClientFactoryExtension>

@property (retain, nonatomic) WNUISceneStateMachine *sceneStateMachine;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) WNUIContentSwitcherViewController *contentSwitcherViewController;
@property (retain, nonatomic) WNUIScenePresenterViewController *sceneContainerViewController;
@property (retain, nonatomic) WNUISceneNotificationTransactionFactory *sceneNotificationTransactionFactory;
@property (readonly) BOOL isSceneNotificationTransactionFactoryLoaded;
@property (retain, nonatomic) NSObject<BSInvalidatable> *focusDeferral;
@property (nonatomic) BOOL contentWasEverLive;
@property (readonly) NSObject<CUISBulletinQuickLongLookDelegate> *quickLongLookDelegate;
@property (readonly, nonatomic) WNUINotificationSceneEventDeferralPolicy *deferralPolicy;
@property (retain, nonatomic) NSDictionary *customPrimaryPresentationInfo;
@property (retain, nonatomic) NSObject<WNUINotificationScenePolicy> *scenePolicy;
@property (readonly, nonatomic) NSDictionary *customInfo;
@property (retain, nonatomic) CUISAlertPresentationPolicy *presentationPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *notifications;
@property (readonly) NSString *applicationBundleIdentifier;
@property (readonly) NSDictionary *contextObject;
@property (readonly) BOOL shouldRespectSystemSafeAreaInsets;

/* instance methods */
- (id)initWithBulletins:(id)bulletins scenePolicy:(id)policy;
- (unsigned long long)requestedDefaultActionMenu;
- (id)translateApplicationBundleID:(id)id;
- (void)dealloc;
- (id)createStateMachine;
- (void)requestSceneCreation;
- (void)presentSnapshotIfAvailable;
- (void)switchToViewController:(id)controller animated:(BOOL)animated;
- (BOOL)_checkIfNotificationSupportsModernUI;
- (id)createSceneNotificationTransactionFactory;
- (id)createScenePresenterViewController;
- (void)sendNotification:(id)notification withSoundPolicy:(unsigned long long)policy;
- (void)requestPrimaryPagePresentation;
- (void)sendPrimaryPagePresentation:(id)presentation;
- (void)fallbackPrimaryPagePresentationWithError:(id)error;
- (void)sceneReadyToSnapshotWithViewController:(id)controller;
- (void)takeSnapshot;
- (void)addNotification:(id)notification withSoundPolicy:(unsigned long long)policy;
- (BOOL)shouldDismissExistingPresentationWithModifiedBulletin:(id)bulletin;
- (void)updateNotification:(id)notification withSoundPolicy:(unsigned long long)policy;
- (BOOL)alwaysReturnPrimaryPagePresentationAsynchronously;
- (void)primaryPagePresentationWithCompletion:(id /* block */)completion;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)sceneStateMachine:(id)machine didCreateSceneView:(id)view;
- (void)sceneStateMachine:(id)machine sceneResized:(id)resized;
- (void)sceneStateMachine:(id)machine readyToSnapshotScene:(id)scene;
- (void)sceneStateMachine:(id)machine sceneInvalidatedWithError:(id)error;
- (void)sceneStateMachine:(id)machine sceneCreationFailedWithError:(id)error;
- (void)sceneStateMachine:(id)machine didReceiveCustomPresentationInfo:(id)info;
- (void)sceneStateMachine:(id)machine didReceiveViewControllerSupportsBannerLook:(BOOL)look;
- (void)sceneDidInvalidate:(id)invalidate;
- (void)scene:(id)scene didReceiveActions:(id)actions;
- (void)performQuickLookTapAction:(id)action;
- (void)performIconTapAction:(id)action;
- (void)performTimeAction:(id)action;
- (void)performNotificationAction:(id)action;
- (void)performAudioFeedbackAction:(id)action;
- (void)performSoftDismiss;
@end

#endif /* WNUISceneBulletinClientFactory_h */