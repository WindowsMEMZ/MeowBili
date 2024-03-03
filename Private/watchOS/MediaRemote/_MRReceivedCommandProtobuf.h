//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRReceivedCommandProtobuf_h
#define _MRReceivedCommandProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRCommandOptionsProtobuf.h"
#include "_MRNowPlayingPlayerPathProtobuf.h"
#include "_MRReceivedCommandAppOptionsProtobuf.h"

@class NSString;

@interface _MRReceivedCommandProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 destinationAppProcessID; unsigned int x :1 command; unsigned int x :1 originUID; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (nonatomic) BOOL hasOriginUID;
@property (nonatomic) int originUID;
@property (readonly, nonatomic) BOOL hasSenderAppDisplayID;
@property (retain, nonatomic) NSString *senderAppDisplayID;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) BOOL hasDestinationAppProcessID;
@property (nonatomic) long long destinationAppProcessID;
@property (readonly, nonatomic) BOOL hasRemoteControlInterfaceID;
@property (retain, nonatomic) NSString *remoteControlInterfaceID;
@property (readonly, nonatomic) BOOL hasAppOptions;
@property (retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

/* instance methods */
- (id)commandAsString:(int)string;
- (int)StringAsCommand:(id)command;
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

#endif /* _MRReceivedCommandProtobuf_h */