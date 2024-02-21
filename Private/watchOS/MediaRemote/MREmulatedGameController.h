//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MREmulatedGameController_h
#define MREmulatedGameController_h
@import Foundation;

#include "MRGameControllerDaemonProxy.h"

@class GCController;
@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject {
  /* instance variables */
  MRGameControllerDaemonProxy *_remote;
}

@property (retain, nonatomic) GCController *controller;
@property (readonly, nonatomic) int profile;
@property (nonatomic) double buttonAUpDelay;
@property (weak, nonatomic) NSObject<MREmulatedGameControllerDelegate> *delegate;

/* instance methods */
- (id)initWithProperties:(id)properties;
- (void)dealloc;
- (void)sendGameControllerEvent:(id)event;
- (void)_handleGameControllerDidChange:(id)change;
@end

#endif /* MREmulatedGameController_h */