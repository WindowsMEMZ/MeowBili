//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALITFMITFMParserResponse_h
#define SIRINLUINTERNALITFMITFMParserResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALParser.h"

@class NSMutableArray;

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 classificationProbability; unsigned int x :1 classificationLabel; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (retain, nonatomic) NSMutableArray *hypotheses;

/* class methods */
+ (Class)hypothesesType;

/* instance methods */
- (void)clearHypotheses;
- (void)addHypotheses:(id)hypotheses;
- (unsigned long long)hypothesesCount;
- (id)hypothesesAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALITFMITFMParserResponse_h */