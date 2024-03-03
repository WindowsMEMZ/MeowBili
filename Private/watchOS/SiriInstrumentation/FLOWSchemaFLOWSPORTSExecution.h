//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWSPORTSExecution_h
#define FLOWSchemaFLOWSPORTSExecution_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface FLOWSchemaFLOWSPORTSExecution : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 sportsUsecase; unsigned int x :1 isSportsWatchFaceRequest; unsigned int x :1 isSnippetNextCardRequest; unsigned int x :1 isMachineUtterance; unsigned int x :1 isDisambiguation; unsigned int x :1 isLiveScoreRequest; } _has;
}

@property (nonatomic) int sportsUsecase;
@property (nonatomic) BOOL hasSportsUsecase;
@property (nonatomic) BOOL isSportsWatchFaceRequest;
@property (nonatomic) BOOL hasIsSportsWatchFaceRequest;
@property (nonatomic) BOOL isSnippetNextCardRequest;
@property (nonatomic) BOOL hasIsSnippetNextCardRequest;
@property (nonatomic) BOOL isMachineUtterance;
@property (nonatomic) BOOL hasIsMachineUtterance;
@property (nonatomic) BOOL isDisambiguation;
@property (nonatomic) BOOL hasIsDisambiguation;
@property (nonatomic) BOOL isLiveScoreRequest;
@property (nonatomic) BOOL hasIsLiveScoreRequest;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteSportsUsecase;
- (void)deleteIsSportsWatchFaceRequest;
- (void)deleteIsSnippetNextCardRequest;
- (void)deleteIsMachineUtterance;
- (void)deleteIsDisambiguation;
- (void)deleteIsLiveScoreRequest;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWSPORTSExecution_h */