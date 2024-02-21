//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextInputStringTokenizer_h
#define UITextInputStringTokenizer_h
@import Foundation;

#include "UITextInputTokenizer-Protocol.h"

@class NSString;
@protocol UIResponder<UITextInput;

@interface UITextInputStringTokenizer : NSObject<UITextInputTokenizer> {
  /* instance variables */
  UIResponder<UITextInput> *_textInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTextInput:(id)input;
- (long long)_indexForTextPosition:(id)position;
- (long long)_distanceForTokenizerWithGranularity:(long long)granularity;
- (id)_closestTokenSubrangeForPosition:(id)position granularity:(long long)granularity downstream:(BOOL)downstream;
- (BOOL)_isDownstreamForDirection:(long long)direction atPosition:(id)position;
- (BOOL)isPosition:(id)position atBoundary:(long long)boundary inDirection:(long long)direction;
- (id)positionFromPosition:(id)position toBoundary:(long long)boundary inDirection:(long long)direction;
- (id)_positionFromPosition:(id)position offset:(unsigned long long)offset affinity:(long long)affinity;
- (BOOL)isPosition:(id)position withinTextUnit:(long long)unit inDirection:(long long)direction;
- (id)rangeEnclosingPosition:(id)position withGranularity:(long long)granularity inDirection:(long long)direction;
@end

#endif /* UITextInputStringTokenizer_h */