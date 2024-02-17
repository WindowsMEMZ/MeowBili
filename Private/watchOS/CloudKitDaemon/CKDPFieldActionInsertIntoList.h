//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPFieldActionInsertIntoList_h
#define CKDPFieldActionInsertIntoList_h
@import Foundation;

#include "PBCodable.h"
#include "CKDPListPosition.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 insertAfter; } _has;
}

@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) CKDPListPosition *position;
@property (nonatomic) BOOL hasInsertAfter;
@property (nonatomic) BOOL insertAfter;
@property (retain, nonatomic) NSMutableArray *values;

/* class methods */
+ (Class)valueType;

/* instance methods */
- (void)clearValues;
- (void)addValue:(id)value;
- (unsigned long long)valuesCount;
- (id)valueAtIndex:(unsigned long long)index;
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

#endif /* CKDPFieldActionInsertIntoList_h */