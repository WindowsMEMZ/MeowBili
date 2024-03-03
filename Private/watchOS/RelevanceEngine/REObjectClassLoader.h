//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REObjectClassLoader_h
#define REObjectClassLoader_h
@import Foundation;

#include "REClassLoader.h"

@class NSArray;

@interface REObjectClassLoader : REClassLoader {
  /* instance variables */
  NSArray *_objects;
}

/* instance methods */
- (id)initWithObjects:(id)objects configuration:(id)configuration;
- (void)_enumerateClassesWithBlock:(id /* block */)block;
- (void)enumerateObjectsWithBlock:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* REObjectClassLoader_h */