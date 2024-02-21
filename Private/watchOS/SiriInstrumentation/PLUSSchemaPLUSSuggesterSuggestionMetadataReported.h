//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLUSSchemaPLUSSuggesterSuggestionMetadataReported_h
#define PLUSSchemaPLUSSuggesterSuggestionMetadataReported_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "PLUSSchemaPLUSSuggesterDomainSuggestionMetadata.h"
#include "PLUSSchemaPLUSSuggestionDomainMetadata.h"
#include "SISchemaUUID.h"

@class NSData;

@interface PLUSSchemaPLUSSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 suggestionSurfaced; unsigned int x :1 suggestionNoveltyState; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) BOOL hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) int suggestionSurfaced;
@property (nonatomic) BOOL hasSuggestionSurfaced;
@property (nonatomic) int suggestionNoveltyState;
@property (nonatomic) BOOL hasSuggestionNoveltyState;
@property (retain, nonatomic) PLUSSchemaPLUSSuggesterDomainSuggestionMetadata *domainSuggestionMetadata;
@property (nonatomic) BOOL hasDomainSuggestionMetadata;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionSurfaced;
- (void)deleteSuggestionNoveltyState;
- (void)deleteDomainSuggestionMetadata;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PLUSSchemaPLUSSuggesterSuggestionMetadataReported_h */