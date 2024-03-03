//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableClinicalDeletedAccount_h
#define HDCodableClinicalDeletedAccount_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableMessageVersion.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 deletionDate; unsigned int x :1 deletionReason; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasDeletionDate;
@property (nonatomic) double deletionDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) BOOL hasDeletionReason;
@property (nonatomic) long long deletionReason;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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

#endif /* HDCodableClinicalDeletedAccount_h */