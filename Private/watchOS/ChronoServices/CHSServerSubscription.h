//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSServerSubscription_h
#define CHSServerSubscription_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class NSHashTable, NSObject, NSString;

@interface CHSServerSubscription : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject *_lock_cachedValue;
  NSHashTable *_lock_localSubscriptions;
  NSObject<BSInvalidatable> *_lock_serverSubscription;
  id /* block */ _lock_subscriptionBlock;
}

@property (retain, nonatomic) NSObject *cachedValue;
@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier serverSubscriptionBlock:(id /* block */)block;
- (id)subscribeWithResult:(id *)result error:(id *)error;
- (void)noteConnectionTerminated;
- (BOOL)resubscribeIfNecessary;
- (BOOL)_lock_createServerSubscriptionIfNecessary:(id *)necessary;
@end

#endif /* CHSServerSubscription_h */