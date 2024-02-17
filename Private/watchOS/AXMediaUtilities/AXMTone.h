//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMTone_h
#define AXMTone_h
@import Foundation;

#include "AXMADSREnvelope.h"
#include "AXMSynthPatch.h"

@interface AXMTone : NSObject

@property (nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (retain, nonatomic) AXMSynthPatch *patch;
@property (nonatomic) double gain;
@property (readonly, nonatomic) double aWeighting;

/* instance methods */
- (id)init;
- (id)initWithSampleRate:(double)rate envelope:(id)envelope;
- (void)renderInBuffer:(void *)buffer atFrame:(unsigned long long)frame;
- (void)_setFrequency:(double)frequency;
- (double)_rawValueForTonePhase:(double)phase;
@end

#endif /* AXMTone_h */