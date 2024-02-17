//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPAccessoryReachabilityProfile_h
#define HAPAccessoryReachabilityProfile_h
@import Foundation;

#include "HMFObject.h"
#include "HAPAccessoryReachabilityProfile-Protocol.h"
#include "HAPCharacteristic.h"

@class NSString;

@interface HAPAccessoryReachabilityProfile : HMFObject<HAPAccessoryReachabilityProfile>

@property (retain, nonatomic) HAPCharacteristic *sleepIntervalCharacteristic;
@property (retain, nonatomic) HAPCharacteristic *pollCharacteristic;
@property (nonatomic) double sleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)timeIntervalFromMillisecondNumberValue:(id)value;
+ (id)shortDescription;

/* instance methods */
- (id)init;
- (id)initWithProfile:(id)profile;
- (id)initWithDiscoveredServices:(id)services;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HAPAccessoryReachabilityProfile_h */