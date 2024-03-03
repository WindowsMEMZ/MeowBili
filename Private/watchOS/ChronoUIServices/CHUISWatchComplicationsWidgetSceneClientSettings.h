//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWatchComplicationsWidgetSceneClientSettings_h
#define CHUISWatchComplicationsWidgetSceneClientSettings_h
@import Foundation;

#include "CHUISWidgetSceneClientSettings.h"

@interface CHUISWatchComplicationsWidgetSceneClientSettings : CHUISWidgetSceneClientSettings

@property (readonly, nonatomic) double curvedTextAngularWidth;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* CHUISWatchComplicationsWidgetSceneClientSettings_h */