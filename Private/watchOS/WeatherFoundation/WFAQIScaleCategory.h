//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFAQIScaleCategory_h
#define WFAQIScaleCategory_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface WFAQIScaleCategory : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *glyph;
@property (copy, nonatomic) NSString *recommendation;
@property (nonatomic) unsigned long long categoryNumber;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic) unsigned long long categoryIndex;
@property (copy, nonatomic) NSString *localizedCategoryDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCategoryIndex:(unsigned long long)index localizedCategoryDescription:(id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToScaleCategory:(id)category;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)debugDescription;
@end

#endif /* WFAQIScaleCategory_h */