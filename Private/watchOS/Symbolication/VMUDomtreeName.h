//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUDomtreeName_h
#define VMUDomtreeName_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol [6@"NSObject<NSCopying>"];

@interface VMUDomtreeName : NSObject<NSCopying> {
  /* instance variables */
  NSObject<NSCopying> * _elements[6];
}

/* instance methods */
- (id)initWithDict:(id)dict;
- (id)initWithArray:(id)array;
- (id)asArray;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* VMUDomtreeName_h */