//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneObserver_h
#define FBSceneObserver_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "FBSceneComponent-Protocol.h"
#include "FBSceneDelegate-Protocol.h"
#include "FBSceneObserver-Protocol.h"

@class NSString;

@interface FBSceneObserver : NSObject<BSDescriptionProviding, FBSceneObserver, FBSceneDelegate, FBSceneComponent> {
  /* instance variables */
  unsigned long long _observerAddress;
  Class _observerClass;
  BOOL _isDelegate;
  struct { BOOL contentStateDidChange; BOOL updatePrepared; BOOL updateApplied; BOOL updateCompleted; BOOL clientSettingsUpdated; BOOL didActivate; BOOL willDeactivateWithError; BOOL didInvalidate; BOOL clientDidConnect; BOOL handleActions; } _observerFlags;
  struct { BOOL willUpdateScene; BOOL didReceiveActions; BOOL didDeactivateWithError; } _delegateFlags;
  struct { BOOL willUpdateSettings; } _componentFlags;
}

@property (readonly, weak, nonatomic) NSObject<FBSceneObserver> *observer;
@property (readonly, weak, nonatomic) NSObject<FBSceneDelegate> *delegate;
@property (readonly, nonatomic) NSObject<FBSceneComponent> *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_initWithObserver:(id)observer;
- (id)initWithObserver:(id)observer;
- (id)initWithDelegate:(id)delegate;
- (id)initWithComponent:(id)component;
- (BOOL)isDelegate;
- (BOOL)delegateReceivesActions;
- (BOOL)observerHandlesActions;
- (BOOL)isEqual:(id)equal;
- (void)scene:(id)scene willUpdateSettings:(id)settings withTransitionContext:(id)context;
- (void)scene:(id)scene didReceiveActions:(id)actions;
- (void)sceneDidDeactivate:(id)deactivate withError:(id)error;
- (void)sceneContentStateDidChange:(id)change;
- (void)scene:(id)scene didPrepareUpdateWithContext:(id)context;
- (void)scene:(id)scene didApplyUpdateWithContext:(id)context;
- (void)scene:(id)scene didCompleteUpdateWithContext:(id)context error:(id)error;
- (void)sceneDidActivate:(id)activate;
- (void)sceneWillDeactivate:(id)deactivate withError:(id)error;
- (void)sceneDidInvalidate:(id)invalidate;
- (void)scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (void)scene:(id)scene clientDidConnect:(id)connect;
- (id)scene:(id)scene handleActions:(id)actions;
- (id)initWithScene:(id)scene;
- (void)invalidate;
- (void)configureInitialSettings:(id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* FBSceneObserver_h */