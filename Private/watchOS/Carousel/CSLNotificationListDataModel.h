//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLNotificationListDataModel_h
#define CSLNotificationListDataModel_h
@import Foundation;

@class NSArray, NSDiffableDataSourceSnapshot, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface CSLNotificationListDataModel : NSObject {
  /* instance variables */
  NSMutableDictionary *_sectionDisplayInfo;
  NSLock *_sectionDisplayInfoLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listItemsLock;
}

@property (readonly, nonatomic) NSString *itemsSectionIdentifier;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, nonatomic) NSMutableArray *listItems;
@property (readonly, nonatomic) NSHashTable *hiddenListObservers;
@property (readonly, nonatomic) NSArray *items;

/* class methods */
+ (unsigned long long)indexOfItemForCoalescingBulletin:(id)bulletin inItems:(id)items;
+ (unsigned long long)addBulletin:(id)bulletin toCoalescableItemInItems:(id)items;
+ (id)recoalesceBulletinsOfItems:(id)items;

/* instance methods */
- (id)initWithBulletinAlertItems:(id)items;
- (void)_withListItemsLock:(id /* block */)lock;
- (unsigned long long)indexOfItem:(id)item;
- (id)itemWithIdentifier:(id)identifier;
- (unsigned long long)indexForInsertingItem:(id)item;
- (unsigned long long)addItem:(id)item;
- (id)addItems:(id)items;
- (unsigned long long)removeItem:(id)item;
- (id)removeItems:(id)items;
- (id)sectionIDs;
- (id)itemsOfSectionID:(id)id;
- (id)_lock_sectionDisplayInfoForSectionID:(id)id;
- (void)_incrementCountForSectionID:(id)id;
- (void)_decrementCountForSectionID:(id)id;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_notifyVisibilityChangeForSectionID:(id)id;
- (id)hiddenItemsOfSection:(id)section;
- (void)setSection:(id)section inDowntime:(BOOL)downtime;
- (void)setSection:(id)section hidden:(BOOL)hidden;
- (void)addSectionsInDowntime:(id)downtime;
- (BOOL)isHiddenSection:(id)section;
- (BOOL)isDowntimeHiddenSection:(id)section;
- (BOOL)isDowntimeHiddenBulletin:(id)bulletin;
- (void)addHiddenItem:(id)item;
- (void)addHiddenItems:(id)items ofSection:(id)section;
- (void)clearHiddenItemsOfSection:(id)section;
- (void)removeHiddenBulletin:(id)bulletin;
- (void)recoalesceHiddenItemsOfSection:(id)section;
@end

#endif /* CSLNotificationListDataModel_h */