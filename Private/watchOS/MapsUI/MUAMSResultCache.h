//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUAMSResultCache_h
#define MUAMSResultCache_h
@import Foundation;

#include "MUTimeExpirableLRUCache.h"

@interface MUAMSResultCache : NSObject {
  /* instance variables */
  MUTimeExpirableLRUCache *_amsResultsByAdamIds;
  MUTimeExpirableLRUCache *_amsResultsByBundleIds;
}

/* instance methods */
- (id)initWithAppAdamIdCacheCount:(unsigned long long)count appAdamIdTimeToLive:(unsigned long long)live bundleIdCacheCount:(unsigned long long)count bundleIdTimeToLive:(unsigned long long)live;
- (id)amsResultForAdamId:(id)id;
- (void)setAMSResult:(id)amsresult forAdamId:(id)id;
- (id)amsResultForBundleId:(id)id;
- (void)setAMSResult:(id)amsresult forBundleId:(id)id;
@end

#endif /* MUAMSResultCache_h */