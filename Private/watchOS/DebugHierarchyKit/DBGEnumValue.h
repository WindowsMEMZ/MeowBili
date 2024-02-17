//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 66.0.0.0.0
//
#ifndef DBGEnumValue_h
#define DBGEnumValue_h
@import Foundation;

#include "DBGValue-Protocol.h"
#include "DBGValueJSONSerialization-Protocol.h"

@class NSString;

@interface DBGEnumValue : NSObject<DBGValueJSONSerialization, DBGValue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) id enumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)valueWithEncodedValue:(id)value format:(id)format error:(id *)error;
+ (id)withValue:(id)value;

/* instance methods */
- (id)JSONCompatibleRepresentation;
- (id)initWithCustomValue:(id)value;
- (long long)integerValue;
- (void)setIntegerValue:(long long)value;
- (unsigned long long)unsignedIntegerValue;
- (void)setUnsignedIntegerValue:(unsigned long long)value;
- (id)stringValue;
- (void)setStringValue:(id)value;
- (id)objectValue;
@end

#endif /* DBGEnumValue_h */