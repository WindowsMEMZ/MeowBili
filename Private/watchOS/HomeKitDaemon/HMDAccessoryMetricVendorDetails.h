//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryMetricVendorDetails_h
#define HMDAccessoryMetricVendorDetails_h
@import Foundation;

#include "HMFObject.h"

@class NSNumber, NSString;

@interface HMDAccessoryMetricVendorDetails : HMFObject

@property (readonly, nonatomic) NSString *productData;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSNumber *differentiationNumber;

/* class methods */
+ (unsigned long long)maximumDifferentiationNumber;

/* instance methods */
- (id)initWithAccessory:(id)accessory;
- (id)initWithProductData:(id)data manufacturer:(id)manufacturer model:(id)model firmwareVersion:(id)version category:(id)category differentiationNumber:(id)number;
- (id)attributeDescriptions;
@end

#endif /* HMDAccessoryMetricVendorDetails_h */