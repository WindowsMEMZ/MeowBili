//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResourceManifestServerProxyDelegate_Protocol_h
#define GEOResourceManifestServerProxyDelegate_Protocol_h
@import Foundation;

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
/* instance methods */
- (void)serverProxyWillStartUpdatingResourceManifest:(id)manifest;
- (void)serverProxyDidStopUpdatingResourceManifest:(id)manifest;
- (void)serverProxyWillStartLoadingResources:(id)resources;
- (void)serverProxyDidStopLoadingResources:(id)resources;
- (void)serverProxy:(id)proxy didLoadActiveTileGroup:(id)group;
- (void)serverProxy:(id)proxy didChangeActiveTileGroup:(id)group finishedCallback:(id /* block */)callback;
- (void)serverProxyNeedsWiFiResourceActivity:(id)activity;
@end

#endif /* GEOResourceManifestServerProxyDelegate_Protocol_h */