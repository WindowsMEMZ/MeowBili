//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEResolutionRequestStarted_h
#define INFERENCESchemaINFERENCEResolutionRequestStarted_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCEResolverConfig.h"

@class NSData;

@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 slotType; } _has;
}

@property (nonatomic) int slotType;
@property (nonatomic) BOOL hasSlotType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolverConfig *resolverConfig;
@property (nonatomic) BOOL hasResolverConfig;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSlotType;
- (void)deleteResolverConfig;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEResolutionRequestStarted_h */