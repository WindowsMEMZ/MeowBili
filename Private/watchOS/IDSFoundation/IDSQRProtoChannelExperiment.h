//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoChannelExperiment_h
#define IDSQRProtoChannelExperiment_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IDSQRProtoChannelExperiment : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 int32Value; unsigned int x :1 testValue; unsigned int x :1 boolValue; } _has;
}

@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) BOOL hasTestValue;
@property (nonatomic) int testValue;

/* instance methods */
- (id)testValueAsString:(int)string;
- (int)StringAsTestValue:(id)value;
- (void)clearOneofValuesForTestValue;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* IDSQRProtoChannelExperiment_h */