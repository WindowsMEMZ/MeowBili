//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef DecryptedParticipantPayload_h
#define DecryptedParticipantPayload_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface DecryptedParticipantPayload : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; } _has;
}

@property (readonly, nonatomic) BOOL hasTokenUri;
@property (retain, nonatomic) NSString *tokenUri;
@property (readonly, nonatomic) BOOL hasPresenceIdentifier;
@property (retain, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) BOOL hasChannelIdentifier;
@property (retain, nonatomic) NSString *channelIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasClientPayload;
@property (retain, nonatomic) NSData *clientPayload;

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

#endif /* DecryptedParticipantPayload_h */