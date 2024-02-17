//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMConcurrentMutableDictionary_h
#define FMConcurrentMutableDictionary_h
@import Foundation;

#include "FMReadWriteLock.h"

@class NSMutableDictionary;

@interface FMConcurrentMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)objectForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (id)nativeDictionary;
- (id)objectForKey:(id)key withConstructor:(id /* block */)constructor;
- (id)replaceObject:(id)object forKey:(id)key;
- (id)popObjectforKey:(id)key;
@end

#endif /* FMConcurrentMutableDictionary_h */