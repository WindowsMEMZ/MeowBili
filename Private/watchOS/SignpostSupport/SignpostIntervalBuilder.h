//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostIntervalBuilder_h
#define SignpostIntervalBuilder_h
@import Foundation;

#include "SignpostCAInstrumentationProcessor.h"

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (nonatomic) unsigned long long totalSkyLightCompositeIntervalCount;
@property (nonatomic) BOOL skyLightCompositeIntervalIsInFlight;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long previousMCT;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) BOOL buildSkyLightAnimationCompositeIntervalTimelines;
@property (readonly, nonatomic) BOOL hasOutstandingAnimations;

/* class methods */
+ (BOOL)_filterPassesRequiredSCForFramerate:(id)framerate includeMetal:(BOOL)metal;
+ (id)_framerateCalculationAllowlist:(BOOL)allowlist;
+ (id)_metalCalculationAllowlist;

/* instance methods */
- (id)init;
- (void)dropAccumulatedState;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)reboot;
- (id)_matchingEventForEvent:(id)event removeIfFound:(BOOL)found;
- (id)matchingEventForEvent:(id)event removeIfFound:(BOOL)found;
- (BOOL)_trackBegin:(id)begin;
- (BOOL)isSkyLightCompositeLoopSubsystem:(id)subsystem category:(id)category;
- (BOOL)signpostIsSkyLightCompositeLoop:(id)loop;
- (BOOL)signpostIsAnimationMetadata:(id)metadata;
- (BOOL)isMetadataSubsystem:(id)subsystem category:(id)category;
- (void)_initializeMapsIfNecessary;
- (void)_startTrackingAnimationWithBeginEvent:(id)event;
- (BOOL)processBeginEvent:(id)event;
- (void)processEmittedEvent:(id)event;
- (void)_processSkyLightCompositeInterval:(id)interval;
- (BOOL)_handleMacOsSpecialIntervals:(id)intervals;
- (BOOL)_handleCommonSpecialIntervals:(id)intervals;
- (void)_cleanupStateForBeginEvent:(id)event;
- (id)_animationWithBegin:(id)begin endEvent:(id)event firstFrameGraceTimeController:(id)controller;
- (id)processEndEvent:(id)event firstFrameGraceTimeController:(id)controller isAnimation:(BOOL *)animation;
- (id)doneProcessing;
@end

#endif /* SignpostIntervalBuilder_h */