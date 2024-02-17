//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBSQLQueryIterator_h
#define HMBSQLQueryIterator_h
@import Foundation;

#include "NSEnumerator.h"
#include "HMBSQLQueryStatement.h"

@class BOOL *, NSError, NSMutableArray, NSNumber;

@interface HMBSQLQueryIterator : NSEnumerator

@property (readonly, nonatomic) HMBSQLQueryStatement *statement;
@property (readonly, nonatomic) unsigned long long maximumRowsPerQuery;
@property (retain, nonatomic) NSMutableArray *cachedResults;
@property (retain, nonatomic) NSNumber *currentSequence;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int sequenceBindOffset;

/* class methods */
+ (unsigned long long)maximumRowsPerSelect;
+ (void)setMaximumRowsPerSelect:(unsigned long long)select;

/* instance methods */
- (id)initWithStatement:(id)statement initialSequence:(id)sequence maximumRowsPerSelect:(unsigned long long)select;
- (id)initWithStatement:(id)statement initialSequence:(id)sequence maximumRowsPerSelect:(unsigned long long)select error:(id)error;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)statement skip:(BOOL *)skip updatedSequence:(unsigned long long *)sequence error:(id *)error;
- (id)fetchRow:(id)row error:(id *)error;
- (id)nextObject;
- (void)enumerateObjectsUsingBlock:(id /* block */)block;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)statement error:(id *)error;
@end

#endif /* HMBSQLQueryIterator_h */