//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRVolumeControlAvailabilityProtobuf_h
#define _MRVolumeControlAvailabilityProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 volumeCapabilities; unsigned int x :1 volumeControlAvailable; } _has;
}

@property (nonatomic) BOOL hasVolumeControlAvailable;
@property (nonatomic) BOOL volumeControlAvailable;
@property (nonatomic) BOOL hasVolumeCapabilities;
@property (nonatomic) int volumeCapabilities;

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

#endif /* _MRVolumeControlAvailabilityProtobuf_h */