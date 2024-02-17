//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7617.1.17.12.4
//
#ifndef ProviderConfiguration_h
#define ProviderConfiguration_h
@import Foundation;

@class NSDictionary;

@interface ProviderConfiguration : NSObject {
  /* instance variables */
  NSDictionary *_configuration;
}

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL proxyOff;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)_configureToUseDefaultValues;
- (void)_configureToBeOff;
- (id)_currentRegionCode;
- (void)_parseConfiguration:(id)configuration;
- (BOOL)isEqualToConfiguration:(id)configuration;
@end

#endif /* ProviderConfiguration_h */