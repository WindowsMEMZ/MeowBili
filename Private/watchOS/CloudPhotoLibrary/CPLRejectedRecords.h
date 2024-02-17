//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLRejectedRecords_h
#define CPLRejectedRecords_h
@import Foundation;

@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
  /* instance variables */
  NSMutableDictionary *_records;
  NSMutableDictionary *_reasons;
}

/* instance methods */
- (id)init;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)recordWithScopedIdentifier:(id)identifier;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)identifiers;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)block;
- (BOOL)isEqual:(id)equal;
- (BOOL)rejectsTheSameRecordsAs:(id)as;
- (unsigned long long)count;
- (id)rejectedDescriptions;
@end

#endif /* CPLRejectedRecords_h */