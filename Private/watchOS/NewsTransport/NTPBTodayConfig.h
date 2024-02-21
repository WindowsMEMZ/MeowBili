//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTodayConfig_h
#define NTPBTodayConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NTPBTodayConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 widgetSystemReloadInterval; unsigned int x :1 widgetSystemReloadJitterMax; } _has;
}

@property (retain, nonatomic) NSMutableArray *todayQueueConfigs;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) BOOL hasAudioIndicatorColor;
@property (retain, nonatomic) NSString *audioIndicatorColor;
@property (nonatomic) BOOL hasWidgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) BOOL hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long widgetSystemReloadJitterMax;

/* class methods */
+ (Class)todayQueueConfigsType;

/* instance methods */
- (void)dealloc;
- (void)clearTodayQueueConfigs;
- (void)addTodayQueueConfigs:(id)configs;
- (unsigned long long)todayQueueConfigsCount;
- (id)todayQueueConfigsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBTodayConfig_h */