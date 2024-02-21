//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMSampleAttributeFilter_h
#define MXMSampleAttributeFilter_h
@import Foundation;

#include "MXMSampleAttribute.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSNumber, NSSet, NSString;

@interface MXMSampleAttributeFilter : MXMSampleAttribute<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSArray *_matchingStringAttributeValues;
  NSArray *_matchingNumericAttributeValues;
}

@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic) BOOL isFinite;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSSet *values;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) NSSet *stringValues;
@property (readonly, copy, nonatomic) NSSet *numericValues;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAttribute:(id)attribute;
- (id)initWithAttributeName:(id)name stringValue:(id)value;
- (id)initWithAttributeName:(id)name stringValues:(id)values;
- (id)initWithAttributeName:(id)name numericValue:(id)value;
- (id)initWithAttributeName:(id)name numericValues:(id)values;
- (id)initWithAttributeName:(id)name valueType:(long long)type value:(id)value;
- (BOOL)_matchesSampleAttributeValueWithValue:(id)value;
- (BOOL)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)type;
- (BOOL)_matchesSampleAttributeNameWithName:(id)name;
- (BOOL)matchesSampleWithAttribute:(id)attribute;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MXMSampleAttributeFilter_h */