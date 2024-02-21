//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBrowserWindowSettings_h
#define _SFBrowserWindowSettings_h
@import Foundation;

@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject {
  /* instance variables */
  NSMutableDictionary *_settingsDictionary;
  BOOL _synchronizeScheduled;
}

@property (readonly, nonatomic) BOOL hasPrivateBrowsingWindow;
@property (nonatomic) BOOL invalidatesClosedWindows;

/* class methods */
+ (id)settings;
+ (void)setSharedSettings:(id)settings;

/* instance methods */
- (id)init;
- (void)validateWindowSettingsWithUUIDs:(id)uuids;
- (void)_initializeSettingsDictionaryIfNeeded;
- (void)_setBool:(BOOL)bool forKey:(id)key windowUUID:(id)uuid;
- (void)setData:(id)data forKey:(id)key forWindowWithUUID:(id)uuid;
- (id)dataForKey:(id)key forWindowWithUUID:(id)uuid;
- (id)_numberForKey:(id)key windowUUID:(id)uuid;
- (BOOL)_boolValueForKey:(id)key windowUUID:(id)uuid;
- (id)_stringForKey:(id)key windowUUID:(id)uuid;
- (void)_setString:(id)string forKey:(id)key windowUUID:(id)uuid;
- (BOOL)privateBrowsingEnabledForWindowWithUUID:(id)uuid;
- (void)setPrivateBrowsingEnabled:(BOOL)enabled forWindowWithUUID:(id)uuid;
- (BOOL)activeDocumentIsValidForWindowWithUUID:(id)uuid;
- (void)setActiveDocumentIsValid:(BOOL)valid forWindowWithUUID:(id)uuid;
- (BOOL)isShowingTabViewForWindowWithUUID:(id)uuid;
- (void)setIsShowingTabView:(BOOL)view forWindowWithUUID:(id)uuid;
- (id)blankSnapshotGroupIdentifierForPrivateBrowsing:(BOOL)browsing syncableTabGroupUUID:(id)uuid forWindowWithUUID:(id)uuid;
- (void)setBlankSnapshotGroupIdentifier:(id)identifier forPrivateBrowsing:(BOOL)browsing syncableTabGroupUUID:(id)uuid forWindowWithUUID:(id)uuid;
- (id)_blankSnapshotKeyForPrivateBrowsing:(BOOL)browsing syncableTabGroupUUID:(id)uuid;
- (void)removeWindowWithUUID:(id)uuid;
- (void)synchronize;
- (void)_synchronizeNow;
@end

#endif /* _SFBrowserWindowSettings_h */