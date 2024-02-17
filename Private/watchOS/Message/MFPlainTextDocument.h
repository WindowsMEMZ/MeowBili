//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFPlainTextDocument_h
#define MFPlainTextDocument_h
@import Foundation;

@class BOOL *, NSMutableArray, NSMutableString;

@interface MFPlainTextDocument : NSObject {
  /* instance variables */
  NSMutableString *_text;
  NSMutableArray *_fragments;
}

/* instance methods */
- (void)getFormatFlowedString:(id *)string insertedTrailingSpaces:(BOOL *)spaces encoding:(unsigned int)encoding;
- (id)quotedString:(unsigned int)string;
- (void)appendString:(id)string withQuoteLevel:(unsigned int)level;
- (unsigned long long)fragmentCount;
- (void)getString:(id *)string quoteLevel:(unsigned int *)level ofFragmentAtIndex:(unsigned long long)index;
- (id)string;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)representation;
@end

#endif /* MFPlainTextDocument_h */