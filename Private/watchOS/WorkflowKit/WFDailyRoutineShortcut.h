//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDailyRoutineShortcut_h
#define WFDailyRoutineShortcut_h
@import Foundation;

#include "WFDailyRoutineShortcutSetupFlow.h"

@class NSArray, NSString, WFImage;

@interface WFDailyRoutineShortcut : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFImage *bannerImage;
@property (readonly, copy, nonatomic) NSArray *actionIcons;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *setupFlow;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle bannerImage:(id)image actionIcons:(id)icons setupFlow:(id)flow;
@end

#endif /* WFDailyRoutineShortcut_h */