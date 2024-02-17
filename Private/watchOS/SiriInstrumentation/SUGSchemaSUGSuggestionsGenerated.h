//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SUGSchemaSUGSuggestionsGenerated_h
#define SUGSchemaSUGSuggestionsGenerated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSArray, NSData, NSString;

@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 invocationType; } _has;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) int invocationType;
@property (nonatomic) BOOL hasInvocationType;
@property (retain, nonatomic) SISchemaUUID *generationId;
@property (nonatomic) BOOL hasGenerationId;
@property (copy, nonatomic) NSString *generationTag;
@property (nonatomic) BOOL hasGenerationTag;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearSuggestions;
- (void)deleteSuggestions;
- (void)addSuggestions:(id)suggestions;
- (unsigned long long)suggestionsCount;
- (id)suggestionsAtIndex:(unsigned long long)index;
- (void)deleteInvocationType;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SUGSchemaSUGSuggestionsGenerated_h */