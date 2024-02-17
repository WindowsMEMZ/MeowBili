//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PSGPBTypingSpeed_h
#define PSGPBTypingSpeed_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PSGPBTypingSpeed : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 messageDurationMilliseconds; unsigned int x :1 messageLength; unsigned int x :1 messageWords; } _has;
}

@property (readonly, nonatomic) BOOL hasZkwExperimentId;
@property (retain, nonatomic) NSString *zkwExperimentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentId;
@property (retain, nonatomic) NSString *zkwTreatmentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentName;
@property (retain, nonatomic) NSString *zkwTreatmentName;
@property (readonly, nonatomic) BOOL hasWbExperimentId;
@property (retain, nonatomic) NSString *wbExperimentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentId;
@property (retain, nonatomic) NSString *wbTreatmentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentName;
@property (retain, nonatomic) NSString *wbTreatmentName;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic) BOOL hasMessageDurationMilliseconds;
@property (nonatomic) int messageDurationMilliseconds;
@property (nonatomic) BOOL hasMessageLength;
@property (nonatomic) int messageLength;
@property (nonatomic) BOOL hasMessageWords;
@property (nonatomic) int messageWords;

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

#endif /* PSGPBTypingSpeed_h */