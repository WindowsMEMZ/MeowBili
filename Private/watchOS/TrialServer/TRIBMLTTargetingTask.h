//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIBMLTTargetingTask_h
#define TRIBMLTTargetingTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIBMLTTaskSupport.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRITask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class BOOL *, NSArray, NSDate, NSString, TRIBMLTDeployment;

@interface TRIBMLTTargetingTask : TRIBaseTask<TRITask, TRIMetricsProviding> {
  /* instance variables */
  TRIBMLTTaskSupport *_support;
  BOOL _includeDependencies;
  NSObject<TRITaskAttributing> *_taskAttribution;
  unsigned long long _triggerEvent;
  TRIBMLTDeployment *_deployment;
  NSString *_bmltBatchNotificationIdentifier;
}

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskWithBMLTDeployment:(id)bmltdeployment includeDependencies:(BOOL)dependencies taskAttribution:(id)attribution triggerEvent:(unsigned long long)event;
+ (id)taskWithBMLTDeployment:(id)bmltdeployment includeDependencies:(BOOL)dependencies taskAttribution:(id)attribution triggerEvent:(unsigned long long)event bmltBatchNotificationIdentifier:(id)identifier;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBMLTDeployment:(id)bmltdeployment includeDependencies:(BOOL)dependencies taskAttribution:(id)attribution triggerEvent:(unsigned long long)event bmltBatchNotificationIdentifier:(id)identifier;
- (void)runEnqueueHandlerUsingContext:(id)context;
- (void)runDequeueHandlerUsingContext:(id)context;
- (id)_taskResultWithStatus:(int)status wasEnrolled:(BOOL)enrolled reportResults:(BOOL)results nextTasks:(id)tasks bmltHistoryDatabase:(id)database;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (BOOL)_targetBMLTDeployment:(id)bmltdeployment appendingTelemetryToSupport:(id)support backgroundMLTaskDatabase:(id)database backgroundMLTaskHistoryDatabase:(id)database targeter:(id)targeter reportTelemetryToServer:(BOOL *)server factorPackSetIdToActivate:(id *)activate wasEnrolled:(BOOL *)enrolled shouldDisenroll:(BOOL *)disenroll error:(id *)error;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)event;
- (void)_allocationTelemetryWithEvent:(unsigned char)event factorPackSetId:(id)id bmltRecord:(id)record context:(id)context;
- (id)metrics;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIBMLTTargetingTask_h */