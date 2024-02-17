//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHCodablePlaceholderValue_h
#define ACHCodablePlaceholderValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface ACHCodablePlaceholderValue : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasPlaceholder;
@property (retain, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;

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

#endif /* ACHCodablePlaceholderValue_h */