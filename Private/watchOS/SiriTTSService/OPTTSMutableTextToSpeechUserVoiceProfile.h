//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSMutableTextToSpeechUserVoiceProfile_h
#define OPTTSMutableTextToSpeechUserVoiceProfile_h
@import Foundation;

#include "OPTTSTextToSpeechUserVoiceProfile.h"

@interface OPTTSMutableTextToSpeechUserVoiceProfile : OPTTSTextToSpeechUserVoiceProfile

@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* OPTTSMutableTextToSpeechUserVoiceProfile_h */