//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKForecastObservable_Protocol_h
#define NWKForecastObservable_Protocol_h
@import Foundation;

@protocol NWKForecastObservable 
/* instance methods */
- (void)connectionAcknowledgedForBulkUpdateOfLocations:(id)locations;
- (void)location:(id)location token:(unsigned long long)token updatedAt:(id)at current:(id)current hourly:(id)hourly daily:(id)daily airQuality:(id)quality precipitation:(id)precipitation severeWeather:(id)weather;
- (void)location:(id)location isUpdating:(BOOL)updating error:(id)error;
@end

#endif /* NWKForecastObservable_Protocol_h */