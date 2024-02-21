//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABGroupMembershipPredicate_h
#define ABGroupMembershipPredicate_h
@import Foundation;

#include "ABPredicate.h"

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate

@property (nonatomic) void * group;
@property (nonatomic) void * store;
@property (copy, nonatomic) NSString *accountIdentifier;

/* instance methods */
- (void)dealloc;
- (BOOL)isValid;
- (id)queryWhereStringForPredicateIdentifier:(int)identifier;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection * x0; struct sqlite3_stmt * x1; double x2; BOOL x3; } *)statement withBindingOffset:(int *)offset predicateIdentifier:(int)identifier;
- (id)description;
@end

#endif /* ABGroupMembershipPredicate_h */