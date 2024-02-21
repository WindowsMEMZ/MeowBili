//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoResyncNeededRequest_h
#define NPKProtoResyncNeededRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NPKProtoHash.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 resyncID; unsigned int x :1 fullResyncNeeded; } _has;
}

@property (readonly, nonatomic) BOOL hasExpectedHash;
@property (retain, nonatomic) NPKProtoHash *expectedHash;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (retain, nonatomic) NSMutableArray *manifestHashes;
@property (nonatomic) BOOL hasFullResyncNeeded;
@property (nonatomic) BOOL fullResyncNeeded;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) unsigned int resyncID;

/* class methods */
+ (Class)uniqueIDsType;
+ (Class)manifestHashesType;

/* instance methods */
- (void)clearUniqueIDs;
- (void)addUniqueIDs:(id)ids;
- (unsigned long long)uniqueIDsCount;
- (id)uniqueIDsAtIndex:(unsigned long long)index;
- (void)clearManifestHashes;
- (void)addManifestHashes:(id)hashes;
- (unsigned long long)manifestHashesCount;
- (id)manifestHashesAtIndex:(unsigned long long)index;
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

#endif /* NPKProtoResyncNeededRequest_h */