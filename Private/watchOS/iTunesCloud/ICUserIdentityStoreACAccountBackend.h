//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICUserIdentityStoreACAccountBackend_h
#define ICUserIdentityStoreACAccountBackend_h
@import Foundation;

#include "ICMonitoredAccountStore.h"
#include "ICMonitoredAccountStoreObserver-Protocol.h"
#include "ICUserIdentityStoreBackend-Protocol.h"
#include "ICUserIdentityStoreBackendDelegate-Protocol.h"

@class ACAccount, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ICUserIdentityStoreACAccountBackend : NSObject<ICMonitoredAccountStoreObserver, ICUserIdentityStoreBackend> {
  /* instance variables */
  ICMonitoredAccountStore *_monitoredAccountStore;
  NSMutableDictionary *_identityPropertiesCache;
  ACAccount *_primaryICloudAccount;
  NSNumber *_activeAccountDSID;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICUserIdentityStoreBackendDelegate> *delegate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)activeAccountDSIDWithError:(id *)error;
- (BOOL)updateActiveAccountDSID:(id)dsid error:(id *)error;
- (id)activeLockerAccountDSIDWithError:(id *)error;
- (BOOL)updateActiveLockerAccountDSID:(id)dsid error:(id *)error;
- (BOOL)disableLockerAccountDSID:(id)dsid error:(id *)error;
- (id)identityPropertiesForDSID:(id)dsid error:(id *)error;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)error;
- (void)removeIdentityForDSID:(id)dsid completion:(id /* block */)completion;
- (BOOL)replaceIdentityProperties:(id)properties forDSID:(id)dsid error:(id *)error;
- (BOOL)setIdentityProperties:(id)properties forDSID:(id)dsid error:(id *)error;
- (void)synchronize;
- (id)verificationContextForDSID:(id)dsid error:(id *)error;
- (id)verificationContextForAccountEstablishmentWithError:(id *)error;
- (id)localStoreAccountPropertiesWithError:(id *)error;
- (BOOL)setLocalStoreAccountProperties:(id)properties error:(id *)error;
- (id)allStoreAccountDSIDsWithError:(id *)error;
- (id)allManageableStoreAccountDSIDsWithError:(id *)error;
- (id)allStoreAccountsWithError:(id *)error;
- (id)localStoreAccountWithError:(id *)error;
- (id)storeAccountForDSID:(id)dsid error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)monitoredAccountStore:(id)store didAddAccount:(id)account;
- (void)monitoredAccountStore:(id)store didUpdateAccount:(id)account;
- (void)monitoredAccountStore:(id)store didRemoveAccount:(id)account;
- (void)monitoredAccountStore:(id)store didChangeCredentialsForAccount:(id)account;
- (void)_notifyDelegateOfBackendChange;
- (void)_applyIdentityProperties:(id)properties toAccount:(id)account;
- (void)_applyLocalStoreAccountProperties:(id)properties toAccount:(id)account;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)account;
- (id)_userIdentityPropertiesForAccount:(id)account;
- (id)_newUserIdentityPropertiesForAccount:(id)account;
- (void)_synchronize;
@end

#endif /* ICUserIdentityStoreACAccountBackend_h */