//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals_h
#define INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "INFERENCESchemaINFERENCECommonAppIndependentSignals.h"

@class NSData;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 nowPlayingState; unsigned int x :1 deviceMotionState; unsigned int x :1 isDeviceLockStatus; unsigned int x :1 isMobileDataOn; unsigned int x :1 isWifiOn; unsigned int x :1 workoutType; unsigned int x :1 isIndoorWorkout; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic) BOOL hasCommonIndependent;
@property (nonatomic) int nowPlayingState;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) BOOL isDeviceLockStatus;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) BOOL isMobileDataOn;
@property (nonatomic) BOOL hasIsMobileDataOn;
@property (nonatomic) BOOL isWifiOn;
@property (nonatomic) BOOL hasIsWifiOn;
@property (nonatomic) int workoutType;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) BOOL isIndoorWorkout;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteCommonIndependent;
- (void)deleteNowPlayingState;
- (void)deleteDeviceMotionState;
- (void)deleteIsDeviceLockStatus;
- (void)deleteIsMobileDataOn;
- (void)deleteIsWifiOn;
- (void)deleteWorkoutType;
- (void)deleteIsIndoorWorkout;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals_h */