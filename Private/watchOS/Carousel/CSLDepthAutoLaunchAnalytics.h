//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthAutoLaunchAnalytics_h
#define CSLDepthAutoLaunchAnalytics_h
@import Foundation;

#include "CSLMidnightObserver-Protocol.h"
#include "CSLPRFDepthAutoLaunchAppSettingDelegate-Protocol.h"

@class CSLPRFDepthAutoLaunchAppSetting, NSString;

@interface CSLDepthAutoLaunchAnalytics : NSObject<CSLPRFDepthAutoLaunchAppSettingDelegate, CSLMidnightObserver>

@property (retain, nonatomic) CSLPRFDepthAutoLaunchAppSetting *setting;
@property (nonatomic) long long lastBehaviorValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)start:(id)start;
- (void)_sendEvent:(id)event;
- (void)midnightPassed;
- (void)depthAutoLaunchAppSettingDidUpdate:(id)update;
@end

#endif /* CSLDepthAutoLaunchAnalytics_h */