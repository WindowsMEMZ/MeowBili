//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPMergeableDeltaMetadataRetrieveResponse_h
#define CKDPMergeableDeltaMetadataRetrieveResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *metadatas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

/* class methods */
+ (Class)metadataType;

/* instance methods */
- (void)clearMetadatas;
- (void)addMetadata:(id)metadata;
- (unsigned long long)metadatasCount;
- (id)metadataAtIndex:(unsigned long long)index;
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

#endif /* CKDPMergeableDeltaMetadataRetrieveResponse_h */