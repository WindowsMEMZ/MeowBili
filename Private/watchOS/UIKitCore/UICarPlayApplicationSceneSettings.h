//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICarPlayApplicationSceneSettings_h
#define UICarPlayApplicationSceneSettings_h
@import Foundation;

#include "UIApplicationSceneSettings.h"
#include "UICarPlayApplicationSceneSettings-Protocol.h"

@class NSString;

@interface UICarPlayApplicationSceneSettings : UIApplicationSceneSettings<UICarPlayApplicationSceneSettings>

@property (readonly, nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly, nonatomic) BOOL blackWallpaperModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* UICarPlayApplicationSceneSettings_h */