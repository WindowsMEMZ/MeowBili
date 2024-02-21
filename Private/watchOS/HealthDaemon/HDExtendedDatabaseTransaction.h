//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDExtendedDatabaseTransaction_h
#define HDExtendedDatabaseTransaction_h
@import Foundation;

#include "HDDatabase.h"

@class NSError, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface HDExtendedDatabaseTransaction : NSObject {
  /* instance variables */
  BOOL _pendingWorkDidSucceed;
  NSObject<OS_dispatch_queue> *_transactionQueue;
  NSObject<OS_dispatch_queue> *_dataQueue;
  NSObject<OS_dispatch_semaphore> *_completionSemaphore;
  NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
  NSObject<OS_dispatch_source> *_automaticRollbackTimer;
  id /* block */ _pendingWork;
  unsigned long long _status;
  NSError *_lastError;
}

@property (readonly, nonatomic) double transactionTimeout;
@property (readonly, nonatomic) double continuationTimeout;
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier;
@property (readonly, weak, nonatomic) HDDatabase *database;

/* instance methods */
- (id)initWithDatabase:(id)database context:(id)context transactionTimeout:(double)timeout continuationTimeout:(double)timeout error:(id *)error;
- (void)dealloc;
- (BOOL)performInTransactionWithErrorOut:(id *)out block:(id /* block */)block;
- (BOOL)commitWithErrorOut:(id *)out;
- (BOOL)rollbackDueToError:(id)error errorOut:(id *)out;
@end

#endif /* HDExtendedDatabaseTransaction_h */