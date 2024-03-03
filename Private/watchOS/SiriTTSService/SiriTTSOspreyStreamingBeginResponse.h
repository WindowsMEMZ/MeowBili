//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef SiriTTSOspreyStreamingBeginResponse_h
#define SiriTTSOspreyStreamingBeginResponse_h
@import Foundation;

@class NSString;

@interface SiriTTSOspreyStreamingBeginResponse : NSObject

@property (readonly, nonatomic) NSString *voiceLanguage;
@property (readonly, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) NSString *voiceFootprint;
@property (readonly, nonatomic) NSString *voiceType;
@property (readonly, nonatomic) NSString *voiceGender;
@property (readonly, nonatomic) long long voiceVersion;
@property (readonly, nonatomic) NSString *resourceLanguage;
@property (readonly, nonatomic) long long resourceVersion;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } asbd;
@property (readonly, nonatomic) double bufferDuration;

/* instance methods */
- (id)initWithOspreyBeginResponse:(id)response;
@end

#endif /* SiriTTSOspreyStreamingBeginResponse_h */