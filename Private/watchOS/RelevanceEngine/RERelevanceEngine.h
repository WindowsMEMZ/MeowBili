//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERelevanceEngine_h
#define RERelevanceEngine_h
@import Foundation;

#include "REActivityTracker.h"
#include "REActivityTrackerDelegate-Protocol.h"
#include "REDataSourceCatalog.h"
#include "REDataSourceManager.h"
#include "REEngineLocationManager.h"
#include "REFeatureMapGenerator.h"
#include "REFeatureSet.h"
#include "REFeatureTransmuter.h"
#include "RELiveElementCoordinator.h"
#include "REMLModelManager.h"
#include "RERelevanceEngineConfiguration.h"
#include "RERelevanceEngineLogger.h"
#include "RERelevanceEnginePreferences.h"
#include "RERelevanceEnginePreferencesController.h"
#include "RERelevanceEngineProperties-Protocol.h"
#include "RETrainingManager.h"
#include "REUpNextScheduler.h"
#include "_REEngineDefaults.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface RERelevanceEngine : NSObject<RERelevanceEngineProperties, REActivityTrackerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  REFeatureMapGenerator *_inputFeatureMapGenerator;
  REFeatureMapGenerator *_outputFeatureMapGenerator;
  RERelevanceEnginePreferencesController *_preferenceController;
  REActivityTracker *_activityTracker;
  NSMutableDictionary *_addedElementsByIdentifier;
  NSArray *_configurationSectionDescriptors;
  BOOL _updatedLoading;
  BOOL _loading;
  REUpNextScheduler *_loadingScheduler;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityTrackerLock;
  id /* block */ _resumeCompletionBlock;
}

@property (readonly, nonatomic) RELiveElementCoordinator *coordinator;
@property (readonly, nonatomic) REDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) REMLModelManager *modelManager;
@property (readonly, nonatomic) RETrainingManager *trainingManager;
@property (readonly, nonatomic) REEngineLocationManager *locationManager;
@property (readonly, nonatomic) RERelevanceEngineLogger *logger;
@property (readonly, nonatomic) BOOL wantsImmutableContent;
@property (readonly, nonatomic) _REEngineDefaults *defaults;
@property (readonly, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) NSArray *historicSectionDescriptors;
@property (readonly, nonatomic) NSDictionary *inflectionFeatureValues;
@property (readonly, nonatomic) REFeatureTransmuter *featureTransmuter;
@property (readonly, nonatomic) REFeatureSet *rootFeatures;
@property (readonly, nonatomic) REFeatureSet *mlFeatures;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) RERelevanceEngineConfiguration *configuration;
@property (readonly, nonatomic) NSArray *subsystems;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subsystemQueue;
@property (readonly, nonatomic) RERelevanceEngineConfiguration *configuration;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly, nonatomic) REDataSourceCatalog *dataSourceCatalog;
@property (readonly) BOOL running;
@property (nonatomic) BOOL automaticallyResumeEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)prewarmWithConfiguration:(id)configuration;

/* instance methods */
- (void)gatherMetrics;
- (void)resetModelWithCompletion:(id /* block */)completion;
- (void)pauseForSimulation;
- (void)resumeFromSimulation;
- (id)predictionForElementAtPath:(id)path;
- (id)predictionForElement:(id)element;
- (id)featureProviderForElement:(id)element;
- (id)featureProviderForElementAtPath:(id)path;
- (void)storeDiagnosticLogs:(id /* block */)logs;
- (void)storeDiagnosticLogsToFile:(id /* block */)file;
- (void)_captureAndStoreDiagnosticLogs:(id /* block */)logs;
- (void)_addSubsystem:(id)subsystem;
- (void)_removeSubsystem:(id)subsystem;
- (id)newInputFeatureMap;
- (id)newOutputFeatureMap;
- (id)elementFromDictionary:(id)dictionary;
- (id)dictionaryFromElement:(id)element;
- (void)beginActivity:(id)activity forObject:(id)object;
- (void)endActivity:(id)activity forObject:(id)object;
- (BOOL)isSectionWithNameHistoric:(id)historic;
- (id)historicSectionForSection:(id)section;
- (id)sectionForHistoricSection:(id)section;
- (void)enumerateSectionDescriptorsWithOptions:(unsigned long long)options includeHistoric:(BOOL)historic usingBlock:(id /* block */)block;
- (id)elementRankerForSection:(id)section;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithName:(id)name configuration:(id)configuration;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)addTrainingContext:(id)context;
- (void)removeTrainingContext:(id)context;
- (void)trainWithPendingEvents;
- (void)trainPendingEventsWithCompletion:(id /* block */)completion;
- (void)saveModelFile;
- (id)elementAtPath:(id)path;
- (unsigned long long)numberOfElementsInSection:(id)section;
- (id)pathForElement:(id)element;
- (void)enumerateRankedContent:(id /* block */)content;
- (void)enumerateRankedContentInSection:(id)section usingBlock:(id /* block */)block;
- (void)addElement:(id)element section:(id)section;
- (void)removeElement:(id)element;
- (BOOL)isRunning;
- (void)_queue_resumeWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)resumeWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)updateSectionsWithIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)resume;
- (void)pause;
- (void)_queue_resumeSubsystem:(id)subsystem;
- (void)_queue_pauseSubsystem:(id)subsystem;
- (void)activityTracker:(id)tracker didBeginActivity:(id)activity;
- (void)activityTracker:(id)tracker didEndActivity:(id)activity;
- (void)_callbackQueue_notifyLoadingState;
- (void)_notifyResumeCompleted;
- (void)setPreferences:(id)preferences forObject:(id)object;
- (void)removePreferencesForObject:(id)object;
@end

#endif /* RERelevanceEngine_h */