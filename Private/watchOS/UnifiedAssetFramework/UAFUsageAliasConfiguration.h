//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.1.0.0
//
#ifndef UAFUsageAliasConfiguration_h
#define UAFUsageAliasConfiguration_h
@import Foundation;

#include "UAFConfigurationManager.h"

@class NSDictionary, NSString;

@interface UAFUsageAliasConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *values;
@property (retain, nonatomic) UAFConfigurationManager *assetSetManager;

/* class methods */
+ (id)supportedFileVersions;
+ (BOOL)isValid:(id)valid assetSetManager:(id)manager error:(id *)error;
+ (id)fromContentsOfURL:(id)url assetSetManager:(id)manager error:(id *)error;

/* instance methods */
- (id)initWithDictionary:(id)dictionary assetSetManager:(id)manager;
- (id)getTrialAssets:(id)assets;
- (id)getAutoAssets:(id)assets;
- (id)getAssets:(id)assets;
- (id)getAssetSetAssets:(id)assets usageValue:(id)value withSource:(id)source;
- (id)getAssets:(id)assets withSource:(id)source;
@end

#endif /* UAFUsageAliasConfiguration_h */