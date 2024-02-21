//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CULiveAudioServerSession_h
#define CULiveAudioServerSession_h
@import Foundation;

@class AVAudioConverter, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode;
@protocol OS_dispatch_queue;

@interface CULiveAudioServerSession : NSObject {
  /* instance variables */
  AVAudioConverter *_audioConverter;
  AVAudioEngine *_audioEngine;
  AVAudioFormat *_audioInputFormat;
  AVAudioFormat *_audioOutputFormat;
  AVAudioPlayerNode *_audioPlayerNode;
  BOOL _playbackStarted;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* instance methods */
- (BOOL)activateAndReturnError:(id *)error;
- (void)invalidate;
- (void)handleDataEvent:(id)event;
@end

#endif /* CULiveAudioServerSession_h */