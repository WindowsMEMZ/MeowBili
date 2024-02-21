//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardInputManagerCangjie_h
#define TIKeyboardInputManagerCangjie_h
@import Foundation;

#include "TIKeyboardInputManagerShapeBased.h"

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) BOOL suchengEnabled;
@property (nonatomic) BOOL supportsEnglish;

/* class methods */
+ (Class)wordSearchClass;

/* instance methods */
- (id)keyboardBehaviors;
- (BOOL)supportsNumberKeySelection;
- (void)syncToLayoutState:(id)state;
- (void)syncWordSearch;
- (void)addInput:(id)input withContext:(id)context;
- (void)syncToKeyboardState:(id)state from:(id)from afterContextChange:(BOOL)change;
- (id)deleteFromInput:(unsigned long long *)input;
- (id)formattedSearchString;
- (void)updateMarkedText;
- (BOOL)firstCandidateIsEnglish;
- (BOOL)selectedCandidateIsEnglish;
- (void)notifyUpdateCandidates:(id)candidates forOperation:(id)operation;
- (BOOL)updateCandidatesWithTIWordSearch:(id)search predictionEnabled:(BOOL)enabled;
- (id)nonstopPunctuationCharacters;
- (unsigned long long)cangjieInputType:(id)type fromPopupVariant:(BOOL)variant;
- (id)cangjieSet;
- (id)cangjieAlphabetSet;
- (BOOL)isPunctuationInput;
- (id)sortingMethods;
@end

#endif /* TIKeyboardInputManagerCangjie_h */