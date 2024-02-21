//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOExperimentServerProxy_Protocol_h
#define GEOExperimentServerProxy_Protocol_h
@import Foundation;

@protocol GEOExperimentServerProxy <NSObject>

@property (weak, nonatomic) NSObject<GEOExperimentServerProxyDelegate> *delegate;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)forceUpdate;
- (void)refreshDatasetABStatus:(id)abstatus;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)handler;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)handler;
- (void)_debug_setQuerySubstring:(id)substring forExperimentType:(long long)type dispatcherRequestType:(int)type;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)experiments;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)representation;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)representation;
@end

#endif /* GEOExperimentServerProxy_Protocol_h */