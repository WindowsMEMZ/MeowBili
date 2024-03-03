//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTIStyledIntermediateText_h
#define RTIStyledIntermediateText_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSAttributedString, NSString;

@interface RTIStyledIntermediateText : NSObject<NSSecureCoding> {
  /* instance variables */
  unsigned long long _selectionOffset;
}

@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSAttributedString *displayString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly, nonatomic) NSString *searchString;
@property (nonatomic) long long cursorVisibility;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)intermediateTextWithInputString:(id)string displayString:(id)string;
+ (id)intermediateTextWithInputString:(id)string displayString:(id)string selectionLocation:(unsigned long long)location;
+ (id)intermediateTextWithInputString:(id)string displayString:(id)string selectionLocation:(unsigned long long)location searchString:(id)string;
+ (id)_attributedStringAllowedClasses;

/* instance methods */
- (id)initWithInputString:(id)string displayString:(id)string selectionLocation:(unsigned long long)location searchString:(id)string;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* RTIStyledIntermediateText_h */