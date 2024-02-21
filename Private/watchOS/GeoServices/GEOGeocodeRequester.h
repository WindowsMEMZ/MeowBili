//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOGeocodeRequester_h
#define GEOGeocodeRequester_h
@import Foundation;

#include "GEOServiceRequester.h"

@interface GEOGeocodeRequester : GEOServiceRequester
/* class methods */
+ (id)sharedGeocodeRequester;

/* instance methods */
- (void)batchReverseGeocode:(id)geocode auditToken:(id)token success:(id /* block */)success networkActivity:(id /* block */)activity error:(id /* block */)error;
- (void)cancelBatchReverseGeocode:(id)geocode;
@end

#endif /* GEOGeocodeRequester_h */