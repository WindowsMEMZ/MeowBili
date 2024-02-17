//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSError_HDSQLiteDatabase_h
#define NSError_HDSQLiteDatabase_h
@import Foundation;

#include "HDSQLiteDatabaseDelegate-Protocol.h"
#include "HDSQLiteStatementCache.h"

@class NSError, NSMutableArray, NSNumber, NSString, NSURL;

@interface NSError (HDSQLiteDatabase)
/* class methods */
+ (id)hk_errorWithCodableError:(id)error;

/* instance methods */
- (unsigned short)hd_messageID;
- (id)hd_messageSent;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageIDSDeviceIdentifier;
- (id)hd_persistentUserInfo;
- (BOOL)hd_isFromRequest;
- (BOOL)hd_isResponseTimeout;
- (id)hd_cloudKitErrorRequiringUserAction;
- (BOOL)hd_isManateeIdentityLossError;
- (BOOL)hd_shouldPreventCloudKitCacheUpdate;
- (id)hd_errorStrippingExpectedCloudKitPartialFailures;
- (id)hd_errorStrippingCloudKitPartialFailuresWithShouldIgnoreBlock:(id /* block */)block;
- (BOOL)hd_isCorruptionError;
- (id)hd_errorSurfacingFatalCloudKitPartialFailure;
- (id)hd_errorSurfacingFatalCloudKitPartialFailureForAnalytics;
- (id)hd_errorForAnalytics;
- (void)hd_enumerateCloudKitPartialErrorsWithHandler:(id /* block */)handler;
- (void)hd_enumerateCloudKitPartialErrorsByKeyWithHandler:(id /* block */)handler;
- (double)hd_cloudKitRetryDelay;
- (id)hd_persistentMessage;
- (id)hk_codableError;
- (int)hd_sqliteExtendedErrorCode;
- (BOOL)hd_isDatabaseCorruptionError;
- (BOOL)hd_isNotADatabaseError;
- (BOOL)hd_isConstraintViolation;
- (id)hd_failingSQLStatement;
@end

#endif /* NSError_HDSQLiteDatabase_h */