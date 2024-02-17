//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathNumberExpression_h
#define SCRCMathNumberExpression_h
@import Foundation;

#include "SCRCMathSimpleExpression.h"

@interface SCRCMathNumberExpression : SCRCMathSimpleExpression
/* instance methods */
- (BOOL)isNumber;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed;
- (id)mathMLString;
@end

#endif /* SCRCMathNumberExpression_h */