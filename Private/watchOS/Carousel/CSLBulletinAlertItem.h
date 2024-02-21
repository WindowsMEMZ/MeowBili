//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinAlertItem_h
#define CSLBulletinAlertItem_h
@import Foundation;

#include "CSLBulletin.h"
#include "CSLBulletinAlertItemSortStrategy-Protocol.h"
#include "CSLBulletinPresentation.h"
#include "NSCopying-Protocol.h"

@class CUISAlertPresentationPolicy, CUISNotificationCenterIcon, NSMutableArray, NSString, NSUserDefaults, SWSystemActivityAssertion;

@interface CSLBulletinAlertItem : NSObject<NSCopying> {
  /* instance variables */
  NSMutableArray *_bulletins;
  NSObject<CSLBulletinAlertItemSortStrategy> *_sortStrategy;
  NSUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) NSString *uniqueListIdentifier;
@property (readonly, nonatomic) CUISNotificationCenterIcon *notificationCenterIcon;
@property (retain, nonatomic) SWSystemActivityAssertion *workAssertion;
@property (readonly, nonatomic) CSLBulletin *seedBulletin;
@property (nonatomic) BOOL shouldPlayLightsAndSirens;
@property (nonatomic) double ncCellHeight;
@property (retain, nonatomic) CSLBulletinPresentation *presentation;
@property (readonly, nonatomic) CUISAlertPresentationPolicy *presentationPolicy;

/* class methods */
+ (void)initialize;
+ (id)itemWithSeedBulletin:(id)bulletin;
+ (id)itemWithBulletins:(id)bulletins;
+ (id)_formattedDecimalStringForNumber:(id)number;

/* instance methods */
- (void)takePowerAssertion;
- (void)invalidatePowerAssertion;
- (id)description;
- (BOOL)bulletinAlertShouldOverrideDoNotDisturb;
- (id)_initWithBulletins:(id)bulletins;
- (void)dealloc;
- (id)_initWithSeedBulletin:(id)bulletin;
- (id)_initWithItem:(id)item withoutBulletinIDs:(id)ids;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)setSortStrategyWithGroupOrdering:(unsigned long long)ordering;
- (void)_sortBulletinsByDate;
- (id)appName;
- (id)title;
- (id)subtitle;
- (id)appColor;
- (id)message;
- (id)sound;
- (id)sectionID;
- (id)localSectionIDs;
- (BOOL)isSameLocalSectionAsItem:(id)item;
- (id)sourceDate;
- (id)mostRecentBulletin;
- (id)allBulletins;
- (id)allBBBulletins;
- (BOOL)containsBulletin:(id)bulletin;
- (BOOL)containsOnlyBulletin:(id)bulletin;
- (BOOL)containsOnlyBulletins:(id)bulletins;
- (BOOL)containsBulletinIDs:(id)ids;
- (BOOL)containsBulletinKey:(id)key;
- (id)bulletinOfKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isMuted;
- (BOOL)isLocalOnly;
- (id)copyWithReplacementBulletin:(id)bulletin;
- (void)addBulletin:(id)bulletin;
- (void)addBulletins:(id)bulletins;
- (BOOL)replaceBulletin:(id)bulletin withBulletin:(id)bulletin;
- (BOOL)isEqual:(id)equal;
- (id)alertServiceName;
- (id)bulletinsPassingTest:(id /* block */)test;
- (void)removeBulletins:(id)bulletins;
@end

#endif /* CSLBulletinAlertItem_h */