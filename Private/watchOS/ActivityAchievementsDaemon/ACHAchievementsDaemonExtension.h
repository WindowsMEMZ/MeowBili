//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAchievementsDaemonExtension_h
#define ACHAchievementsDaemonExtension_h
@import Foundation;

#include "ACHMobileAssetProvider.h"
#include "HDCacheDeleteProvider-Protocol.h"
#include "HDHealthDaemonExtension-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"

@class NSString;

@interface ACHAchievementsDaemonExtension : NSObject<HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDCacheDeleteProvider> {
  /* instance variables */
  ACHMobileAssetProvider *_mobileAssetProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDaemon:(id)daemon mobileAssetProvider:(id)provider;
- (void)daemonReady:(id)ready;
- (long long)purgeableSpaceForUrgency:(int)urgency volume:(id)volume;
- (long long)purgeSpaceForUrgency:(int)urgency volume:(id)volume;
@end

#endif /* ACHAchievementsDaemonExtension_h */