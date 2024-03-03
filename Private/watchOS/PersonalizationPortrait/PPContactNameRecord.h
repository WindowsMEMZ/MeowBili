//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPContactNameRecord_h
#define PPContactNameRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface PPContactNameRecord : NSObject<NSSecureCoding, NSCopying>
/* class methods */
+ (id)describeSource:(unsigned char)source;
+ (id)describeChangeType:(unsigned char)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init_;
- (id)initWithIdentifier:(id)identifier score:(double)score source:(unsigned char)source sourceIdentifier:(id)identifier changeType:(unsigned char)type firstName:(id)name phoneticFirstName:(id)name middleName:(id)name phoneticMiddleName:(id)name lastName:(id)name phoneticLastName:(id)name organizationName:(id)name jobTitle:(id)title nickname:(id)nickname relatedNames:(id)names streetNames:(id)names cityNames:(id)names;
- (id)description;
- (id)identifier;
- (double)score;
- (unsigned char)source;
- (unsigned char)changeType;
- (id)sourceIdentifier;
- (id)firstName;
- (id)phoneticFirstName;
- (id)middleName;
- (id)phoneticMiddleName;
- (id)lastName;
- (id)phoneticLastName;
- (id)organizationName;
- (id)jobTitle;
- (id)nickname;
- (id)relatedNames;
- (id)streetNames;
- (id)cityNames;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToContactNameRecord:(id)record;
- (long long)compare:(id)compare;
@end

#endif /* PPContactNameRecord_h */