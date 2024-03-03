//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageSymbolTransition_h
#define _UIImageSymbolTransition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_UIImageSymbolAnimationPreset-Protocol.h"

@interface _UIImageSymbolTransition : NSObject<_UIImageSymbolAnimationPreset, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) BOOL _validAnimationPreset;
@property (copy, nonatomic) id /* block */ completionHandler;

/* class methods */
+ (id)transition;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)_isValidAnimationPreset;
- (BOOL)_isSymbolEffect;
- (BOOL)_isSymbolTransition;
- (id)_nsSymbolContentTransitionRepresentation;
- (void)_performCompletionHandler;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _UIImageSymbolTransition_h */