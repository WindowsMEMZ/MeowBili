//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIFocusDebugger_h
#define UIFocusDebugger_h
@import Foundation;

@interface UIFocusDebugger : NSObject
/* class methods */
+ (id)help;
+ (id)status;
+ (id)_verboseStatus;
+ (id)_statusForFocusSystem:(id)system scene:(id)scene includeSceneLog:(BOOL)log includeDeferralTarget:(BOOL)target;
+ (id)_legacy_checkFocusabilityForView:(id)view;
+ (id)checkFocusabilityForItem:(id)item;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)environment;
+ (id)_ancestryForEnvironment:(id)environment;
+ (id)checkFocusGroupTreeForEnvironment:(id)environment;
+ (id)focusGroupsForEnvironment:(id)environment;
+ (id)preferredFocusEnvironmentsForEnvironment:(id)environment;
@end

#endif /* UIFocusDebugger_h */