//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringFormatStyle_h
#define GEOComposedStringFormatStyle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface GEOComposedStringFormatStyle : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  int _type;
  NSString *_token;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* GEOComposedStringFormatStyle_h */