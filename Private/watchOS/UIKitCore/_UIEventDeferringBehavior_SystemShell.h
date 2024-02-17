//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIEventDeferringBehavior_SystemShell_h
#define _UIEventDeferringBehavior_SystemShell_h
@import Foundation;

#include "_UIEventDeferringBehavior_Default.h"
#include "BSDebugDescriptionProviding-Protocol.h"

@class NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

@interface _UIEventDeferringBehavior_SystemShell : _UIEventDeferringBehavior_Default<BSDebugDescriptionProviding> {
  /* instance variables */
  struct { unsigned int x :1 hasSystemShellBehaviorDelegate; unsigned int x :1 delegateWantsLocalCompatibilityRules; unsigned int x :1 delegateShouldSuppressRemoteRule; unsigned int x :1 delegateCompareRemoteRules; } _behaviorDelegateFlags;
  NSObject<_UIEventDeferringSystemShellBehaviorDelegate> *_systemShellBehaviorDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventDeferringManager:(id)manager;
- (id)systemShellBehaviorDelegate;
- (void)setSystemShellBehaviorDelegate:(id)delegate;
- (BOOL)wantsLocalCompatibilityRules;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (BOOL)shouldSuppressRemoteRuleForOwningElement:(id)element inEnvironment:(id)environment;
- (long long)compareRemoteRuleOwningElement:(id)element toElement:(id)element inEnvironment:(id)environment;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* _UIEventDeferringBehavior_SystemShell_h */