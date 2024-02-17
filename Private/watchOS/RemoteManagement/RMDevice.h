//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMDevice_h
#define RMDevice_h
@import Foundation;

@class NSString;

@interface RMDevice : NSObject

@property (readonly, nonatomic) NSString *UDID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *modelFamily;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *modelMarketingName;
@property (readonly, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) NSString *operatingSystem;
@property (readonly, nonatomic) NSString *operatingSystemMarketingName;
@property (readonly, nonatomic) NSString *operatingSystemVersion;
@property (readonly, nonatomic) NSString *operatingSystemSupplementalExtraVersion;
@property (readonly, nonatomic) NSString *operatingSystemBuildVersion;
@property (readonly, nonatomic) NSString *operatingSystemSupplementalBuildVersion;
@property (readonly, nonatomic) BOOL hasSEP;
@property (readonly, nonatomic) BOOL locked;

/* class methods */
+ (id)currentDevice;
@end

#endif /* RMDevice_h */