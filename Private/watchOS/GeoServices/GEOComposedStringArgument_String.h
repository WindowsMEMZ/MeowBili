//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringArgument_String_h
#define GEOComposedStringArgument_String_h
@import Foundation;

#include "GEOComposedStringArgument.h"

@class NSString;

@interface GEOComposedStringArgument_String : GEOComposedStringArgument {
  /* instance variables */
  NSString *_defaultValue;
}

@property (copy, nonatomic) NSString *overrideValue;
@property (readonly, nonatomic) int stringSubstituteType;
@property (readonly, nonatomic) int privacyFilterType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithGeoFormatArgument:(id)argument;
- (id)stringFormat;
- (id)_stringReplacementWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GEOComposedStringArgument_String_h */