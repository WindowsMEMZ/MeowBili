//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIActivateTargetedRolloutDeploymentPersistedTask_h
#define TRIActivateTargetedRolloutDeploymentPersistedTask_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPersistedTaskAttribution.h"
#include "TRIPersistedTaskCapabilityModifier.h"

@class NSString;

@interface TRIActivateTargetedRolloutDeploymentPersistedTask : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *rolloutId;
@property (@dynamic, nonatomic) BOOL hasRolloutId;
@property (@dynamic, nonatomic) int deploymentId;
@property (@dynamic, nonatomic) BOOL hasDeploymentId;
@property (copy, @dynamic, nonatomic) NSString *factorPackSetId;
@property (@dynamic, nonatomic) BOOL hasFactorPackSetId;
@property (retain, @dynamic, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (@dynamic, nonatomic) BOOL hasTaskAttribution;
@property (retain, @dynamic, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (@dynamic, nonatomic) BOOL hasCapabilityModifier;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIActivateTargetedRolloutDeploymentPersistedTask_h */