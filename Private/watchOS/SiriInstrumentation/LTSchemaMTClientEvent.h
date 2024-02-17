//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef LTSchemaMTClientEvent_h
#define LTSchemaMTClientEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "LTSchemaASRSpeechTranslationEvent.h"
#include "LTSchemaBatchTranslationEvent.h"
#include "LTSchemaDisambiguationSpeechTranslationEvent.h"
#include "LTSchemaLIDSpeechTranslationEvent.h"
#include "LTSchemaMTSpeechTranslationEvent.h"
#include "LTSchemaSafariFeedbackEvent.h"
#include "LTSchemaSpeechTranslationEvent.h"
#include "LTSchemaTTSSpeechTranslationEvent.h"
#include "SISchemaInnerEventContainer-Protocol.h"
#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface LTSchemaMTClientEvent : SISchemaTopLevelUnionType<SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) LTSchemaSafariFeedbackEvent *safariFeedbackEvent;
@property (nonatomic) BOOL hasSafariFeedbackEvent;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *batchTranslationEvent;
@property (nonatomic) BOOL hasBatchTranslationEvent;
@property (retain, nonatomic) LTSchemaSpeechTranslationEvent *speechTranslationEvent;
@property (nonatomic) BOOL hasSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaLIDSpeechTranslationEvent *lidSpeechTranslationEvent;
@property (nonatomic) BOOL hasLidSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaDisambiguationSpeechTranslationEvent *disambiguationSpeechTranslationEvent;
@property (nonatomic) BOOL hasDisambiguationSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaASRSpeechTranslationEvent *asrSpeechTranslationEvent;
@property (nonatomic) BOOL hasAsrSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaMTSpeechTranslationEvent *mtSpeechTranslationEvent;
@property (nonatomic) BOOL hasMtSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaTTSSpeechTranslationEvent *ttsspeechTranslationEvent;
@property (nonatomic) BOOL hasTtsspeechTranslationEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

/* class methods */
+ (id)getInnerTypeStringByTag:(unsigned long long)tag;

/* instance methods */
- (int)getAnyEventType;
- (unsigned long long)whichInnerEventType;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (id)qualifiedMessageName;
- (void)deleteSafariFeedbackEvent;
- (void)deleteBatchTranslationEvent;
- (void)deleteSpeechTranslationEvent;
- (void)deleteLidSpeechTranslationEvent;
- (void)deleteDisambiguationSpeechTranslationEvent;
- (void)deleteAsrSpeechTranslationEvent;
- (void)deleteMtSpeechTranslationEvent;
- (void)deleteTtsspeechTranslationEvent;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* LTSchemaMTClientEvent_h */