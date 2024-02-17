//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIActivateTargetedBMLTDeploymentPersistedTask_h
#define TRIActivateTargetedBMLTDeploymentPersistedTask_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPersistedTaskAttribution.h"

@class NSString;

@interface TRIActivateTargetedBMLTDeploymentPersistedTask : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *backgroundMlTaskId;
@property (@dynamic, nonatomic) BOOL hasBackgroundMlTaskId;
@property (@dynamic, nonatomic) int deploymentId;
@property (@dynamic, nonatomic) BOOL hasDeploymentId;
@property (copy, @dynamic, nonatomic) NSString *factorPackSetId;
@property (@dynamic, nonatomic) BOOL hasFactorPackSetId;
@property (retain, @dynamic, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (@dynamic, nonatomic) BOOL hasTaskAttribution;
@property (copy, @dynamic, nonatomic) NSString *bmltBatchNotificationId;
@property (@dynamic, nonatomic) BOOL hasBmltBatchNotificationId;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIActivateTargetedBMLTDeploymentPersistedTask_h */