//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdClient_h
#define PLAssetsdClient_h
@import Foundation;

#include "PLAssetsdClientSandboxExtensions.h"
#include "PLAssetsdClientXPCConnection.h"
#include "PLAssetsdCloudClient.h"
#include "PLAssetsdCloudInternalClient.h"
#include "PLAssetsdDebugClient.h"
#include "PLAssetsdDemoClient.h"
#include "PLAssetsdDiagnosticsClient.h"
#include "PLAssetsdLibraryClient.h"
#include "PLAssetsdLibraryInternalClient.h"
#include "PLAssetsdLibraryManagementClient.h"
#include "PLAssetsdMigrationClient.h"
#include "PLAssetsdNotificationClient.h"
#include "PLAssetsdPhotoKitAddClient.h"
#include "PLAssetsdPhotoKitClient.h"
#include "PLAssetsdPrivacySupportClient.h"
#include "PLAssetsdResourceAvailabilityClient.h"
#include "PLAssetsdResourceClient.h"
#include "PLAssetsdResourceInternalClient.h"
#include "PLAssetsdResourceWriteOnlyClient.h"
#include "PLAssetsdSyncClient.h"
#include "PLAssetsdSystemLibraryURLReadOnlyClient.h"
#include "PLAutoBindingProxyFactory.h"

@protocol OS_dispatch_queue;

@interface PLAssetsdClient : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_isolationQueue;
  PLAssetsdClientXPCConnection *_connection;
  PLAutoBindingProxyFactory *_autoBindingProxyFactory;
  PLAssetsdClientSandboxExtensions *_sandboxExtensions;
  PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
  PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
  PLAssetsdPrivacySupportClient *_privacySupportClient;
}

@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdSyncClient *syncClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdPhotoKitAddClient *photoKitAddClient;
@property (readonly) PLAssetsdResourceAvailabilityClient *resourceAvailabilityClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;

/* class methods */
+ (id)sharedSystemLibraryAssetsdClient;

/* instance methods */
- (id)init;
- (id)initWithPhotoLibraryURL:(id)url;
- (void)dealloc;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)handler;
- (id)_setupClientClass:(Class)class proxyGetter:(SEL)getter options:(long long)options;
- (id)systemLibraryURLReadOnlyClient;
- (id)resourceWriteOnlyClient;
- (id)privacySupportClient;
- (void)_updateLibraryStateConnectionInterrupted:(id)interrupted;
- (void)sendDaemonJob:(id)job shouldRunSerially:(BOOL)serially replyHandler:(id /* block */)handler;
- (void)waitUntilConnectionSendsAllMessages;
@end

#endif /* PLAssetsdClient_h */