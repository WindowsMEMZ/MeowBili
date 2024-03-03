//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMSystemDialogAct_h
#define NLXSchemaCDMSystemDialogAct_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaCDMSystemGaveOptions.h"
#include "NLXSchemaCDMSystemInformed.h"
#include "NLXSchemaCDMSystemOffered.h"
#include "NLXSchemaCDMSystemPrompted.h"
#include "NLXSchemaCDMSystemReportedFailure.h"
#include "NLXSchemaCDMSystemReportedSuccess.h"
#include "SISchemaUUID.h"

@class NSData;

@interface NLXSchemaCDMSystemDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) NLXSchemaCDMSystemPrompted *prompted;
@property (nonatomic) BOOL hasPrompted;
@property (retain, nonatomic) NLXSchemaCDMSystemOffered *offered;
@property (nonatomic) BOOL hasOffered;
@property (retain, nonatomic) NLXSchemaCDMSystemGaveOptions *gaveOptions;
@property (nonatomic) BOOL hasGaveOptions;
@property (retain, nonatomic) NLXSchemaCDMSystemInformed *informed;
@property (nonatomic) BOOL hasInformed;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedSuccess *reportedSuccess;
@property (nonatomic) BOOL hasReportedSuccess;
@property (retain, nonatomic) NLXSchemaCDMSystemReportedFailure *reportedFailure;
@property (nonatomic) BOOL hasReportedFailure;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSystemdialogacttype;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteId;
- (void)deleteLinkId;
- (void)deletePrompted;
- (void)deleteOffered;
- (void)deleteGaveOptions;
- (void)deleteInformed;
- (void)deleteReportedSuccess;
- (void)deleteReportedFailure;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMSystemDialogAct_h */