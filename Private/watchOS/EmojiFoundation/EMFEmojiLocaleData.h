//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFEmojiLocaleData_h
#define EMFEmojiLocaleData_h
@import Foundation;

#include "EMFAnchoredSearchManager.h"
#include "EMFEmojiSearchEngine.h"

@class NSArray, NSString;

@interface EMFEmojiLocaleData : NSObject {
  /* instance variables */
  struct __EmojiLocaleDataWrapper * _localeDataRef;
  BOOL _didTryLoadingSearchEngine;
}

@property (readonly, retain, nonatomic) EMFEmojiSearchEngine *searchEngine;
@property (readonly, retain, nonatomic) EMFAnchoredSearchManager *anchoredSearchManager;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) const struct __EmojiLocaleDataWrapper * emojiLocaleDataRef;
@property (readonly, copy, nonatomic) NSArray *emojiTokens;

/* class methods */
+ (id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
+ (id)emojiLocaleDataWithLocaleIdentifier:(id)identifier;

/* instance methods */
- (id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
- (id)initWithLocaleIdentifier:(id)identifier;
- (void)dealloc;
- (id)description;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)nsoptions;
- (void)enumerateSearchResultsInText:(id)text range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range options:(unsigned long long)options searchType:(int)type usingBlock:(id /* block */)block;
- (id)emojiTokensForText:(id)text phoneticReading:(id)reading options:(unsigned long long)options searchType:(int)type includePrefixMatches:(BOOL)matches;
- (id)emojiTokensForOptions:(unsigned long long)options presentationStyle:(int)style;
- (void)preheatSearchEngine;
- (id)_rawSearchEngineReference;
- (void)enumerateAnchoredReplacementCandidatesForContext:(id)context withOptions:(unsigned int)options usingBlock:(id /* block */)block;
@end

#endif /* EMFEmojiLocaleData_h */