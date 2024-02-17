//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICPBDGSFinishDelegationRequest_h
#define ICPBDGSFinishDelegationRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest<NSCopying> {
  /* instance variables */
  NSMutableArray *_playerDelegateInfoTokens;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ICPBDGSFinishDelegationRequest_h */