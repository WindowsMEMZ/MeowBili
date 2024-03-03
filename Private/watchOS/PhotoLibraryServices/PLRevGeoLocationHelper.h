//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLRevGeoLocationHelper_h
#define PLRevGeoLocationHelper_h
@import Foundation;

@interface PLRevGeoLocationHelper : NSObject
/* class methods */
+ (id)autoNaviProviderID;
+ (id)appleProviderID;
+ (void)simulateAutoNaviForBlock:(id /* block */)block;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (BOOL)isAutoNaviRevGeoProvider:(id)provider;
+ (BOOL)isAutoNaviCountryCode:(id)code;
+ (id)currentRevGeoProvider;
+ (id)autoNaviCountryCode;
@end

#endif /* PLRevGeoLocationHelper_h */