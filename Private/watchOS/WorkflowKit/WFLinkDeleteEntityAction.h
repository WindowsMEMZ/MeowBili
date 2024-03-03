//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkDeleteEntityAction_h
#define WFLinkDeleteEntityAction_h
@import Foundation;

#include "WFLinkEntityAction.h"

@interface WFLinkDeleteEntityAction : WFLinkEntityAction
/* class methods */
+ (id)overrideInputParameterNames;

/* instance methods */
- (id)verb;
- (id)entityParameterName;
- (id)overrideEntityName;
- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (BOOL)deletesInput;
- (Class)contentItemClass;
- (id)itemsBeingDeleted;
@end

#endif /* WFLinkDeleteEntityAction_h */