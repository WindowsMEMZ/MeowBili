//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPaidSubscriptionSheetView_h
#define NTPBPaidSubscriptionSheetView_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NTPBPaidSubscriptionSheetView : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 groupType; unsigned int x :1 paidSubscriptionConversionPointExposureLocation; unsigned int x :1 paidSubscriptionConversionPointType; unsigned int x :1 paidSubscriptionSheetViewPresentationReason; unsigned int x :1 parentFeedType; unsigned int x :1 userAction; unsigned int x :1 arrivedFromAd; unsigned int x :1 subscriptionOnlyArticlePreview; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasPaidSubscriptionSheetViewPresentationReason;
@property (nonatomic) int paidSubscriptionSheetViewPresentationReason;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (nonatomic) BOOL subscriptionOnlyArticlePreview;
@property (nonatomic) BOOL hasArrivedFromAd;
@property (nonatomic) BOOL arrivedFromAd;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;

/* instance methods */
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)string;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)location;
- (id)parentFeedTypeAsString:(int)string;
- (int)StringAsParentFeedType:(id)type;
- (id)paidSubscriptionConversionPointTypeAsString:(int)string;
- (int)StringAsPaidSubscriptionConversionPointType:(id)type;
- (id)groupTypeAsString:(int)string;
- (int)StringAsGroupType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBPaidSubscriptionSheetView_h */