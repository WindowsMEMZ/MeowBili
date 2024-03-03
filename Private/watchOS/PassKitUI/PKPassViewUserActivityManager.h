//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassViewUserActivityManager_h
#define PKPassViewUserActivityManager_h
@import Foundation;

#include "PKForegroundActiveArbiterObserver-Protocol.h"

@class NSString, NSUserActivity;
@protocol OS_dispatch_queue;

@interface PKPassViewUserActivityManager : NSObject<PKForegroundActiveArbiterObserver> {
  /* instance variables */
  NSUserActivity *_currentUserActivity;
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _isForegroundActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)startedViewingPass:(id)pass;
- (void)endedViewingPass;
- (void)foregroundActiveArbiter:(id)arbiter didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })state;
- (void)_endedViewingPass;
- (id)_currentUserActivityPassUniqueID;
- (BOOL)_shouldDonateActivity:(id)activity;
- (id)_displayNameForPass:(id)pass;
- (id)_templateNameForPass:(id)pass;
@end

#endif /* PKPassViewUserActivityManager_h */