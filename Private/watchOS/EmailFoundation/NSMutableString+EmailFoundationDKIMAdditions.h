//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSMutableString_EmailFoundationDKIMAdditions_h
#define NSMutableString_EmailFoundationDKIMAdditions_h
@import Foundation;

@interface NSMutableString (EmailFoundationDKIMAdditions)
/* instance methods */
- (void)ef_rfc5322Unfold;
- (void)ef_removeCharactersInSet:(id)set beforeOccurrencesOfString:(id)string;
- (void)ef_replaceContiguousSequencesOfCharactersInSet:(id)set withString:(id)string;
- (void)ef_trimLeadingCharactersInSet:(id)set;
- (void)ef_trimTrailingCharactersInSet:(id)set;
- (void)ef_appendSQLEscapedString:(id)string;
- (void)ef_appendQuotedSQLEscapedString:(id)string;
@end

#endif /* NSMutableString_EmailFoundationDKIMAdditions_h */