//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVPlaybackLeaseResponse_h
#define SSVPlaybackLeaseResponse_h
@import Foundation;

#include "SSVPlaybackResponse.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse<NSCopying> {
  /* instance variables */
  unsigned long long _kdMovieIdentifier;
}

@property (readonly, nonatomic) BOOL offlineSlotAvailable;
@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (copy, nonatomic) NSData *certificateData;
@property (nonatomic) unsigned long long KDMovieIdentifier;
@property (readonly, nonatomic) double leaseDuration;

/* instance methods */
- (id)itemForItemIdentifier:(id)identifier;
- (BOOL)isOfflineSlotAvailable;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SSVPlaybackLeaseResponse_h */