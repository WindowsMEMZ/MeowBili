//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOExperimentConfiguration_h
#define GEOExperimentConfiguration_h
@import Foundation;

#include "GEOABAssignmentResponse.h"
#include "GEOExperimentServerProxy-Protocol.h"
#include "GEOExperimentServerProxyDelegate-Protocol.h"
#include "GEOObserverHashTable.h"

@class NSString;

@interface GEOExperimentConfiguration : NSObject<GEOExperimentServerProxyDelegate> {
  /* instance variables */
  NSObject<GEOExperimentServerProxy> *_serverProxy;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _experimentsInfoLock;
  GEOObserverHashTable *_experimentObservers;
}

@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)useProxy:(Class)proxy;
+ (id)sharedConfiguration;

/* instance methods */
- (void)_debug_forceUpdate;
- (id)_debug_configurationDate;
- (id)_debug_customQuerySubstringForType:(long long)type dispatcherRequestType:(int)type;
- (void)_debug_setCustomQuerySubstring:(id)substring forExperimentType:(long long)type dispatcherRequestType:(int)type;
- (void)_debug_forEachExperimentType:(id /* block */)type;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)experiments;
- (void)_debug_setActiveExperimentBranch:(id)branch;
- (id)_debug_bucketId;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)representation;
- (id)_debug_datasetId;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)representation;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)response;
- (id)init;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)experimentAssignments;
- (id)clientConfig;
- (void)refreshDatasetABStatus:(id)abstatus;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)handler;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)handler;
- (id)_mapsAbClientMetadata;
- (id)_parsecClientMetadata;
- (id)_siriClientMetadata;
- (id)_reportAProblemClientMetadata;
- (id)experimentURLForURL:(id)url requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })kind;
- (void)updateURLComponents:(id)urlcomponents forRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })kind;
- (id)clientConfigurationValueForKey:(id)key;
- (void)addExperimentObserver:(id)observer queue:(id)queue;
- (void)removeExperimentObserver:(id)observer;
- (void)serverProxy:(id)proxy didChangeExperimentsInfo:(id)info;
@end

#endif /* GEOExperimentConfiguration_h */