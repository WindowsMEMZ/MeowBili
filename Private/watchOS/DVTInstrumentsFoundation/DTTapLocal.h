//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTTapLocal_h
#define DTTapLocal_h
@import Foundation;

#include "DTTap.h"
#include "DTTapLocalDelegate-Protocol.h"

@protocol OS_dispatch_source;

@interface DTTapLocal : DTTap {
  /* instance variables */
  NSObject<OS_dispatch_source> *_pollTimer;
  BOOL _validConfig;
}

@property (readonly, retain) NSObject<DTTapLocalDelegate> *delegate;

/* instance methods */
- (id)initWithConfig:(id)config memoHandler:(id)handler delegate:(id)delegate;
- (void)_start;
- (void)_stop;
- (void)_pause;
- (void)_unpause;
- (BOOL)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)reason;
- (void)_handleStatusMemo:(id)memo;
@end

#endif /* DTTapLocal_h */