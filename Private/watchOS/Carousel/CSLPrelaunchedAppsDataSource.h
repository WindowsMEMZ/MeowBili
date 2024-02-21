//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPrelaunchedAppsDataSource_h
#define CSLPrelaunchedAppsDataSource_h
@import Foundation;

#include "BSTransactionObserver-Protocol.h"
#include "CSLPrelaunchAllowList.h"
#include "CSLPrelaunchAppObserver-Protocol.h"

@class CSLPRFConcurrentObserverStore, NSMutableSet, NSSet, NSString, RBSProcessMonitor;

@interface CSLPrelaunchedAppsDataSource : NSObject<BSTransactionObserver, CSLPrelaunchAppObserver> {
  /* instance variables */
  CSLPRFConcurrentObserverStore *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSSet *_currentPrelaunchedApps;
  NSMutableSet *_allPrelaunchedApps;
  RBSProcessMonitor *_processMonitor;
}

@property (readonly, weak, nonatomic) CSLPrelaunchAllowList *allowList;
@property (readonly, nonatomic) NSSet *prelaunchedApps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAllowList:(id)list;
- (id)initWithMonitor:(BOOL)monitor allowList:(id)list;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)_withLockIfNecessary:(id /* block */)necessary;
- (void)_assertLocked:(id /* block */)locked;
- (void)_app:(id)_app changedToTaskState:(unsigned char)state;
- (void)_lock_setPrelaunchedAppsIfNecessary:(id)necessary;
- (BOOL)hasBeenPrelaunched:(id)prelaunched;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)didPrelaunch:(id)prelaunch error:(id)error;
@end

#endif /* CSLPrelaunchedAppsDataSource_h */