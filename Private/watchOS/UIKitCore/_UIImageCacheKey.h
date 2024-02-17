//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageCacheKey_h
#define _UIImageCacheKey_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIImageConfiguration.h"

@class NSBundle, NSString;

@interface _UIImageCacheKey : NSObject<NSCopying> {
  /* instance variables */
  NSString *_name;
  UIImageConfiguration *_configuration;
  NSBundle *_bundle;
  struct { unsigned int x :1 system; unsigned int x :1 private; } _flags;
}

/* class methods */
+ (id)keyWithName:(id)name configuration:(id)configuration bundle:(id)bundle;
+ (id)keyWithName:(id)name configuration:(id)configuration;
+ (id)keyWithSystemName:(id)name private:(BOOL)private configuration:(id)configuration;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _UIImageCacheKey_h */