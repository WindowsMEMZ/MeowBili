//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSFallbackAudioSessionReleaseProvider_h
#define CSFallbackAudioSessionReleaseProvider_h
@import Foundation;

#include "CSAudioRecorder.h"
#include "CSAudioRecorderDelegate-Protocol.h"
#include "CSFallbackAudioSessionReleaseProviding-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSFallbackAudioSessionReleaseProvider : NSObject<CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioRecorder *audioRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudioRecorder:(id)recorder;
- (BOOL)fallbackDeactivateAudioSession:(unsigned long long)session error:(id *)error;
- (void)audioRecorderBufferAvailable:(id)available audioStreamHandleId:(unsigned long long)id buffer:(id)buffer;
- (void)audioRecorderBufferAvailable:(id)available audioStreamHandleId:(unsigned long long)id buffer:(id)buffer remoteVAD:(id)vad atTime:(unsigned long long)time arrivalTimestampToAudioRecorder:(unsigned long long)recorder numberOfChannels:(int)channels;
- (void)audioRecorderWillBeDestroyed:(id)destroyed;
@end

#endif /* CSFallbackAudioSessionReleaseProvider_h */