//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPersistedClientBMLTArtifact_h
#define TRIPersistedClientBMLTArtifact_h
@import Foundation;

#include "TRIPBMessage.h"

@class TRIClientBackgroundMLTask, TRIPBTimestamp, TRIPBUInt32Array;

@interface TRIPersistedClientBMLTArtifact : TRIPBMessage

@property (retain, @dynamic, nonatomic) TRIClientBackgroundMLTask *backgroundMlTask;
@property (@dynamic, nonatomic) BOOL hasBackgroundMlTask;
@property (retain, @dynamic, nonatomic) TRIPBUInt32Array *populationsArray;
@property (readonly, @dynamic, nonatomic) unsigned long long populationsArray_Count;
@property (retain, @dynamic, nonatomic) TRIPBTimestamp *deploymentDate;
@property (@dynamic, nonatomic) BOOL hasDeploymentDate;
@property (@dynamic, nonatomic) unsigned long long downloadSize;
@property (@dynamic, nonatomic) BOOL hasDownloadSize;
@property (@dynamic, nonatomic) int deploymentType;
@property (@dynamic, nonatomic) BOOL hasDeploymentType;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPersistedClientBMLTArtifact_h */