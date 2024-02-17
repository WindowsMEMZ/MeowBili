//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKPlayActivityDecorateVODOperation_h
#define WLKPlayActivityDecorateVODOperation_h
@import Foundation;

#include "WLKUTSNetworkRequestOperation.h"

@class NSArray, NSDictionary, NSString;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {
  /* instance variables */
  NSString *_compoundId;
}

@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier;

/* class methods */
+ (id)identifierForPlayActivityID:(id)id channelID:(id)id duration:(id)duration;

/* instance methods */
- (id)initWithExternalId:(id)id brandId:(id)id hlsAssetDuration:(id)duration;
- (void)processResponse;
@end

#endif /* WLKPlayActivityDecorateVODOperation_h */