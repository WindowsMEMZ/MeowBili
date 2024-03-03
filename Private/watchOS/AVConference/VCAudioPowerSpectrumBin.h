//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCAudioPowerSpectrumBin_h
#define VCAudioPowerSpectrumBin_h
@import Foundation;

@interface VCAudioPowerSpectrumBin : NSObject

@property (nonatomic) struct _VCRange { float x0; float x1; } frequencyRange;
@property (nonatomic) float powerLevel;

/* instance methods */
- (id)description;
- (id)initWithFrequencyRange:(struct _VCRange { float x0; float x1; })range;
@end

#endif /* VCAudioPowerSpectrumBin_h */