//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWLINKSchemaFLOWLINKActionParameterConfirmationStarted_h
#define FLOWLINKSchemaFLOWLINKActionParameterConfirmationStarted_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "FLOWLINKSchemaFLOWLINKActionParameter.h"

@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionParameterConfirmationStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameter *parameter;
@property (nonatomic) BOOL hasParameter;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteParameter;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWLINKSchemaFLOWLINKActionParameterConfirmationStarted_h */