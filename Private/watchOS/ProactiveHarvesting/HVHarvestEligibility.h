//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVHarvestEligibility_h
#define HVHarvestEligibility_h
@import Foundation;

@interface HVHarvestEligibility : NSObject
/* class methods */
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)harvesting;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)pipeline targetPluginsCustomAttributeName:(id)name;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)harvesting eligibleExceptForAge:(BOOL *)age;
+ (BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(id /* block */)block bundleIdentifier:(id)identifier;
+ (BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(id /* block */)block bundleIdentifier:(id)identifier eligibleExceptForAge:(BOOL *)age;
@end

#endif /* HVHarvestEligibility_h */