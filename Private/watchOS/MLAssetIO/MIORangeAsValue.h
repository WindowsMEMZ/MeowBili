//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MIORangeAsValue_h
#define MIORangeAsValue_h
@import Foundation;

#include "NSValue.h"

@interface MIORangeAsValue : NSValue {
  /* instance variables */
  struct _MIORange { long long lowerBound; long long upperBound; } _range;
}

/* class methods */
+ (id)valueWithMIORange:(struct _MIORange { long long x0; long long x1; })miorange;

/* instance methods */
- (struct _MIORange { long long x0; long long x1; })MIORangeValue;
- (void)getValue:(void *)value;
- (const char *)objCType;
@end

#endif /* MIORangeAsValue_h */