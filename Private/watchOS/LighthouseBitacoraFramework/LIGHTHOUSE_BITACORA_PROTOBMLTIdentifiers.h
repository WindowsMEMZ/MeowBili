//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.3.3.0.0
//
#ifndef LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers_h
#define LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasTrialTaskID;
@property (retain, nonatomic) NSString *trialTaskID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers_h */