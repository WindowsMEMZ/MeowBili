//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFMutableThreadSafeDictionary_h
#define HMFMutableThreadSafeDictionary_h
@import Foundation;

#include "HMFMutableAssociativeCollection-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface HMFMutableThreadSafeDictionary : NSObject<HMFMutableAssociativeCollection, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableDictionary *_dictionary;
}

@property (readonly, copy) NSDictionary *rawDictionarySnapshot;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

/* class methods */
+ (id)threadSafeDictionary;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;
- (id)objectForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (id)objectsForKeys:(id)keys notFoundMarker:(id)marker;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)removeObjectForKey:(id)key;
- (void)removeObjectsForKeys:(id)keys;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMFMutableThreadSafeDictionary_h */