//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHDisableFlipbookPowerSavingAttribute_h
#define BLSHDisableFlipbookPowerSavingAttribute_h
@import Foundation;

#include "BLSAttribute.h"

@interface BLSHDisableFlipbookPowerSavingAttribute : BLSAttribute

@property (readonly, nonatomic) unsigned long long reason;

/* class methods */
+ (id)disablePowerSavingForReason:(unsigned long long)reason;

/* instance methods */
- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)entitlements error:(out id *)error;
@end

#endif /* BLSHDisableFlipbookPowerSavingAttribute_h */