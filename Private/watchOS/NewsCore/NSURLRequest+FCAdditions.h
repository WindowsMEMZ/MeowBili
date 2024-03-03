//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSURLRequest_FCAdditions_h
#define NSURLRequest_FCAdditions_h
@import Foundation;

@interface NSURLRequest (FCAdditions)
/* class methods */
+ (id)overrideUserAgent;
+ (void)setupFeldsparUserAgent;
+ (id)fcRequestWithURL:(id)url cachePolicy:(unsigned long long)policy timeoutInterval:(double)interval;
+ (id)fcRequestWithURL:(id)url;
@end

#endif /* NSURLRequest_FCAdditions_h */