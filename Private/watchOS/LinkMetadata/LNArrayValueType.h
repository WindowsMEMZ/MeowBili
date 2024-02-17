//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNArrayValueType_h
#define LNArrayValueType_h
@import Foundation;

#include "LNValueType.h"
#include "LNValueType.h"

@interface LNArrayValueType : LNValueType

@property (readonly, copy, nonatomic) LNValueType *memberValueType;
@property (readonly, nonatomic) long long capabilities;

/* class methods */
+ (id)objectClassesForCoding;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMemberValueType:(id)type;
- (id)initWithMemberValueType:(id)type capabilities:(long long)capabilities;
- (BOOL)objectIsMemberOfType:(id)type;
- (Class)objectClass;
- (void)enumerateValuesOfValueType:(id)type value:(id)value block:(id /* block */)block;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LNArrayValueType_h */