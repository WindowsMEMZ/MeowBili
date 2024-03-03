//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportSerializabledObjectCollection_h
#define SignpostSupportSerializabledObjectCollection_h
@import Foundation;

@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject

@property (readonly, nonatomic) NSArray *objectArray;
@property (readonly, nonatomic) NSNumber *formatVersion;
@property (readonly, nonatomic) unsigned long long machContinuousTimeFirst;
@property (readonly, nonatomic) unsigned long long machContinuousTimeLast;

/* class methods */
+ (BOOL)_versionIsSupported:(id)supported;
+ (id)_deserializedDictionaryForData:(id)data errorOut:(id *)out;
+ (BOOL)timeRangeForSerializedCollection:(id)collection continuousTimeFirstOut:(unsigned long long *)out continuousTimeLastOut:(unsigned long long *)out errorOut:(id *)out;
+ (BOOL)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)dictionary processingBlock:(id /* block */)block errorOut:(id *)out;
+ (BOOL)enumerateSignpostSupportObjectsInSerializedCollection:(id)collection processingBlock:(id /* block */)block errorOut:(id *)out;

/* instance methods */
- (id)initWithSerializeableObjectArray:(id)array;
- (id)newSerializedCollection:(BOOL)collection;
- (id)initWithData:(id)data errorOut:(id *)out;
@end

#endif /* SignpostSupportSerializabledObjectCollection_h */