//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef USOSchemaUSOUtteranceAlignment_h
#define USOSchemaUSOUtteranceAlignment_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface USOSchemaUSOUtteranceAlignment : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 asrHypothesisIndex; unsigned int x :1 nodeIndex; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAsrHypothesisIndex;
- (void)clearSpans;
- (void)deleteSpans;
- (void)addSpans:(id)spans;
- (unsigned long long)spansCount;
- (id)spansAtIndex:(unsigned long long)index;
- (void)deleteNodeIndex;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* USOSchemaUSOUtteranceAlignment_h */