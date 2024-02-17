//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPCompanionSyncedItem_h
#define MSPCompanionSyncedItem_h
@import Foundation;

#include "PBCodable.h"
#include "MSPBookmarkStorage.h"
#include "MSPHistoryEntryStorage.h"
#include "MSPPinStorage.h"
#include "NSCopying-Protocol.h"
#include "SYChange-Protocol.h"
#include "SYObject-Protocol.h"

@class NSString, PBUnknownFields;

@interface MSPCompanionSyncedItem : PBCodable<SYObject, SYChange, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 changeType; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long syChangeType;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSyncId;
@property (retain, nonatomic) NSString *syncId;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (retain, nonatomic) MSPBookmarkStorage *bookmark;
@property (readonly, nonatomic) BOOL hasPin;
@property (retain, nonatomic) MSPPinStorage *pin;
@property (readonly, nonatomic) BOOL hasSearchRequest;
@property (retain, nonatomic) MSPHistoryEntryStorage *searchRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (id)syncIdWithPrefix:(id)prefix identifier:(id)identifier;

/* instance methods */
- (id)changeTypeAsString:(int)string;
- (int)StringAsChangeType:(id)type;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* MSPCompanionSyncedItem_h */