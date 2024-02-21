//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCMobileGestalt_h
#define DMCMobileGestalt_h
@import Foundation;

@interface DMCMobileGestalt : NSObject
/* class methods */
+ (id)_overridableGestaltForKey:(struct __CFString *)key expectedClass:(Class)class;
+ (id)deviceClass;
+ (BOOL)isPad;
+ (BOOL)isAppleTV;
+ (BOOL)isWatch;
+ (BOOL)isHomePod;
+ (BOOL)isPhone;
+ (id)deviceUDID;
+ (id)serialNumber;
+ (id)productName;
+ (id)modelNumber;
+ (id)deviceColor;
+ (id)regionCode;
+ (id)regionInfo;
+ (id)productType;
+ (BOOL)hasInternetTetheringCapability;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)hasBattery;
+ (id)marketingVersion;
+ (id)buildVersion;
+ (id)supplementalMarketingVersionExtra;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)diskUsage;
+ (id)deviceCapacity;
+ (id)diskCapacity;
+ (id)availableCapacity;
@end

#endif /* DMCMobileGestalt_h */