//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncCodableRegistry_h
#define HDCloudSyncCodableRegistry_h
@import Foundation;

#include "PBCodable.h"
#include "HDCloudSyncCodableProfileIdentifier.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface HDCloudSyncCodableRegistry : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 displayNameModificationDate; unsigned int x :1 deleted; } _has;
}

@property (retain, nonatomic) NSMutableArray *disabledOwnerIdentifiers;
@property (retain, nonatomic) NSMutableArray *stores;
@property (retain, nonatomic) NSMutableArray *disabledSyncIdentities;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasDisplayFirstName;
@property (retain, nonatomic) NSString *displayFirstName;
@property (nonatomic) BOOL hasDisplayNameModificationDate;
@property (nonatomic) double displayNameModificationDate;
@property (readonly, nonatomic) BOOL hasDisplayLastName;
@property (retain, nonatomic) NSString *displayLastName;
@property (readonly, nonatomic) BOOL hasOwnerProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier;
@property (readonly, nonatomic) BOOL hasSharedProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier;

/* class methods */
+ (Class)disabledOwnerIdentifiersType;
+ (Class)storesType;
+ (Class)disabledSyncIdentitiesType;

/* instance methods */
- (void)clearDisabledOwnerIdentifiers;
- (void)addDisabledOwnerIdentifiers:(id)identifiers;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)index;
- (void)clearStores;
- (void)addStores:(id)stores;
- (unsigned long long)storesCount;
- (id)storesAtIndex:(unsigned long long)index;
- (void)clearDisabledSyncIdentities;
- (void)addDisabledSyncIdentities:(id)identities;
- (unsigned long long)disabledSyncIdentitiesCount;
- (id)disabledSyncIdentitiesAtIndex:(unsigned long long)index;
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

#endif /* HDCloudSyncCodableRegistry_h */