//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MIPPlaylist_h
#define MIPPlaylist_h
@import Foundation;

#include "PBCodable.h"
#include "MIPMultiverseIdentifier.h"
#include "MIPSmartPlaylistInfo.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 authorStoreId; unsigned int x :1 cloudLastUpdateTime; unsigned int x :1 creationDateTime; unsigned int x :1 lastPlayedDateTime; unsigned int x :1 likedStateChangedDate; unsigned int x :1 minRefreshInterval; unsigned int x :1 modificationDateTime; unsigned int x :1 storeId; unsigned int x :1 distinguishedKind; unsigned int x :1 likedState; unsigned int x :1 playCount; unsigned int x :1 playlistCategoryTypeMask; unsigned int x :1 remoteSourceType; unsigned int x :1 secondaryArtworkSourceType; unsigned int x :1 sortType; unsigned int x :1 subscriberCount; unsigned int x :1 subscriberLikedCount; unsigned int x :1 subscriberPlayCount; unsigned int x :1 traits; unsigned int x :1 type; unsigned int x :1 cloudIsCuratorPlaylist; unsigned int x :1 cloudIsSharingDisabled; unsigned int x :1 cloudIsSubscribed; unsigned int x :1 editable; unsigned int x :1 externalVendorPlaylist; unsigned int x :1 hidden; unsigned int x :1 owner; unsigned int x :1 reversedSorting; unsigned int x :1 shared; unsigned int x :1 visible; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL hasSmartPlaylistInfo;
@property (retain, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) int sortType;
@property (nonatomic) BOOL hasReversedSorting;
@property (nonatomic) BOOL reversedSorting;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *parentIdentifier;
@property (readonly, nonatomic) BOOL hasGeniusSeedTrackIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *geniusSeedTrackIdentifier;
@property (nonatomic) BOOL hasDistinguishedKind;
@property (nonatomic) int distinguishedKind;
@property (readonly, nonatomic) BOOL hasCloudGlobalId;
@property (retain, nonatomic) NSString *cloudGlobalId;
@property (nonatomic) BOOL hasCloudIsSubscribed;
@property (nonatomic) BOOL cloudIsSubscribed;
@property (nonatomic) BOOL hasCloudIsCuratorPlaylist;
@property (nonatomic) BOOL cloudIsCuratorPlaylist;
@property (readonly, nonatomic) BOOL hasExternalVendorIdentifier;
@property (retain, nonatomic) NSString *externalVendorIdentifier;
@property (readonly, nonatomic) BOOL hasExternalVendorDisplayName;
@property (retain, nonatomic) NSString *externalVendorDisplayName;
@property (readonly, nonatomic) BOOL hasExternalVendorTag;
@property (retain, nonatomic) NSString *externalVendorTag;
@property (nonatomic) BOOL hasExternalVendorPlaylist;
@property (nonatomic) BOOL externalVendorPlaylist;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) long long creationDateTime;
@property (nonatomic) BOOL hasModificationDateTime;
@property (nonatomic) long long modificationDateTime;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) long long lastPlayedDateTime;
@property (nonatomic) BOOL hasCloudIsSharingDisabled;
@property (nonatomic) BOOL cloudIsSharingDisabled;
@property (readonly, nonatomic) BOOL hasCloudVersionHash;
@property (retain, nonatomic) NSString *cloudVersionHash;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) BOOL hasRemoteSourceType;
@property (nonatomic) int remoteSourceType;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) BOOL owner;
@property (nonatomic) BOOL hasEditable;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) int playCount;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL hasVisible;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasAuthorStoreId;
@property (nonatomic) long long authorStoreId;
@property (readonly, nonatomic) BOOL hasAuthorDisplayName;
@property (retain, nonatomic) NSString *authorDisplayName;
@property (readonly, nonatomic) BOOL hasAuthorStoreURL;
@property (retain, nonatomic) NSString *authorStoreURL;
@property (readonly, nonatomic) BOOL hasAuthorHandle;
@property (retain, nonatomic) NSString *authorHandle;
@property (nonatomic) BOOL hasMinRefreshInterval;
@property (nonatomic) long long minRefreshInterval;
@property (nonatomic) BOOL hasCloudLastUpdateTime;
@property (nonatomic) long long cloudLastUpdateTime;
@property (nonatomic) BOOL hasSubscriberCount;
@property (nonatomic) int subscriberCount;
@property (nonatomic) BOOL hasSubscriberPlayCount;
@property (nonatomic) int subscriberPlayCount;
@property (nonatomic) BOOL hasSubscriberLikedCount;
@property (nonatomic) int subscriberLikedCount;
@property (readonly, nonatomic) BOOL hasSubscriberURL;
@property (retain, nonatomic) NSString *subscriberURL;
@property (readonly, nonatomic) BOOL hasPlaylistDescription;
@property (retain, nonatomic) NSString *playlistDescription;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (nonatomic) BOOL hasSecondaryArtworkSourceType;
@property (nonatomic) int secondaryArtworkSourceType;
@property (readonly, nonatomic) BOOL hasSecondaryArtworkId;
@property (retain, nonatomic) NSString *secondaryArtworkId;
@property (nonatomic) BOOL hasPlaylistCategoryTypeMask;
@property (nonatomic) int playlistCategoryTypeMask;
@property (readonly, nonatomic) BOOL hasPlaylistGroupingSortKey;
@property (retain, nonatomic) NSString *playlistGroupingSortKey;
@property (nonatomic) BOOL hasLikedStateChangedDate;
@property (nonatomic) long long likedStateChangedDate;
@property (nonatomic) BOOL hasTraits;
@property (nonatomic) int traits;
@property (retain, nonatomic) NSMutableArray *childIdentifiers;
@property (retain, nonatomic) NSMutableArray *items;

/* class methods */
+ (Class)childIdentifiersType;
+ (Class)itemsType;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (id)sortTypeAsString:(int)string;
- (int)StringAsSortType:(id)type;
- (void)clearChildIdentifiers;
- (void)addChildIdentifiers:(id)identifiers;
- (unsigned long long)childIdentifiersCount;
- (id)childIdentifiersAtIndex:(unsigned long long)index;
- (void)clearItems;
- (void)addItems:(id)items;
- (unsigned long long)itemsCount;
- (id)itemsAtIndex:(unsigned long long)index;
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

#endif /* MIPPlaylist_h */