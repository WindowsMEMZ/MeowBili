//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityStyleSettingsBinder_h
#define CSLSensorActivityStyleSettingsBinder_h
@import Foundation;

#include "CSLSceneSettingsBinder.h"

@interface CSLSensorActivityStyleSettingsBinder : CSLSceneSettingsBinder

@property (nonatomic) BOOL sensorActivityIndicatorVisible;

/* instance methods */
- (void)_amendSceneSettings:(id)settings forScene:(id)scene transitionContext:(id)context reason:(unsigned long long)reason;
- (BOOL)_isEligibleScene:(id)scene withSettings:(id)settings;
- (BOOL)isSensorActivityIndicatorVisible;
@end

#endif /* CSLSensorActivityStyleSettingsBinder_h */