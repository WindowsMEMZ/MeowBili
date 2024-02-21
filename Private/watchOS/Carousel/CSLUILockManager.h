//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUILockManager_h
#define CSLUILockManager_h
@import Foundation;

#include "BLSHBacklightHostObserving-Protocol.h"
#include "CSLLockStateObserver-Protocol.h"
#include "CarouselStartupObserver-Protocol.h"

@class NSString;

@interface CSLUILockManager : NSObject<BLSHBacklightHostObserving, CSLLockStateObserver, CarouselStartupObserver>

@property (readonly) BOOL isUILocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

/* instance methods */
- (void)_sendUILockStateChanged;
- (void)lockUIForReason:(unsigned int)reason;
- (void)_finishUIUnlock;
- (void)deviceLockStateDidChange:(BOOL)change;
- (void)backlightHost:(id)host willTransitionToState:(long long)state forEvent:(id)event;
- (void)backlight:(id)backlight didCompleteUpdateToState:(long long)state forEvent:(id)event;
- (void)carouselUIStarted;
- (id)init;
- (void)dealloc;
@end

#endif /* CSLUILockManager_h */