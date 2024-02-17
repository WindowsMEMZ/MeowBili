//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSimpleGraphDatabaseNodeEntity_h
#define HDSimpleGraphDatabaseNodeEntity_h
@import Foundation;

#include "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity
/* class methods */
+ (BOOL)insertNodeWithID:(long long)id version:(long long)version slots:(unsigned long long)slots deleted:(BOOL)deleted database:(id)database error:(id *)error;
+ (BOOL)updateNodeWithID:(long long)id version:(long long)version slots:(unsigned long long)slots deleted:(BOOL)deleted database:(id)database error:(id *)error;
+ (BOOL)deleteNodeWithID:(long long)id database:(id)database error:(id *)error;
+ (id)nodeForID:(long long)id database:(id)database error:(id *)error;
+ (BOOL)enumerateNodesWithPredicate:(id)predicate skipDeleted:(BOOL)deleted limit:(unsigned long long)limit database:(id)database error:(id *)error enumerationHandler:(id /* block */)handler;
+ (id)nodeEntityForeignKey;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)joinClausesForProperty:(id)property;
+ (id)disambiguatedSQLForProperty:(id)property;

/* instance methods */
- (id)init;
@end

#endif /* HDSimpleGraphDatabaseNodeEntity_h */