//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDynamicModifiedColor_h
#define UIDynamicModifiedColor_h
@import Foundation;

#include "UIDynamicColor.h"
#include "UIDynamicColor.h"

@interface UIDynamicModifiedColor : UIDynamicColor {
  /* instance variables */
  UIDynamicColor *_baseColor;
  double _alphaComponent;
  long long _contrast;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBaseColor:(id)color alphaComponent:(double)component contrast:(long long)contrast;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)collection;
- (id)_resolvedMaterialWithTraitCollection:(id)collection;
- (id)colorWithAlphaComponent:(double)component;
- (id)_highContrastDynamicColor;
- (id)description;
@end

#endif /* UIDynamicModifiedColor_h */