//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EDThreadPersistence_StatementCache_h
#define _EDThreadPersistence_StatementCache_h
@import Foundation;

#include "EDPersistenceDatabaseConnection.h"

@class NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *preparedStatements;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)preparedStatementForQueryString:(id)string;
@end

#endif /* _EDThreadPersistence_StatementCache_h */