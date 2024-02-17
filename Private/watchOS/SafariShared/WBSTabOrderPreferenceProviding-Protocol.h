//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTabOrderPreferenceProviding_Protocol_h
#define WBSTabOrderPreferenceProviding_Protocol_h
@import Foundation;

@protocol WBSTabOrderPreferenceProviding <NSObject>

@property (readonly, nonatomic) unsigned long long newTabPosition;
@property (readonly, nonatomic) BOOL newTabPositionAppliesToSpawnedTabs;
@property (readonly, nonatomic) BOOL newBlankTabPositionAppliesToAllBlankTabs;
@property (readonly, nonatomic) BOOL suppressRelatingNewBlankTabs;
@property (readonly, nonatomic) double minimumDelayForRelatingNewBlankTab;

@end

#endif /* WBSTabOrderPreferenceProviding_Protocol_h */