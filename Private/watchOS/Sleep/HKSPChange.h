//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPChange_h
#define HKSPChange_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "HKSPProperty.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol NSObject><NSSecureCoding><NSCopying;

@interface HKSPChange : NSObject<NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) HKSPProperty *property;
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *changedValue;
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *originalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProperty:(id)property changedValue:(id)value originalValue:(id)value;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deepCopy;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* HKSPChange_h */