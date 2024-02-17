//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIXPCActivityCriteria_h
#define TRIXPCActivityCriteria_h
@import Foundation;

@interface TRIXPCActivityCriteria : NSObject
/* class methods */
+ (id)cellularCriteria;
+ (id)fetchExperimentsCriteria;
+ (id)fetchBMLTCriteria;
+ (id)maintenanceCriteria;
+ (id)clientTriggeredCellularCriteria;
+ (id)clientTriggeredWifiCriteria;
@end

#endif /* TRIXPCActivityCriteria_h */