//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncControlTaskServer_h
#define HDCloudSyncControlTaskServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDCloudSyncCoordinatorObserver-Protocol.h"
#include "HKCloudSyncControlServerInterface-Protocol.h"

@class NSString;

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer<HKCloudSyncControlServerInterface, HDCloudSyncCoordinatorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateClient:(id)client error:(id *)error;

/* instance methods */
- (id)remoteInterface;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)remote_syncWithRequest:(id)request reason:(id)reason completion:(id /* block */)completion;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)options reason:(long long)reason completion:(id /* block */)completion;
- (id)remote_forceCloudResetWithCompletion:(id /* block */)completion;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)completion;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* block */)completion;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* block */)completion;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)completion;
- (void)remote_disableCloudSyncWithCompletion:(id /* block */)completion;
- (void)remote_enableCloudSyncWithCompletion:(id /* block */)completion;
- (void)remote_accountConfigurationDidChangeWithCompletion:(id /* block */)completion;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)completion;
- (id)remote_fetchCloudSyncProgressWithCompletion:(id /* block */)completion;
- (void)remote_requestDataRefreshWithCompletion:(id /* block */)completion;
- (void)cloudSyncCoordinator:(id)coordinator syncRequestDidCompleteWithSuccess:(BOOL)success error:(id)error;
@end

#endif /* HDCloudSyncControlTaskServer_h */