//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 619.2.0.0.0
//
#ifndef PRLexiconCursor_h
#define PRLexiconCursor_h
@import Foundation;

#include "PRLexicon.h"

@interface PRLexiconCursor : NSObject {
  /* instance variables */
  PRLexicon *_lexicon;
  struct _LXCursor * _cursor;
}

/* instance methods */
- (id)initWithLexicon:(id)lexicon;
- (void)dealloc;
- (void)_advance:(id)_advance;
- (void)advanceWithCombinedCharacterSequence:(id)sequence;
- (void)advanceWithString:(id)string;
- (BOOL)isValid;
- (BOOL)hasEntries;
- (BOOL)hasChildren;
- (double)prefixProbability;
- (double)terminationProbability;
- (void)enumerateEntriesUsingBlock:(id /* block */)block;
- (void)_enumerateCompletions:(unsigned long long)completions usingBlock:(id /* block */)block;
- (void)enumerateCompletions:(unsigned long long)completions usingBlock:(id /* block */)block;
- (void)enumerateCompletionEntries:(unsigned long long)entries usingBlock:(id /* block */)block;
@end

#endif /* PRLexiconCursor_h */