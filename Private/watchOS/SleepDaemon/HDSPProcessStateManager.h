//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPProcessStateManager_h
#define HDSPProcessStateManager_h
@import Foundation;

#include "HDSPProcessStateManagerDelegate-Protocol.h"

@class NSMutableSet, RBSProcessMonitor;

@interface HDSPProcessStateManager : NSObject {
  /* instance variables */
  RBSProcessMonitor *_processStateMonitor;
  NSMutableSet *_processIdentifiers;
  id /* block */ _processStateProvider;
}

@property (weak, nonatomic) NSObject<HDSPProcessStateManagerDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithProcessStateProvider:(id /* block */)provider;
- (BOOL)isProcessSuspended:(int)suspended;
- (void)startMonitoringProcessState:(int)state;
- (void)stopMonitoringProcessState:(int)state;
- (void)_updateConfiguration;
- (void)_process:(id)_process didUpdateFromState:(id)state toState:(id)state;
- (void)dealloc;
@end

#endif /* HDSPProcessStateManager_h */