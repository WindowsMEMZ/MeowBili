//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef OTSupportSOSMessage_h
#define OTSupportSOSMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface OTSupportSOSMessage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 supported; } _has;
}

@property (nonatomic) BOOL hasSupported;
@property (nonatomic) int supported;

/* instance methods */
- (id)supportedAsString:(int)string;
- (int)StringAsSupported:(id)supported;
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

#endif /* OTSupportSOSMessage_h */