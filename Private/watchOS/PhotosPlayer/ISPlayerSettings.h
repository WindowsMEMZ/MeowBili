//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISPlayerSettings_h
#define ISPlayerSettings_h
@import Foundation;

#include "ISSettings.h"

@interface ISPlayerSettings : ISSettings

@property (nonatomic) BOOL easingEnabled;
@property (nonatomic) double vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate;
@property (nonatomic) long long startBehavior;
@property (nonatomic) BOOL scaleDuringPlayback;
@property (nonatomic) BOOL loopingEnabled;
@property (nonatomic) BOOL crossfadeEnabled;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL playIsSticky;
@property (nonatomic) BOOL longExposureVitality;
@property (nonatomic) BOOL playDuringHint;
@property (nonatomic) BOOL showStateOverlay;
@property (nonatomic) BOOL prerollBeforePlaying;
@property (nonatomic) BOOL useDedicatedQueues;
@property (nonatomic) BOOL allowFrameBlending;
@property (nonatomic) BOOL allowVideoPreRoll;
@property (nonatomic) double forceScrubRewindFactor;
@property (nonatomic) double forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumRate;
@property (nonatomic) double forceScrubMaximumInteractiveRate;

/* class methods */
+ (id)sharedInstance;
+ (id)settingsControllerModule;

/* instance methods */
- (void)setDefaultValues;
@end

#endif /* ISPlayerSettings_h */