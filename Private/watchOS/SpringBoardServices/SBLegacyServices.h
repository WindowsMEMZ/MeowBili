//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBLegacyServices_h
#define SBLegacyServices_h
@import Foundation;

@interface SBLegacyServices : NSObject
/* class methods */
+ (void)_configure;
+ (void)checkInPorts;
+ (void)start;
+ (id)workloop;
+ (void)setFunction:(void *)function forSymbol:(const char *)symbol;
@end

#endif /* SBLegacyServices_h */