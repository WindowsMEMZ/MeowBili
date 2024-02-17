//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef GRPSchemaGroupedMessagesClientEvent_h
#define GRPSchemaGroupedMessagesClientEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "GRPSchemaGroupedMessagesGrouping.h"
#include "GRPSchemaProducerMetadata.h"

@class NSArray, NSData;

@interface GRPSchemaGroupedMessagesClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRPSchemaGroupedMessagesGrouping *groupedBy;
@property (nonatomic) BOOL hasGroupedBy;
@property (retain, nonatomic) GRPSchemaProducerMetadata *producerMetadata;
@property (nonatomic) BOOL hasProducerMetadata;
@property (copy, nonatomic) NSArray *orderedMessages;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (int)getAnyEventType;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (id)qualifiedMessageName;
- (void)deleteGroupedBy;
- (void)deleteProducerMetadata;
- (void)clearOrderedMessages;
- (void)deleteOrderedMessages;
- (void)addOrderedMessages:(id)messages;
- (unsigned long long)orderedMessagesCount;
- (id)orderedMessagesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* GRPSchemaGroupedMessagesClientEvent_h */