//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUIAccountOperationsHelper_h
#define ACUIAccountOperationsHelper_h
@import Foundation;

#include "ACUIAccountOperationsDelegate-Protocol.h"

@class ACAccountStore;
@protocol OS_dispatch_queue;

@interface ACUIAccountOperationsHelper : NSObject {
  /* instance variables */
  ACAccountStore *_accountStore;
  NSObject<OS_dispatch_queue> *_accountOperationsQueue;
}

@property BOOL isSavingAccount;
@property BOOL isRemovingAccount;
@property (weak, nonatomic) NSObject<ACUIAccountOperationsDelegate> *delegate;

/* instance methods */
- (id)initWithAccountStore:(id)store;
- (id)dataclassActionsForAccountSave:(id)save forDataclass:(id)dataclass error:(id *)error;
- (void)saveAccount:(id)account;
- (void)saveAccount:(id)account requireVerification:(BOOL)verification;
- (void)saveAccount:(id)account requireVerification:(BOOL)verification completion:(id /* block */)completion;
- (void)saveAccount:(id)account withDataclassActions:(id)actions;
- (void)saveAccount:(id)account withDataclassActions:(id)actions requireVerification:(BOOL)verification;
- (void)saveAccount:(id)account withDataclassActions:(id)actions requireVerification:(BOOL)verification completion:(id /* block */)completion;
- (void)removeAccount:(id)account;
- (id)_desiredDataclassActionsFromPossibleActions:(id)actions forAccount:(id)account withError:(id *)error;
@end

#endif /* ACUIAccountOperationsHelper_h */