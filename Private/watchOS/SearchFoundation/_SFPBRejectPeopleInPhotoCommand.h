//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRejectPeopleInPhotoCommand_h
#define _SFPBRejectPeopleInPhotoCommand_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBPhotosLibraryImage.h"
#include "_SFPBRejectPeopleInPhotoCommand-Protocol.h"

@class NSArray, NSData, NSString;

@interface _SFPBRejectPeopleInPhotoCommand : PBCodable<_SFPBRejectPeopleInPhotoCommand, NSSecureCoding>

@property (copy, nonatomic) NSArray *rejectedPeoples;
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (void)setRejectedPeople:(id)people;
- (void)clearRejectedPeople;
- (void)addRejectedPeople:(id)people;
- (unsigned long long)rejectedPeopleCount;
- (id)rejectedPeopleAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRejectPeopleInPhotoCommand_h */