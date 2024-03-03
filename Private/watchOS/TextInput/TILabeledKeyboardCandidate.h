//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILabeledKeyboardCandidate_h
#define TILabeledKeyboardCandidate_h
@import Foundation;

#include "TIKeyboardCandidateSingle.h"

@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {
  /* instance variables */
  long long _transliterationType;
  BOOL _transliterationCandidate;
}

@property (copy, nonatomic) NSString *label;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (int)type;

/* instance methods */
- (id)initWithCandidate:(id)candidate forInput:(id)input label:(id)label;
- (id)initWithCandidate:(id)candidate forInput:(id)input label:(id)label transliterationType:(long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isTransliterationCandidate;
- (BOOL)isEqual:(id)equal;
- (id)initWithCandidateResultSetCoder:(id)coder;
- (void)encodeWithCandidateResultSetCoder:(id)coder;
@end

#endif /* TILabeledKeyboardCandidate_h */