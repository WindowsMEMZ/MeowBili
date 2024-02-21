//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCreateNoteAction_h
#define WFCreateNoteAction_h
@import Foundation;

#include "WFLinkCreateEntityAction.h"

@interface WFCreateNoteAction : WFLinkCreateEntityAction
/* class methods */
+ (id)overrideInputParameterName;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (id)localizedKeyParameterDisplayName;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (BOOL)inputRequired;
- (id)serializedParametersForDonatedIntent:(id)intent allowDroppingUnconfigurableValues:(BOOL)values;
- (id)entityName;
- (BOOL)shouldOverrideParameterSummary;
- (id)overrideParameterSummary;
- (id)overrideDescriptionSummary;
- (id)parameterOverrides;
- (BOOL)openWhenRunParameterIsHidden;
- (BOOL)shouldLocalizeValueForSelector:(SEL)selector;
- (id)keywords;
- (unsigned long long)outputDisclosureLevel;
@end

#endif /* WFCreateNoteAction_h */