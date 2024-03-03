//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSProcessExecutionStrategy_h
#define FBSProcessExecutionStrategy_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject<NSCopying, BSDescriptionProviding> {
  /* instance variables */
  unsigned int _bksReason;
  unsigned int _bksFlags;
}

@property (copy, nonatomic) NSString *strategyName;
@property (nonatomic) long long schedulingPolicy;
@property (nonatomic) long long graphicsPolicy;
@property (nonatomic) long long jetsamPolicy;
@property (nonatomic) BOOL customPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)userInteractive;
+ (id)userInteractiveWithoutUI;
+ (id)backgroundWithUI;
+ (id)background;
+ (id)strategyForSchedulingPolicy:(long long)policy graphicsPolicy:(long long)policy jetsamPolicy:(long long)policy;
+ (id)policyWithReason:(unsigned int)reason flags:(unsigned int)flags;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isCustomPolicy;
@end

#endif /* FBSProcessExecutionStrategy_h */