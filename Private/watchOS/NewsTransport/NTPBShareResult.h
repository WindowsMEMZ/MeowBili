//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBShareResult_h
#define NTPBShareResult_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBChannelData.h"
#include "NTPBIssueData.h"
#include "NTPBIssueExposureData.h"
#include "NTPBWidgetEngagement.h"

@class NSData, NSMutableArray, NSString;

@interface NTPBShareResult : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 backendArticleVersionInt64; unsigned int x :1 personalizationTreatmentId; unsigned int x :1 previousArticlePublisherArticleVersion; unsigned int x :1 publisherArticleVersionInt64; unsigned int x :1 articleType; unsigned int x :1 backendArticleVersion; unsigned int x :1 characterCount; unsigned int x :1 contentType; unsigned int x :1 feedType; unsigned int x :1 groupType; unsigned int x :1 nextArticleAffordanceType; unsigned int x :1 publisherArticleVersion; unsigned int x :1 resultType; unsigned int x :1 shareLocation; unsigned int x :1 shareMethod; unsigned int x :1 topStoryType; unsigned int x :1 fromNextArticleAffordanceTap; unsigned int x :1 isBreakingNewsArticle; unsigned int x :1 isCoverArticle; unsigned int x :1 isDigitalReplicaAd; unsigned int x :1 isFreeArticle; unsigned int x :1 isGroupedArticle; unsigned int x :1 isNativeAd; unsigned int x :1 isNotificationArticle; unsigned int x :1 isPaidSubscriberToSourceChannel; unsigned int x :1 isSearchResult; unsigned int x :1 isTopStoryArticle; unsigned int x :1 isUserSubscribedToFeed; } _has;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic) BOOL hasShareMethod;
@property (nonatomic) int shareMethod;
@property (nonatomic) BOOL hasShareLocation;
@property (nonatomic) int shareLocation;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) int characterCount;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *namedEntities;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) int backendArticleVersion;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) int articleType;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (retain, nonatomic) NSString *surfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (readonly, nonatomic) BOOL hasIosActivityType;
@property (retain, nonatomic) NSString *iosActivityType;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL isDigitalReplicaAd;
@property (readonly, nonatomic) BOOL hasExternalWeblinkUrl;
@property (retain, nonatomic) NSString *externalWeblinkUrl;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL isGroupedArticle;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL isFreeArticle;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL isNotificationArticle;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (retain, nonatomic) NSString *notificationId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL isCoverArticle;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (nonatomic) BOOL fromNextArticleAffordanceTap;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (nonatomic) int nextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasNextArticleAffordanceTypeFeedId;
@property (retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL isBreakingNewsArticle;
@property (nonatomic) BOOL hasTopStoryType;
@property (nonatomic) int topStoryType;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL isTopStoryArticle;
@property (nonatomic) BOOL hasIsSearchResult;
@property (nonatomic) BOOL isSearchResult;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL isNativeAd;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (retain, nonatomic) NSString *nativeCampaignData;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (retain, nonatomic) NSString *previousArticleVersion;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (retain, nonatomic) NSString *iadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (retain, nonatomic) NSString *iadNativeLine;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (retain, nonatomic) NSString *iadNativeAd;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (retain, nonatomic) NSString *iadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (retain, nonatomic) NSMutableArray *topicIds;

/* class methods */
+ (Class)namedEntitiesType;
+ (Class)fractionalCohortMembershipType;
+ (Class)topicIdsType;

/* instance methods */
- (id)contentTypeAsString:(int)string;
- (int)StringAsContentType:(id)type;
- (id)feedTypeAsString:(int)string;
- (int)StringAsFeedType:(id)type;
- (void)clearNamedEntities;
- (void)addNamedEntities:(id)entities;
- (unsigned long long)namedEntitiesCount;
- (id)namedEntitiesAtIndex:(unsigned long long)index;
- (id)articleTypeAsString:(int)string;
- (int)StringAsArticleType:(id)type;
- (id)groupTypeAsString:(int)string;
- (int)StringAsGroupType:(id)type;
- (id)nextArticleAffordanceTypeAsString:(int)string;
- (int)StringAsNextArticleAffordanceType:(id)type;
- (id)topStoryTypeAsString:(int)string;
- (int)StringAsTopStoryType:(id)type;
- (void)clearFractionalCohortMemberships;
- (void)addFractionalCohortMembership:(id)membership;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)index;
- (void)clearTopicIds;
- (void)addTopicIds:(id)ids;
- (unsigned long long)topicIdsCount;
- (id)topicIdsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBShareResult_h */