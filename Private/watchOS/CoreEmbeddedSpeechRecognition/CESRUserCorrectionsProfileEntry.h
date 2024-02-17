//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CESRUserCorrectionsProfileEntry_h
#define CESRUserCorrectionsProfileEntry_h
@import Foundation;

#include "PBCodable.h"
#include "CESRCorrectionPronunciation.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CESRUserCorrectionsProfileEntry : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 alternativesCorrectionsCount; unsigned int x :1 spellingCorrectionsCount; unsigned int x :1 tap2editCorrectionsCount; } _has;
}

@property (readonly, nonatomic) BOOL hasCorrectedText;
@property (retain, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) BOOL hasPronunciationData;
@property (retain, nonatomic) CESRCorrectionPronunciation *pronunciationData;
@property (nonatomic) BOOL hasSpellingCorrectionsCount;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) BOOL hasTap2editCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;
@property (nonatomic) BOOL hasAlternativesCorrectionsCount;
@property (nonatomic) unsigned int alternativesCorrectionsCount;

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

#endif /* CESRUserCorrectionsProfileEntry_h */