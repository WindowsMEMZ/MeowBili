//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKNotifySubregistration_h
#define PKNotifySubregistration_h
@import Foundation;

#include "PKInvalidatable-Protocol.h"
#include "PKNotifyRegistration.h"

@class NSString;

@interface PKNotifySubregistration : NSObject<PKInvalidatable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  PKNotifyRegistration *_parent;
  id /* block */ _handler;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithParent:(id)parent handler:(id /* block */)handler;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidateFromParent:(BOOL)parent;
- (BOOL)isInvalidated;
- (void)invokeHandler;
@end

#endif /* PKNotifySubregistration_h */