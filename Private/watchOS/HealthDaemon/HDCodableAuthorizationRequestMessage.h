//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableAuthorizationRequestMessage_h
#define HDCodableAuthorizationRequestMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableAuthorizationRequestMessage : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (readonly, nonatomic) unsigned long long typesToReadsCount;
@property (readonly, nonatomic) long long * typesToReads;
@property (readonly, nonatomic) unsigned long long typesToWritesCount;
@property (readonly, nonatomic) long long * typesToWrites;

/* class methods */
+ (id)codableAuthorizationRequestWithRecord:(id)record;

/* instance methods */
- (id)decodedReadTypes;
- (id)decodedWriteTypes;
- (void)dealloc;
- (void)clearTypesToReads;
- (void)addTypesToRead:(long long)read;
- (long long)typesToReadAtIndex:(unsigned long long)index;
- (void)setTypesToReads:(long long *)reads count:(unsigned long long)count;
- (void)clearTypesToWrites;
- (void)addTypesToWrite:(long long)write;
- (long long)typesToWriteAtIndex:(unsigned long long)index;
- (void)setTypesToWrites:(long long *)writes count:(unsigned long long)count;
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

#endif /* HDCodableAuthorizationRequestMessage_h */