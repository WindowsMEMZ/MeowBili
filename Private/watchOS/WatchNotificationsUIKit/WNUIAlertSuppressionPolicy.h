//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertSuppressionPolicy_h
#define WNUIAlertSuppressionPolicy_h
@import Foundation;

#include "WNUIAlertSuppressionPolicy-Protocol.h"
#include "WNUIAlertSuppressionPolicyDelegate-Protocol.h"

@class NSString;

@interface WNUIAlertSuppressionPolicy : NSObject<WNUIAlertSuppressionPolicy>

@property (weak, nonatomic) NSObject<WNUIAlertSuppressionPolicyDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)suppressionRuleForActivatingAlertItem:(id)item withModel:(id)model;
- (id)suppressedIdentitiesForAlertModel:(id)model;
- (void)setNeedsEvaluation;
@end

#endif /* WNUIAlertSuppressionPolicy_h */