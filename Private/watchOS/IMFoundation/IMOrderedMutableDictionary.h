//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMOrderedMutableDictionary_h
#define IMOrderedMutableDictionary_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IMOrderedMutableDictionary : NSObject<NSFastEnumeration> {
  /* instance variables */
  NSMutableDictionary *_dictionary;
  NSMutableOrderedSet *_mutableOrderedSet;
  NSArray *_orderedItems;
}

@property (readonly) unsigned long long count;

/* instance methods */
- (id)init;
- (void)setOrderedObject:(id)object forKey:(id)key;
- (id)orderedObjectForKey:(id)key;
- (void)removeOrderedObjectForKey:(id)key;
- (id)orderedObjects;
- (BOOL)containsOrderedObject:(id)object;
- (BOOL)containsKey:(id)key;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
@end

#endif /* IMOrderedMutableDictionary_h */