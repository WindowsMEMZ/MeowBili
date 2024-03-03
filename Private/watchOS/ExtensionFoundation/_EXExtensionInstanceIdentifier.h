//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXExtensionInstanceIdentifier_h
#define _EXExtensionInstanceIdentifier_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface _EXExtensionInstanceIdentifier : NSObject<NSSecureCoding>

@property (readonly) NSUUID *identifier;
@property (readonly, @dynamic) BOOL isDefault;

/* class methods */
+ (id)defaultInstanceIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualInstanceIdentifier:(id)identifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* _EXExtensionInstanceIdentifier_h */