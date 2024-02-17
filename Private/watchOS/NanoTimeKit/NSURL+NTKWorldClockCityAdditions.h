//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NSURL_NTKWorldClockCityAdditions_h
#define NSURL_NTKWorldClockCityAdditions_h
@import Foundation;

@interface NSURL (NTKWorldClockCityAdditions)
/* class methods */
+ (id)nwcCurrentLocationURL;
+ (id)nwcCurrentLocationURLForLatitude:(double)latitude longitude:(double)longitude;
+ (id)nwcCurrentLocationURLForLocation:(id)location;
@end

#endif /* NSURL_NTKWorldClockCityAdditions_h */