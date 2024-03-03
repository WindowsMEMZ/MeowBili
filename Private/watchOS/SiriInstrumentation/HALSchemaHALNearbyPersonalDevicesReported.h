//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef HALSchemaHALNearbyPersonalDevicesReported_h
#define HALSchemaHALNearbyPersonalDevicesReported_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface HALSchemaHALNearbyPersonalDevicesReported : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 iPhoneCount; unsigned int x :1 iPadCount; unsigned int x :1 watchCount; unsigned int x :1 macBookCount; unsigned int x :1 macStudioCount; unsigned int x :1 iMacCount; } _has;
}

@property (nonatomic) unsigned int iPhoneCount;
@property (nonatomic) BOOL hasIPhoneCount;
@property (nonatomic) unsigned int iPadCount;
@property (nonatomic) BOOL hasIPadCount;
@property (nonatomic) unsigned int watchCount;
@property (nonatomic) BOOL hasWatchCount;
@property (nonatomic) unsigned int macBookCount;
@property (nonatomic) BOOL hasMacBookCount;
@property (nonatomic) unsigned int macStudioCount;
@property (nonatomic) BOOL hasMacStudioCount;
@property (nonatomic) unsigned int iMacCount;
@property (nonatomic) BOOL hasIMacCount;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteIPhoneCount;
- (void)deleteIPadCount;
- (void)deleteWatchCount;
- (void)deleteMacBookCount;
- (void)deleteMacStudioCount;
- (void)deleteIMacCount;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* HALSchemaHALNearbyPersonalDevicesReported_h */