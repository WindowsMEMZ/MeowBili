//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated_h
#define INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals.h"

@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals *commonSignals;
@property (nonatomic) BOOL hasCommonSignals;
@property (copy, nonatomic) NSArray *choiceDependentSignals;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteCommonSignals;
- (void)clearChoiceDependentSignals;
- (void)deleteChoiceDependentSignals;
- (void)addChoiceDependentSignals:(id)signals;
- (unsigned long long)choiceDependentSignalsCount;
- (id)choiceDependentSignalsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEPervasiveEntityResolutionGroundTruthGenerated_h */