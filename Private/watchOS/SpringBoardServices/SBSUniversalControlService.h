//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSUniversalControlService_h
#define SBSUniversalControlService_h
@import Foundation;

#include "SBSUniversalControlServerToClientInterface-Protocol.h"

@class BSCompoundAssertion, BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface SBSUniversalControlService : NSObject<SBSUniversalControlServerToClientInterface> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
  BSCompoundAssertion *_disableKeyboardFocusAssertion;
  BSCompoundAssertion *_screenEdgeOwnershipAssertion;
  BSServiceConnection *_serverConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)new;

/* instance methods */
- (id)init;
- (id)disableKeyboardFocusOnCurrentDeviceForReason:(id)reason;
- (id)acquireScreenEdgeOwnershipForPointerEvents:(unsigned long long)events forReason:(id)reason;
@end

#endif /* SBSUniversalControlService_h */