//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAutoShortcutContextualAction_h
#define WFAutoShortcutContextualAction_h
@import Foundation;

#include "WFContextualAction.h"
#include "WFAutoShortcutContextualAction.h"

@class LNAutoShortcut, LNAutoShortcutLocalizedPhrase, NSArray, NSNumber, NSString;

@interface WFAutoShortcutContextualAction : WFContextualAction

@property (readonly, nonatomic) WFAutoShortcutContextualAction *parentAction;
@property (readonly, nonatomic) unsigned long long orderOfShortcut;
@property (readonly, nonatomic) NSNumber *cachedProminentDisplayEligibility;
@property (readonly, nonatomic) LNAutoShortcut *autoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, copy, nonatomic) NSArray *alternativePhrases;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL eligibleForProminentDisplay;

/* class methods */
+ (id)allActionsForAutoShortcut:(id)shortcut bundleIdentifier:(id)identifier startIndex:(unsigned long long)index;
+ (id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)display;
+ (id)spotlightDomainIdentifier;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAutoShortcut:(id)shortcut bundleIdentifier:(id)identifier;
- (id)initWithAutoShortcut:(id)shortcut phrase:(id)phrase alternativePhrases:(id)phrases bundleIdentifier:(id)identifier;
- (id)initWithAutoShortcut:(id)shortcut identifier:(id)identifier phrase:(id)phrase alternativePhrases:(id)phrases bundleIdentifier:(id)identifier actionIdentifier:(id)identifier orderOfShortcut:(unsigned long long)shortcut parentAction:(id)action prominentDisplayEligibility:(id)eligibility;
- (id)spotlightItem;
- (BOOL)definesDisplayOrder;
- (unsigned long long)displayOrder;
- (id)relatedApp;
- (id)creationDate;
- (BOOL)isEligibleForProminentDisplay;
- (id)actionBySettingEligibilityForProminentDisplay:(BOOL)display;
- (id)actionForRunningFromSpotlight;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)workflowRunKind;
@end

#endif /* WFAutoShortcutContextualAction_h */