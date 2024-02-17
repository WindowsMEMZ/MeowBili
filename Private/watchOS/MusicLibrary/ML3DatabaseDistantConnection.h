//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3DatabaseDistantConnection_h
#define ML3DatabaseDistantConnection_h
@import Foundation;

#include "ML3DatabaseConnection.h"
#include "MLMediaLibraryService.h"

@class NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
  /* instance variables */
  MLMediaLibraryService *_mediaLibraryService;
  NSUUID *_currentTransactionID;
  BOOL _connectionOpen;
}

@property (weak, nonatomic) NSObject<ML3DatabaseDistantConnectionDelegate> *distantDelegate;

/* instance methods */
- (id)initWithDatabasePath:(id)path;
- (void)dealloc;
- (struct sqlite3 *)_sqliteHandle;
- (BOOL)shouldCacheStatements;
- (BOOL)isOpen;
- (BOOL)isReadOnly;
- (void)setReadOnly:(BOOL)only;
- (id)currentTransactionID;
- (BOOL)_openWithFlags:(int)flags;
- (BOOL)close;
- (BOOL)registerFunctionName:(id)name argumentCount:(int)count block:(id /* block */)block;
- (BOOL)registerFunctionName:(id)name argumentCount:(int)count functionPointer:(undefined *)pointer userData:(void *)data;
- (BOOL)registerModule:(id)module;
- (id)openBlobInTable:(id)table column:(id)column row:(long long)row readOnly:(BOOL)only;
- (int)checkpointDatabase;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)type;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)type isRetry:(BOOL)retry;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)commit;
- (id)_internalExecuteQuery:(id)query withParameters:(id)parameters limitProperty:(id)property limitValue:(long long)value;
- (BOOL)_internalExecuteUpdate:(id)update withParameters:(id)parameters error:(id *)error;
- (void)_serviceTerminatedTransactionNotification:(id)notification;
@end

#endif /* ML3DatabaseDistantConnection_h */