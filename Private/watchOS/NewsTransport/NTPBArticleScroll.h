//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBArticleScroll_h
#define NTPBArticleScroll_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBAlternateHeadline.h"
#include "NTPBIssueData.h"
#include "NTPBIssueExposureData.h"
#include "NTPBIssueViewData.h"

@class NSData, NSMutableArray, NSString;

@interface NTPBArticleScroll : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 scrollHostViewType; unsigned int x :1 scrollingVelocity; unsigned int x :1 verticalScrollPositionEnding; unsigned int x :1 verticalScrollPositionStarting; unsigned int x :1 adSupportedChannel; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasScrollHostViewType;
@property (nonatomic) int scrollHostViewType;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionStart;
@property (retain, nonatomic) NSString *verticalScrollPositionStart;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionEnd;
@property (retain, nonatomic) NSString *verticalScrollPositionEnd;
@property (readonly, nonatomic) BOOL hasScrollVelocity;
@property (retain, nonatomic) NSString *scrollVelocity;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) BOOL hasVerticalScrollPositionStarting;
@property (nonatomic) float verticalScrollPositionStarting;
@property (nonatomic) BOOL hasVerticalScrollPositionEnding;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic) BOOL hasScrollingVelocity;
@property (nonatomic) float scrollingVelocity;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;

/* class methods */
+ (Class)fractionalCohortMembershipType;

/* instance methods */
- (void)clearFractionalCohortMemberships;
- (void)addFractionalCohortMembership:(id)membership;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBArticleScroll_h */