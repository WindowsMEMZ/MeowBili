//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _UIEventDeferringSystemShellBehaviorDelegate_Protocol_h
#define _UIEventDeferringSystemShellBehaviorDelegate_Protocol_h
@import Foundation;

@protocol _UIEventDeferringSystemShellBehaviorDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
- (BOOL)eventDeferringManagerSystemShellBehavior:(id)behavior shouldSuppressRemoteRuleForOwningElement:(id)element inEnvironment:(id)environment;
- (long long)eventDeferringManagerSystemShellBehavior:(id)behavior compareRemoteRuleOwningElement:(id)element toElement:(id)element inEnvironment:(id)environment;
@end

#endif /* _UIEventDeferringSystemShellBehaviorDelegate_Protocol_h */