//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSpeechString_h
#define TTSSpeechString_h
@import Foundation;

#include "TTSSpeechString.h"

@class NSMutableArray, NSString;

@interface TTSSpeechString : NSObject

@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) TTSSpeechString *parentString;
@property (retain, nonatomic) NSString *transformedString;
@property (retain, nonatomic) NSMutableArray *transformations;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) NSString *defrostedTransformedString;

/* instance methods */
- (id)initWithParentSpeechString:(id)string;
- (id)initWithOriginalString:(id)string;
- (id)initWithSSMLString:(id)ssmlstring;
- (BOOL)transformRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range to:(id)to;
- (BOOL)insertAtLocation:(unsigned long long)location string:(id)string;
- (BOOL)encapsulateSubstringAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withPrefix:(id)prefix andSuffix:(id)suffix;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })translateRangeInTransformedString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_translateRangeInTransformedString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })string withParent:(id)parent;
- (id)_transformedStringNonMutating;
- (BOOL)_rangeIsValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })valid;
- (void)_insertTransformation:(id)transformation forEncapsulatedTerminator:(BOOL)terminator;
@end

#endif /* TTSSpeechString_h */