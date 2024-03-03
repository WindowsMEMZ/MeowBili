//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSSQLiteConnection_h
#define AMSSQLiteConnection_h
@import Foundation;

#include "AMSSQLiteConnectionDelegate-Protocol.h"
#include "AMSSQLiteConnectionOptions.h"

@class NSError, NSMapTable, NSMutableArray;

@interface AMSSQLiteConnection : NSObject {
  /* instance variables */
  NSMutableArray *_afterTransactionBlocks;
  struct sqlite3 * _database;
  BOOL _didResetForCorruption;
  NSMapTable *_preparedStatements;
  long long _transactionDepth;
  BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) NSObject<AMSSQLiteConnectionDelegate> *delegate;
@property (readonly, nonatomic) long long lastChangeCount;

/* instance methods */
- (id)initWithOptions:(id)options;
- (void)dealloc;
- (BOOL)close;
- (void)dispatchAfterTransaction:(id /* block */)transaction;
- (void)executePreparedQuery:(id)query withResults:(id /* block */)results;
- (BOOL)executePreparedStatement:(id)statement error:(id *)error;
- (BOOL)executePreparedStatement:(id)statement error:(id *)error bindings:(id /* block */)bindings;
- (void)executeQuery:(id)query withResults:(id /* block */)results;
- (BOOL)executeStatement:(id)statement error:(id *)error;
- (BOOL)executeStatement:(id)statement error:(id *)error bindings:(id /* block */)bindings;
- (BOOL)finalizePreparedStatement:(id)statement error:(id *)error;
- (BOOL)openWithError:(id *)error;
- (void)performTransaction:(id /* block */)transaction;
- (id)prepareStatement:(id)statement error:(id *)error;
- (BOOL)truncate;
- (BOOL)executeWithError:(id *)error usingBlock:(id /* block */)block;
- (BOOL)_close;
- (BOOL)_executeStatement:(id)statement error:(id *)error;
- (BOOL)_executeWithError:(id *)error usingBlock:(id /* block */)block;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (BOOL)_openWithError:(id *)error;
- (BOOL)_openAndAllowRetry:(BOOL)retry error:(id *)error;
- (BOOL)_performResetAfterCorruptionError;
- (id)_prepareStatement:(id)statement error:(id *)error;
- (BOOL)_resetAfterCorruptionError;
- (BOOL)_resetAfterIOError;
- (id)_statementForPreparedStatement:(id)statement error:(id *)error;
- (id)_verifiedStatementForPreparedStatement:(id)statement error:(id *)error;
- (id)_verifiedStatementForSQL:(id)sql error:(id *)error;
@end

#endif /* AMSSQLiteConnection_h */