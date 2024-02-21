//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRITaskQueuingOptions_h
#define TRITaskQueuingOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface TRITaskQueuingOptions : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

/* class methods */
+ (id)defaultOptionsWithIgnoreDuplicates;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)resolution;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDuplicateTaskResolution:(unsigned long long)resolution;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)resolution;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToOptions:(id)options;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)defaultEncodeWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)init;
@end

#endif /* TRITaskQueuingOptions_h */