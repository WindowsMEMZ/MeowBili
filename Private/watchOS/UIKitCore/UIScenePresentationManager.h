//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScenePresentationManager_h
#define UIScenePresentationManager_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "FBSceneObserver-Protocol.h"
#include "UIScenePresentationContext.h"
#include "_UISceneKeyboardProxyLayerForwardingPresentationScene.h"
#include "_UIScenePresenterOwner.h"
#include "_UIScenePresenterOwnerDelegate-Protocol.h"

@class FBScene, NSMapTable, NSString;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject<BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {
  /* instance variables */
  _UISceneKeyboardProxyLayerForwardingPresentationScene *_keyboardProxyPresentationEnvironment;
  _UIScenePresenterOwner *_scenePresenterOwner;
  NSMapTable *_mapLayersToPresenterOwners;
  UIScenePresentationContext *_defaultScenePresentationContext;
  struct { BOOL defaultPriorityBand; } _delegateFlags;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) NSObject<UIScenePresentationManagerDelegate> *delegate;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sceneHostingGraph;

/* instance methods */
- (id)init;
- (id)_initWithScene:(id)scene;
- (id)_initWithScene:(id)scene keyboardProxyLayerManager:(id)manager keyboardProxyPresentationEnvironment:(id)environment;
- (void)modifyDefaultPresentationContext:(id /* block */)context;
- (BOOL)isInvalidated;
- (id)createPresenterWithIdentifier:(id)identifier;
- (id)createPresenterWithIdentifier:(id)identifier priority:(long long)priority;
- (id)createPresenterForLayerTarget:(id)target identifier:(id)identifier;
- (id)createPresenterForLayerTarget:(id)target identifier:(id)identifier priority:(long long)priority;
- (id)snapshotContext;
- (id)snapshotPresentationForSnapshot:(id)snapshot;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)owner:(id)owner willPrioritizePresenter:(id)presenter deactivatePresenter:(id)presenter;
- (void)ownerDidInvalidateLastPresenter:(id)presenter;
- (void)sceneContentStateDidChange:(id)change;
- (void)sceneDidInvalidate:(id)invalidate;
- (id)_presenterWithIdentifier:(id)identifier;
- (long long)_defaultPresentationPriority;
- (BOOL)_hasPresenterWithIdentifier:(id)identifier;
@end

#endif /* UIScenePresentationManager_h */