//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKConfigurationRequest_h
#define WLKConfigurationRequest_h
@import Foundation;

@interface WLKConfigurationRequest : NSObject
/* class methods */
+ (void)fetchWithOptions:(long long)options cachePolicy:(unsigned long long)policy wlkCachePolicy:(unsigned long long)policy extendedCacheExpireDuration:(double)duration sessionConfiguration:(id)configuration queryParameters:(id)parameters fileStorage:(id)storage completion:(id /* block */)completion;
+ (void)_fetchV3WithOptions:(long long)options cachePolicy:(unsigned long long)policy sessionConfiguration:(id)configuration queryParameters:(id)parameters completion:(id /* block */)completion;
+ (id)_configURLString:(id *)urlstring;
@end

#endif /* WLKConfigurationRequest_h */