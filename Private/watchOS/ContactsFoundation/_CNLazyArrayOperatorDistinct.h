//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNLazyArrayOperatorDistinct_h
#define _CNLazyArrayOperatorDistinct_h
@import Foundation;

#include "_CNLazyArrayOperator.h"

@class NSMutableSet;

@interface _CNLazyArrayOperatorDistinct : _CNLazyArrayOperator {
  /* instance variables */
  NSMutableSet *_seenValues;
}

/* instance methods */
- (id)initWithInput:(id)input;
- (id)nextObject;
@end

#endif /* _CNLazyArrayOperatorDistinct_h */