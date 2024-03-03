//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSSystemApertureLayoutMonitor_h
#define SBSSystemApertureLayoutMonitor_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class BSServiceConnection, NSArray, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

@interface SBSSystemApertureLayoutMonitor : NSObject<BSInvalidatable> {
  /* instance variables */
  BSServiceConnection *_connection;
  NSObject<OS_dispatch_queue> *_connectionQueue;
  NSPointerArray *_observers;
  NSArray *_frames;
  BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)invalidate;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)systemApertureLayoutDidChange:(id)change;
@end

#endif /* SBSSystemApertureLayoutMonitor_h */