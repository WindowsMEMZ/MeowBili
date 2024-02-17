//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSQLiteOrderingTerm_h
#define HDSQLiteOrderingTerm_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface HDSQLiteOrderingTerm : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) BOOL ascending;

/* class methods */
+ (id)orderingTermWithProperty:(id)property entityClass:(Class)class ascending:(BOOL)ascending;

/* instance methods */
- (id)init;
- (id)initWithExpression:(id)expression ascending:(BOOL)ascending;
- (id)SQL;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HDSQLiteOrderingTerm_h */