//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiationBlobVideoRuleCollection_h
#define VCMediaNegotiationBlobVideoRuleCollection_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 formatsExt1; unsigned int x :1 preferredFormat; unsigned int x :1 preferredFormatExt1; } _has;
}

@property (nonatomic) int transport;
@property (nonatomic) int operation;
@property (nonatomic) unsigned int formats;
@property (nonatomic) BOOL hasPreferredFormat;
@property (nonatomic) unsigned int preferredFormat;
@property (nonatomic) BOOL hasFormatsExt1;
@property (nonatomic) unsigned int formatsExt1;
@property (nonatomic) BOOL hasPreferredFormatExt1;
@property (nonatomic) unsigned int preferredFormatExt1;

/* instance methods */
- (id)transportAsString:(int)string;
- (int)StringAsTransport:(id)transport;
- (id)operationAsString:(int)string;
- (int)StringAsOperation:(id)operation;
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

#endif /* VCMediaNegotiationBlobVideoRuleCollection_h */