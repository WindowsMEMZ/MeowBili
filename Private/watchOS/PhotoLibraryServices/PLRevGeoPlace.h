//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLRevGeoPlace_h
#define PLRevGeoPlace_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface PLRevGeoPlace : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *placeInfosForOrderType;

/* class methods */
+ (id)_newFilterSortedPlaceInfos:(id)infos usingPlaceAnnotation:(id)annotation outFoundOrderType:(unsigned long long *)type outPreviousOrderType:(unsigned long long *)type;
+ (id)placeWithMapItem:(id)item placeAnnotation:(id)annotation;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)_dominantOrderTypeForPlaceType:(id)type lastOrderType:(unsigned long long)type;

/* instance methods */
- (id)initWithPlaceInfosForOrderType:(id)type;
- (id)bestPlaceInfoForOrderType:(unsigned long long)type;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PLRevGeoPlace_h */