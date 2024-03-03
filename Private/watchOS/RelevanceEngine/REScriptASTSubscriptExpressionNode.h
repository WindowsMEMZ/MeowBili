//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REScriptASTSubscriptExpressionNode_h
#define REScriptASTSubscriptExpressionNode_h
@import Foundation;

#include "REScriptASTNode.h"
#include "REScriptASTNode.h"

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *expression;
@property (readonly, nonatomic) REScriptASTNode *startIndex;
@property (readonly, nonatomic) REScriptASTNode *endIndex;

/* class methods */
+ (id)parseBuffer:(id)buffer error:(id *)error;

/* instance methods */
- (id)initWithExpression:(id)expression startIndex:(id)index endIndex:(id)index;
- (id)dependencies;
@end

#endif /* REScriptASTSubscriptExpressionNode_h */