//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBAppSessionEnd_h
#define NTPBAppSessionEnd_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 appSessionDuration; unsigned int x :1 appsAutoSubscribeFeedCount; unsigned int x :1 channelSubscriptionCount; unsigned int x :1 internalAutoSubscribeFeedCount; unsigned int x :1 notificationEnabledChannelsCount; unsigned int x :1 notitificationsEnabledChannelsCount; unsigned int x :1 portraitAutoSubscribeFeedCount; unsigned int x :1 safariAutoSubscribeFeedCount; unsigned int x :1 sessionEndReason; unsigned int x :1 topicSubscriptionCount; unsigned int x :1 breakingNewsAvailableDuringSession; unsigned int x :1 breakingNewsDismissedDuringSession; unsigned int x :1 syncedOtherUserIdDuringSession; } _has;
}

@property (nonatomic) BOOL hasSessionEndReason;
@property (nonatomic) int sessionEndReason;
@property (retain, nonatomic) NSMutableArray *lastVisibleViews;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic) BOOL hasAppSessionDuration;
@property (nonatomic) long long appSessionDuration;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) BOOL hasBreakingNewsAvailableDuringSession;
@property (nonatomic) BOOL breakingNewsAvailableDuringSession;
@property (nonatomic) BOOL hasBreakingNewsDismissedDuringSession;
@property (nonatomic) BOOL breakingNewsDismissedDuringSession;
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *groupableFeedIds;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSyncedOtherUserIdDuringSession;
@property (nonatomic) BOOL syncedOtherUserIdDuringSession;

/* class methods */
+ (Class)lastVisibleViewsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;

/* instance methods */
- (id)sessionEndReasonAsString:(int)string;
- (int)StringAsSessionEndReason:(id)reason;
- (void)clearLastVisibleViews;
- (void)addLastVisibleViews:(id)views;
- (unsigned long long)lastVisibleViewsCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)index;
- (void)clearPaidSubscriptionChannelIds;
- (void)addPaidSubscriptionChannelIds:(id)ids;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)index;
- (void)clearNotificationChannelIds;
- (void)addNotificationChannelIds:(id)ids;
- (unsigned long long)notificationChannelIdsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)index;
- (void)clearSubscribedFeedIds;
- (void)addSubscribedFeedIds:(id)ids;
- (unsigned long long)subscribedFeedIdsCount;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)index;
- (void)clearAutoSubscribedFeedIds;
- (void)addAutoSubscribedFeedIds:(id)ids;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)index;
- (void)clearGroupableFeedIds;
- (void)addGroupableFeedIds:(id)ids;
- (unsigned long long)groupableFeedIdsCount;
- (id)groupableFeedIdsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBAppSessionEnd_h */