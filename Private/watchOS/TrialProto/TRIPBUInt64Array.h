//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBUInt64Array_h
#define TRIPBUInt64Array_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIPBMessage.h"

@interface TRIPBUInt64Array : NSObject<NSCopying> {
  /* instance variables */
  TRIPBMessage *_autocreator;
  unsigned long long * _values;
  unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

/* class methods */
+ (id)array;
+ (id)arrayWithValue:(unsigned long long)value;
+ (id)arrayWithValueArray:(id)array;
+ (id)arrayWithCapacity:(unsigned long long)capacity;

/* instance methods */
- (id)init;
- (id)initWithValueArray:(id)array;
- (id)initWithValues:(const unsigned long long *)values count:(unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateValuesWithBlock:(id /* block */)block;
- (void)enumerateValuesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (unsigned long long)valueAtIndex:(unsigned long long)index;
- (void)internalResizeToCapacity:(unsigned long long)capacity;
- (void)addValue:(unsigned long long)value;
- (void)addValues:(const unsigned long long *)values count:(unsigned long long)count;
- (void)insertValue:(unsigned long long)value atIndex:(unsigned long long)index;
- (void)replaceValueAtIndex:(unsigned long long)index withValue:(unsigned long long)value;
- (void)addValuesFromArray:(id)array;
- (void)removeValueAtIndex:(unsigned long long)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(unsigned long long)index withValueAtIndex:(unsigned long long)index;
@end

#endif /* TRIPBUInt64Array_h */