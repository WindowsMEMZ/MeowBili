//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDictationSettings_h
#define _UIDictationSettings_h
@import Foundation;

#include "PTSettings.h"

@class NSString;

@interface _UIDictationSettings : PTSettings

@property (nonatomic) double minimumRadius;
@property (nonatomic) double cursorGlowBlurRadius;
@property (nonatomic) double trailingGlowBlurRadius;
@property (retain, nonatomic) NSString *lightModeCompositingFiler;
@property (retain, nonatomic) NSString *darkModeCompositingFiler;
@property (nonatomic) double trailingGlowDuration;
@property (nonatomic) double tailHeight;
@property (nonatomic) double headHeight;
@property (nonatomic) double trailingGlowAlpha;
@property (nonatomic) double cursorGlowAlphaMin;
@property (nonatomic) double cursorGlowAlphaMax;
@property (nonatomic) double revealFadeTime;
@property (nonatomic) double typewriterEffectFramesPerSecond;
@property (nonatomic) double typewriterEffectStreamingCharacterInsertionRate;
@property (nonatomic) double typewriterEffectMinDurationBetweenHypotheses;
@property (nonatomic) BOOL glowEffectEnabled;
@property (nonatomic) BOOL pulseAnimationEnabled;
@property (nonatomic) BOOL trailAnimationEnabled;
@property (nonatomic) double pulseFrameRate;
@property (nonatomic) double trailFrameRate;

/* class methods */
+ (id)settingsControllerModule;
+ (id)frameRates;
+ (id)frameRatesTitles;
+ (id)compositingFilters;

/* instance methods */
- (void)setDefaultValues;
@end

#endif /* _UIDictationSettings_h */