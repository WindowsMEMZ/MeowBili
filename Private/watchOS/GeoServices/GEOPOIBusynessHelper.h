//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPOIBusynessHelper_h
#define GEOPOIBusynessHelper_h
@import Foundation;

@interface GEOPOIBusynessHelper : NSObject
/* class methods */
+ (void)checkIsEnabledForLocation:(id)location radius:(int)radius workQueue:(id)queue result:(id /* block */)result;
+ (BOOL)_checkAvailablePOIForLocation:(id)location radius:(int)radius minZoom:(unsigned char)zoom maxZoom:(unsigned char)zoom tiles:(id)tiles error:(id *)error;
+ (id)dpClientVersionHashWithMCPOIBusynessVersion:(id)version;
+ (void)generateDPPOIBusynessForLocation:(id)location radii:(id)radii workQueue:(id)queue result:(id /* block */)result;
+ (id)_generateDPPOIBusynessForLocation:(id)location radii:(id)radii minZoom:(unsigned char)zoom maxZoom:(unsigned char)zoom dpBusynessTiles:(id)tiles error:(id *)error;
+ (id)_generateDPPOIBusynessForCoordinate:(struct { double x0; double x1; })coordinate tileId:(unsigned long long)id dpBusynessTileURL:(id)url dayOfWeek:(unsigned int)week hourOfDay:(unsigned int)day radii:(id)radii minZoom:(unsigned char)zoom maxZoom:(unsigned char)zoom tileIds:(id)ids error:(id *)error;

/* instance methods */
- (id)init;
@end

#endif /* GEOPOIBusynessHelper_h */