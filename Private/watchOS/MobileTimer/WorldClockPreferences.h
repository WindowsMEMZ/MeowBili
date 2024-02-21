//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef WorldClockPreferences_h
#define WorldClockPreferences_h
@import Foundation;

@interface WorldClockPreferences : NSObject
/* instance methods */
- (id)lastModified;
- (id)cities;
- (BOOL)defaultCitiesAdded;
- (id)defaultsKeys;
- (void)setLastModified:(id)modified;
- (void)setCities:(id)cities;
- (void)setDefaultCitiesAdded:(BOOL)added;
- (BOOL)synchronize;
- (BOOL)cityDataNeedsUpdate;
- (void)cityDataUpdated;
- (void)clearOutCityUpdatePref;
@end

#endif /* WorldClockPreferences_h */