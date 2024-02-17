//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHUserEngagementAccumulatedAggregationStats_h
#define MHSchemaMHUserEngagementAccumulatedAggregationStats_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData, NSString;

@interface MHSchemaMHUserEngagementAccumulatedAggregationStats : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 aggregationStartTimestamp; unsigned int x :1 numberOfDaysAggregation; unsigned int x :1 intendedRequestRatio; } _has;
}

@property (nonatomic) double aggregationStartTimestamp;
@property (nonatomic) BOOL hasAggregationStartTimestamp;
@property (nonatomic) int numberOfDaysAggregation;
@property (nonatomic) BOOL hasNumberOfDaysAggregation;
@property (copy, nonatomic) NSArray *aggregationStats;
@property (copy, nonatomic) NSString *cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) BOOL hasIntendedRequestRatio;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteAggregationStartTimestamp;
- (void)deleteNumberOfDaysAggregation;
- (void)clearAggregationStats;
- (void)deleteAggregationStats;
- (void)addAggregationStats:(id)stats;
- (unsigned long long)aggregationStatsCount;
- (id)aggregationStatsAtIndex:(unsigned long long)index;
- (void)deleteCohortType;
- (void)deleteIntendedRequestRatio;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHUserEngagementAccumulatedAggregationStats_h */