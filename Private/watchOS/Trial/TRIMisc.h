//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIMisc_h
#define TRIMisc_h
@import Foundation;

@interface TRIMisc : NSObject
/* class methods */
+ (BOOL)convertFromString:(id)string usingBase:(int)base toU64:(unsigned long long *)u64;
+ (BOOL)convertFromString:(id)string usingBase:(int)base toI64:(long long *)i64;
+ (unsigned long long)roundToOneSignificantDigitWithU64:(unsigned long long)u64;
+ (id)bestEffortSymbolicateAddress:(void *)address;
+ (unsigned long long)unsafeFirstAuthenticationState;
@end

#endif /* TRIMisc_h */