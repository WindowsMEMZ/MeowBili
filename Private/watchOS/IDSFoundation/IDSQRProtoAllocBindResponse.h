//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoAllocBindResponse_h
#define IDSQRProtoAllocBindResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface IDSQRProtoAllocBindResponse : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 channelSettings; unsigned int x :1 generationCounter; unsigned int x :1 linkId; unsigned int x :1 participantType; unsigned int x :1 sessionStateCounter; } _has;
}

@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) unsigned int channelId;
@property (readonly, nonatomic) BOOL hasSoftware;
@property (retain, nonatomic) NSString *software;
@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int * peerSubscribedStreamIds;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) BOOL hasChannelSettings;
@property (nonatomic) unsigned int channelSettings;
@property (readonly, nonatomic) BOOL hasReportingDataBlob;
@property (retain, nonatomic) NSData *reportingDataBlob;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long * lightweightParticipantIdLists;
@property (retain, nonatomic) NSMutableArray *quicConnectionInfos;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) unsigned int participantType;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;
@property (retain, nonatomic) NSMutableArray *materials;
@property (retain, nonatomic) NSMutableArray *activeExperiments;

/* class methods */
+ (Class)peerPublishedStreamsType;
+ (Class)quicConnectionInfoType;
+ (Class)materialsType;
+ (Class)activeExperimentsType;

/* instance methods */
- (void)dealloc;
- (void)clearPeerPublishedStreams;
- (void)addPeerPublishedStreams:(id)streams;
- (unsigned long long)peerPublishedStreamsCount;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)index;
- (void)clearPeerSubscribedStreamIds;
- (void)addPeerSubscribedStreamIds:(unsigned int)ids;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)index;
- (void)setPeerSubscribedStreamIds:(unsigned int *)ids count:(unsigned long long)count;
- (void)clearLightweightParticipantIdLists;
- (void)addLightweightParticipantIdList:(unsigned long long)list;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)index;
- (void)setLightweightParticipantIdLists:(unsigned long long *)lists count:(unsigned long long)count;
- (void)clearQuicConnectionInfos;
- (void)addQuicConnectionInfo:(id)info;
- (unsigned long long)quicConnectionInfosCount;
- (id)quicConnectionInfoAtIndex:(unsigned long long)index;
- (void)clearMaterials;
- (void)addMaterials:(id)materials;
- (unsigned long long)materialsCount;
- (id)materialsAtIndex:(unsigned long long)index;
- (void)clearActiveExperiments;
- (void)addActiveExperiments:(id)experiments;
- (unsigned long long)activeExperimentsCount;
- (id)activeExperimentsAtIndex:(unsigned long long)index;
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

#endif /* IDSQRProtoAllocBindResponse_h */