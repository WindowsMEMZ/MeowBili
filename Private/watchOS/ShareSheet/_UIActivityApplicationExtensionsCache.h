//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIActivityApplicationExtensionsCache_h
#define _UIActivityApplicationExtensionsCache_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionsCache : NSObject {
  /* instance variables */
  BOOL _primed;
  unsigned long long _cacheMisses;
  unsigned long long _cacheHits;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
  BOOL _precached;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedResults;
@property (retain, nonatomic) NSMutableDictionary *extensionMatchTokens;

/* class methods */
+ (id)sharedExtensionsCache;

/* instance methods */
- (id)init;
- (void)_startPrecachingContinuousExtensionDiscovery;
- (id)_matchingExtensionsCachedResultForKey:(id)key;
- (void)_cacheMatchingExtensionsResult:(id)result cacheKey:(id)key;
- (void)_cacheMatchingExtensions:(id)extensions cacheKey:(id)key error:(id)error;
- (void)_startContinuousExtensionDiscoveryForAttributes:(id)attributes cacheKey:(id)key;
- (void)primeExtensionsResultWithMatchingAttributes:(id)attributes;
- (id)extensionsResultWithMatchingAttributes:(id)attributes;
- (id)reportExtensionsCacheResult;
@end

#endif /* _UIActivityApplicationExtensionsCache_h */