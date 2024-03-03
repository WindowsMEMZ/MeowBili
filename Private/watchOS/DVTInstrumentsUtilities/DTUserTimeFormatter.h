//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTUserTimeFormatter_h
#define DTUserTimeFormatter_h
@import Foundation;

#include "NSNumberFormatter.h"

@interface DTUserTimeFormatter : NSNumberFormatter
/* class methods */
+ (void)initialize;
+ (id)stringForNanoseconds:(unsigned long long)nanoseconds;
+ (id)stringForNanoseconds:(unsigned long long)nanoseconds highestResolutionTimeEnabled:(BOOL)enabled;
+ (id)valueUnitStringForNanoseconds:(unsigned long long)nanoseconds;
+ (id)stringForObjectValue:(id)value;

/* instance methods */
- (id)stringForObjectValue:(id)value;
@end

#endif /* DTUserTimeFormatter_h */