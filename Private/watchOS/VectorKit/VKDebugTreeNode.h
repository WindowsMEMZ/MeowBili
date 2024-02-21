//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKDebugTreeNode_h
#define VKDebugTreeNode_h
@import Foundation;

#include "VKDebugTreeNode.h"

@class NSArray, NSString;

@interface VKDebugTreeNode : NSObject

@property (readonly, weak) VKDebugTreeNode *parent;
@property (readonly) NSString *name;
@property (retain) NSArray *children;

/* instance methods */
- (id)initWithParent:(id)parent;
- (BOOL)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)nodes withParameter:(id)parameter;
@end

#endif /* VKDebugTreeNode_h */