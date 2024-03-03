//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _bmFMDatabase_h
#define _bmFMDatabase_h
@import Foundation;

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface _bmFMDatabase : NSObject {
  /* instance variables */
  void * _db;
  BOOL _isExecutingStatement;
  double _startBusyRetryTime;
  NSMutableSet *_openResultSets;
  NSMutableSet *_openFunctions;
  NSDateFormatter *_dateFormat;
}

@property (nonatomic) unsigned int applicationID;
@property (nonatomic) unsigned int userVersion;
@property BOOL traceExecution;
@property BOOL checkedOut;
@property BOOL crashOnErrors;
@property BOOL logsErrors;
@property (retain) NSMutableDictionary *cachedStatements;
@property (nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL goodConnection;
@property (readonly, nonatomic) long long lastInsertRowId;
@property (readonly, nonatomic) int changes;
@property (readonly, nonatomic) BOOL isInTransaction;
@property (readonly, nonatomic) BOOL hasOpenResultSets;
@property (nonatomic) BOOL shouldCacheStatements;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) void * sqliteHandle;
@property (nonatomic) double maxBusyRetryTimeInterval;

/* class methods */
+ (id)databaseWithPath:(id)path;
+ (id)databaseWithURL:(id)url;
+ (id)FMDBUserVersion;
+ (int)FMDBVersion;
+ (id)sqliteLibVersion;
+ (BOOL)isSQLiteThreadSafe;
+ (id)storeableDateFormat:(id)format;

/* instance methods */
- (id)stringForQuery:(id)query;
- (int)intForQuery:(id)query;
- (long long)longForQuery:(id)query;
- (BOOL)boolForQuery:(id)query;
- (double)doubleForQuery:(id)query;
- (id)dataForQuery:(id)query;
- (id)dateForQuery:(id)query;
- (BOOL)tableExists:(id)exists;
- (id)getSchema;
- (id)getTableSchema:(id)schema;
- (BOOL)columnExists:(id)exists inTableWithName:(id)name;
- (BOOL)columnExists:(id)exists columnName:(id)name;
- (BOOL)validateSQL:(id)sql error:(id *)error;
- (id)init;
- (id)initWithURL:(id)url;
- (id)initWithPath:(id)path;
- (void)dealloc;
- (const char *)sqlitePath;
- (int)limitFor:(int)for value:(int)value;
- (BOOL)open;
- (BOOL)openWithFlags:(int)flags;
- (BOOL)openWithFlags:(int)flags vfs:(id)vfs;
- (BOOL)close;
- (int)busyRetryTimeout;
- (void)setBusyRetryTimeout:(int)timeout;
- (void)closeOpenResultSets;
- (void)resultSetDidClose:(id)close;
- (void)clearCachedStatements;
- (id)cachedStatementForQuery:(id)query;
- (void)setCachedStatement:(id)statement forQuery:(id)query;
- (BOOL)rekey:(id)rekey;
- (BOOL)rekeyWithData:(id)data;
- (BOOL)setKey:(id)key;
- (BOOL)setKeyWithData:(id)data;
- (BOOL)hasDateFormatter;
- (void)setDateFormat:(id)format;
- (id)dateFromString:(id)string;
- (id)stringFromDate:(id)date;
- (void)warnInUse;
- (BOOL)databaseExists;
- (id)lastErrorMessage;
- (BOOL)hadError;
- (int)lastErrorCode;
- (int)lastExtendedErrorCode;
- (id)errorWithMessage:(id)message;
- (id)lastError;
- (int)bindObject:(id)object toColumn:(int)column inStatement:(struct sqlite3_stmt *)statement;
- (void)extractSQL:(id)sql argumentsList:(char *)list intoString:(id)string arguments:(id)arguments;
- (id)executeQuery:(id)query withParameterDictionary:(id)dictionary;
- (id)executeQuery:(id)query withArgumentsInArray:(id)array orDictionary:(id)dictionary orVAList:(char *)valist shouldBind:(BOOL)bind;
- (BOOL)bindStatement:(struct sqlite3_stmt *)statement WithArgumentsInArray:(id)array orDictionary:(id)dictionary orVAList:(char *)valist;
- (id)executeQuery:(id)query;
- (id)executeQueryWithFormat:(id)format;
- (id)executeQuery:(id)query withArgumentsInArray:(id)array;
- (id)executeQuery:(id)query values:(id)values error:(id *)error;
- (id)executeQuery:(id)query withVAList:(char *)valist;
- (BOOL)executeUpdate:(id)update error:(id *)error withArgumentsInArray:(id)array orDictionary:(id)dictionary orVAList:(char *)valist;
- (BOOL)executeUpdate:(id)update;
- (BOOL)executeUpdate:(id)update withArgumentsInArray:(id)array;
- (BOOL)executeUpdate:(id)update values:(id)values error:(id *)error;
- (BOOL)executeUpdate:(id)update withParameterDictionary:(id)dictionary;
- (BOOL)executeUpdate:(id)update withVAList:(char *)valist;
- (BOOL)executeUpdateWithFormat:(id)format;
- (BOOL)executeStatements:(id)statements;
- (BOOL)executeStatements:(id)statements withResultBlock:(id /* block */)block;
- (BOOL)executeUpdate:(id)update withErrorAndBindings:(id *)bindings;
- (BOOL)update:(id)update withErrorAndBindings:(id *)bindings;
- (id)prepare:(id)prepare;
- (BOOL)rollback;
- (BOOL)commit;
- (BOOL)beginTransaction;
- (BOOL)beginDeferredTransaction;
- (BOOL)beginImmediateTransaction;
- (BOOL)beginExclusiveTransaction;
- (BOOL)inTransaction;
- (BOOL)interrupt;
- (BOOL)startSavePointWithName:(id)name error:(id *)error;
- (BOOL)releaseSavePointWithName:(id)name error:(id *)error;
- (BOOL)rollbackToSavePointWithName:(id)name error:(id *)error;
- (id)inSavePoint:(id /* block */)point;
- (BOOL)checkpoint:(int)checkpoint error:(id *)error;
- (BOOL)checkpoint:(int)checkpoint name:(id)name error:(id *)error;
- (BOOL)checkpoint:(int)checkpoint name:(id)name logFrameCount:(int *)count checkpointCount:(int *)count error:(id *)error;
- (void)makeFunctionNamed:(id)named maximumArguments:(int)arguments withBlock:(id /* block */)block;
- (void)makeFunctionNamed:(id)named arguments:(int)arguments block:(id /* block */)block;
- (int)valueType:(void *)type;
- (int)valueInt:(void *)int;
- (long long)valueLong:(void *)long;
- (double)valueDouble:(void *)double;
- (id)valueData:(void *)data;
- (id)valueString:(void *)string;
- (void)resultNullInContext:(void *)context;
- (void)resultInt:(int)int context:(void *)context;
- (void)resultLong:(long long)long context:(void *)context;
- (void)resultDouble:(double)double context:(void *)context;
- (void)resultData:(id)data context:(void *)context;
- (void)resultString:(id)string context:(void *)context;
- (void)resultError:(id)error context:(void *)context;
- (void)resultErrorCode:(int)code context:(void *)context;
- (void)resultErrorNoMemoryInContext:(void *)context;
- (void)resultErrorTooBigInContext:(void *)context;
@end

#endif /* _bmFMDatabase_h */