//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWaitForSceneInterruptionTransaction_h
#define CSLWaitForSceneInterruptionTransaction_h
@import Foundation;

#include "BSTransaction.h"
#include "FBSceneObserver-Protocol.h"

@class BSAbsoluteMachTimer, FBScene, NSString;

@interface CSLWaitForSceneInterruptionTransaction : BSTransaction<FBSceneObserver> {
  /* instance variables */
  FBScene *_scene;
  double _timeout;
  BSAbsoluteMachTimer *_timer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene timeout:(double)timeout;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)sceneWillDeactivate:(id)deactivate withError:(id)error;
- (void)sceneDidInvalidate:(id)invalidate;
@end

#endif /* CSLWaitForSceneInterruptionTransaction_h */