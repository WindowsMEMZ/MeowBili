//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPLOGENTRYVISIONVLLocalizationResult_h
#define CLPLOGENTRYVISIONVLLocalizationResult_h
@import Foundation;

#include "PBCodable.h"
#include "CLPLOGENTRYVISIONSimdDoubleMxN.h"
#include "CLPLOGENTRYVISIONTimeStamp.h"
#include "CLPLOGENTRYVISIONVLLocalizationDebugInfo.h"
#include "CLPLOGENTRYVISIONVLLocation.h"
#include "CLPLOGENTRYVISIONVLMatrixfMxN.h"
#include "NSCopying-Protocol.h"

@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 confidence; } _has;
}

@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocation *location;
@property (readonly, nonatomic) BOOL hasTransform;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *transform;
@property (readonly, nonatomic) BOOL hasCovariance;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLMatrixfMxN *covariance;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo;

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

#endif /* CLPLOGENTRYVISIONVLLocalizationResult_h */