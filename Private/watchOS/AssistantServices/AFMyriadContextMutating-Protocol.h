//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFMyriadContextMutating_Protocol_h
#define AFMyriadContextMutating_Protocol_h
@import Foundation;

@protocol AFMyriadContextMutating <NSObject>
/* instance methods */
- (void)setTimestamp:(unsigned long long)timestamp;
- (void)setPerceptualAudioHash:(id)hash;
- (void)setOverrideState:(id)state;
- (void)setActivationSource:(long long)source;
- (void)setActivationExpirationTime:(unsigned long long)time;
@end

#endif /* AFMyriadContextMutating_Protocol_h */