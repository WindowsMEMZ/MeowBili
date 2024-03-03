//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCNotificationSuppressionStore_h
#define FCCNotificationSuppressionStore_h
@import Foundation;

#include "FCCDateProvider.h"

@interface FCCNotificationSuppressionStore : NSObject {
  /* instance variables */
  FCCDateProvider *_dateProvider;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

/* instance methods */
- (id)init;
- (id)initWithDateProvider:(id)provider;
- (void)addNotificationSuppressionRequest:(id)request;
- (void)removeNotificationSuppressionRequest:(id)request;
- (id)allRequests;
- (BOOL)notificationsSuppressed;
- (BOOL)lastNotifiedSuppressionState;
- (void)setLastNotifiedSuppressionState:(BOOL)state;
- (id)_requestsMap;
- (void)_updateStoredRequests:(id)requests;
- (id)_userDefaults;
@end

#endif /* FCCNotificationSuppressionStore_h */