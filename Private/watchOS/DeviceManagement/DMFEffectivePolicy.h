//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFEffectivePolicy_h
#define DMFEffectivePolicy_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface DMFEffectivePolicy : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSDictionary *currentPoliciesByIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *prioritiesByIdentifier;
@property (readonly, nonatomic) long long defaultPolicy;
@property (readonly, nonatomic) unsigned long long defaultPriority;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL downtimeEnforced;
@property (readonly, copy, nonatomic) NSSet *excludedIdentifiers;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)unblockableBundleIdentifiers;
+ (id)unblockableCategoryIdentifiers;
+ (id)systemCategoryIdentifiers;
+ (id)downtimeCategoryIdentifiers;

/* instance methods */
- (long long)policyForHostName:(id)name;
- (unsigned long long)priorityForHostName:(id)name;
- (id)initWithType:(id)type defaultPolicy:(long long)policy currentPoliciesByIdentifier:(id)identifier defaultPriority:(unsigned long long)priority prioritiesByIdentifier:(id)identifier excludedIdentifiers:(id)identifiers;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (long long)policyForIdentifier:(id)identifier excludableIdentifiers:(id)identifiers;
- (long long)priorityForIdentifier:(id)identifier;
- (id)_valueForMatchingHostName:(id)name inRegisteredHostNames:(id)names;
@end

#endif /* DMFEffectivePolicy_h */