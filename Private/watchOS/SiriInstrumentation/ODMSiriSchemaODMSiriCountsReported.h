//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ODMSiriSchemaODMSiriCountsReported_h
#define ODMSiriSchemaODMSiriCountsReported_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "ODMSiriSchemaODMSiriAggregationInterval.h"

@class NSArray, NSData;

@interface ODMSiriSchemaODMSiriCountsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) BOOL hasAggregationInterval;
@property (copy, nonatomic) NSArray *siriCounts;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAggregationInterval;
- (void)clearSiriCounts;
- (void)deleteSiriCounts;
- (void)addSiriCounts:(id)counts;
- (unsigned long long)siriCountsCount;
- (id)siriCountsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ODMSiriSchemaODMSiriCountsReported_h */