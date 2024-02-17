//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef UINibCoderValue_h
#define UINibCoderValue_h
@import Foundation;

@class NSString;

@interface UINibCoderValue : NSObject {
  /* instance variables */
  NSString *key;
  unsigned int scope;
  char type;
  union { float floatValue; double doubleValue; unsigned long long integerValue; void *bytesValue; } value;
  unsigned long long length;
}

/* class methods */
+ (id)nibValueForObjectReference:(long long)reference key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForInt8:(unsigned char)int8 key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForInt16:(unsigned short)int16 key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForInt32:(unsigned int)int32 key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForInt64:(unsigned long long)int64 key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForInteger:(unsigned long long)integer key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForBoolean:(BOOL)boolean key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForDouble:(double)double key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForFloat:(float)float key:(id)key scope:(unsigned int)scope;
+ (id)nibValueForBytes:(const void *)bytes length:(unsigned long long)length key:(id)key scope:(unsigned int)scope;
+ (id)nibValueRepresentingNilReferenceForKey:(id)key scope:(unsigned int)scope;

/* instance methods */
- (void)dealloc;
- (unsigned long long)byteLength;
@end

#endif /* UINibCoderValue_h */