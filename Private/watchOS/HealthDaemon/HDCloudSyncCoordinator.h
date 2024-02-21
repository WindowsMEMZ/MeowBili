//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncCoordinator_h
#define HDCloudSyncCoordinator_h
@import Foundation;

#include "APSConnectionDelegate-Protocol.h"
#include "HDCloudSyncManagerTaskQueue.h"
#include "HDCloudSyncManagerTaskQueueDelegate-Protocol.h"
#include "HDCloudSyncPeriodicActivityScheduler.h"
#include "HDDaemon.h"
#include "HDDatabaseJournalMergeObserver-Protocol.h"
#include "HDDiagnosticObject-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDProfile.h"
#include "HDProfileReadyObserver-Protocol.h"

@class ACAccountStore, APSConnection, HDXPCGatedActivity, HDXPCPeriodicActivity, HKObserverSet, NSArray, NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDCloudSyncCoordinator : NSObject<HDCloudSyncManagerTaskQueueDelegate, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver, HDProfileReadyObserver, APSConnectionDelegate> {
  /* instance variables */
  HDDaemon *_daemon;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_cloudSyncEnabled;
  BOOL _lock_hasComputedCloudSyncEnabled;
  BOOL _lock_cloudSyncSupportEnabled;
  BOOL _lock_cloudSyncSupportValueLoaded;
  ACAccountStore *_lock_accountStore;
  BOOL _lock_syncInProgress;
  BOOL _lock_hasUpdatedCachedLastSuccessfulSyncDates;
  HDCloudSyncManagerTaskQueue *_syncTaskQueue;
  NSProgress *_activeSyncProgress;
  NSMutableArray *_activeSyncCompletions;
  NSString *_latestSyncStartLog;
  NSString *_latestSyncEndLog;
  NSMutableArray *_progressCompletionBlocks;
  APSConnection *_apsConnection;
  NSObject<OS_dispatch_source> *_periodicActivityCriteriaUpdateSource;
  HDXPCPeriodicActivity *_primaryPeriodicActivity;
  HDXPCPeriodicActivity *_secondaryPeriodicActivity;
  HDXPCPeriodicActivity *_userRequestedBackupActivity;
  HDXPCGatedActivity *_accountChangeGatedSyncActivity;
  HDXPCPeriodicActivity *_fastSyncPeriodicActivity;
  HDXPCGatedActivity *_subscriptionBasedSyncActivity;
  BOOL _lock_requiresTinkerUpload;
  BOOL _lock_requiresTinkerDownload;
  double _lock_lastTinkerDataDownloadTriggerTime;
  double _lock_lastTinkerDataUploadTriggerTime;
  HDXPCGatedActivity *_clientGatedSyncActivity;
  HKObserverSet *_observers;
  HDXPCGatedActivity *_sharedSummaryPullActivity;
  HDXPCGatedActivity *_sharedSummaryPushActivity;
  double _lock_nextAvailableOperationStartTime;
  NSArray *_lock_stateSyncEntityClasses;
  HDProfile *_unitTest_primaryProfileOverride;
  HDCloudSyncPeriodicActivityScheduler *_periodicActivityScheduler;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)daemon;

/* instance methods */
- (id)initWithDaemon:(id)daemon;
- (void)daemonReady:(id)ready;
- (void)profileDidBecomeReady:(id)ready;
- (void)cloudSyncSupportStatusDidChange;
- (id)createAccountStore;
- (void)dealloc;
- (double)nextCloudKitOperationDelay;
- (void)delayNextCloudKitOperation:(double)operation;
- (void)syncAllProfilesViaGatedXPCActivity:(BOOL)xpcactivity context:(id)context reason:(id)reason completion:(id /* block */)completion;
- (id)syncAllProfilesWithContext:(id)context completion:(id /* block */)completion;
- (id)resetAllProfilesWithContext:(id)context completion:(id /* block */)completion;
- (id)fetchCloudDescriptionWithContext:(id)context completion:(id /* block */)completion;
- (void)fetchSyncStatusWithCompletion:(id /* block */)completion;
- (id)currentSyncProgress;
- (id)addCloudSyncProgressCompletion:(id /* block */)completion;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (id)lastSuccessfulLitePushDate;
- (BOOL)isDeviceInManateeUnavailableCFUState;
- (void)disableSyncLocallyWithCompletion:(id /* block */)completion;
- (void)enableSyncLocallyWithCompletion:(id /* block */)completion;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)completion;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)completion;
- (BOOL)canPerformCloudSyncWithError:(id *)error;
- (BOOL)primaryAccountIsProhibitedFromCloudSync;
- (id)stateSyncEntityClasses;
- (id)stateSyncDomainForSubscriptionIdentifier;
- (void)addManagerTask:(id)task;
- (long long)compareTask:(id)task withTask:(id)task queue:(id)queue;
- (void)scheduleSharedSummaryPushWithMaximumDelay:(double)delay;
- (void)triggerSubscription:(id)subscription;
- (void)resetSubscriptionSyncBackoff;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
- (void)connection:(id)connection didReceiveIncomingMessage:(id)message;
- (void)prepareAllProfilesForPeriodicSyncAndRestore;
- (void)databaseJournalMergeDidCompleteForProfile:(id)profile;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)_unitTest_shouldSyncProfile:(id)profile;
- (void)unitTest_setPrimaryProfileOverride:(id)override;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)completion;
- (void)unitTest_setPeriodicActivity:(id)activity;
- (id)unitTest_periodicActivity;
- (void)unitTest_performFastSyncWithCompletion:(id /* block */)completion;
- (void)unitTest_setFastPeriodicActivity:(id)activity;
- (id)unitTest_fastPeriodicActivity;
- (void)unitTest_setClientGatedSyncActivity:(id)activity;
- (id)unitTest_clientGatedSyncActivity;
- (void)unitTest_performClientGatedSyncActivity:(id /* block */)activity;
- (void)unitTest_setStateSyncEntityClasses:(id)classes;
- (id)diagnosticDescription;
@end

#endif /* HDCloudSyncCoordinator_h */