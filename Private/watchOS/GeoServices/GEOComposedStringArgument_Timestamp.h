//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringArgument_Timestamp_h
#define GEOComposedStringArgument_Timestamp_h
@import Foundation;

#include "GEOComposedStringArgument.h"

@class NSString, NSTimeZone;

@interface GEOComposedStringArgument_Timestamp : GEOComposedStringArgument {
  /* instance variables */
  double _defaultValue;
  NSString *_defaultFormatPattern;
  NSTimeZone *_defaultTimeZone;
}

@property (nonatomic) double overrideValue;
@property (copy, nonatomic) NSString *overrideFormatPattern;
@property (copy, nonatomic) NSTimeZone *overrideTimeZone;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithGeoFormatArgument:(id)argument;
- (id)_initWithGeoTimestampData:(id)data;
- (void)_updateWithGeoTimestampData:(id)data;
- (id)timestampFormat;
- (id)_stringReplacementWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GEOComposedStringArgument_Timestamp_h */