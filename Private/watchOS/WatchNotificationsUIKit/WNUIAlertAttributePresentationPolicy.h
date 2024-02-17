//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertAttributePresentationPolicy_h
#define WNUIAlertAttributePresentationPolicy_h
@import Foundation;

#include "WNUIAlertPresentationPolicy-Protocol.h"

@class NSString;

@interface WNUIAlertAttributePresentationPolicy : NSObject<WNUIAlertPresentationPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)presentationRuleForExistingAlertItem:(id)item incomingAlertItem:(id)item;
- (double)scoreForAttributes:(id)attributes;
- (double)scoreForAttribute:(id)attribute;
- (double)scoreForInteractivityAlertAttribute:(id)attribute;
- (double)scoreForPriorityAlertAttribute:(id)attribute;
- (double)scoreForPrivacyAlertAttribute:(id)attribute;
- (double)scoreForInSessionAttribute:(id)attribute;
- (double)scoreForSystemRestartAlertAttribute:(id)attribute;
@end

#endif /* WNUIAlertAttributePresentationPolicy_h */