//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMCMediaPlayerModelPlaybackController_h
#define NMCMediaPlayerModelPlaybackController_h
@import Foundation;

#include "MPCPlaybackEngineDelegate-Protocol.h"

@class MPCPlaybackEngine, NSString;

@interface NMCMediaPlayerModelPlaybackController : NSObject<MPCPlaybackEngineDelegate> {
  /* instance variables */
  MPCPlaybackEngine *_playbackEngine;
  NSObject<MPCPlaybackEngineDelegate> *_playbackEngineDelegate;
  BOOL _systemMusicApplication;
}

@property (nonatomic) BOOL wantsRadioSupport;
@property (nonatomic) BOOL wantsDefaultMusicFallbackPlaybackIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedController;

/* instance methods */
- (void)setupPlaybackEngine;
- (void)replacePlaybackQueueWithIntent:(id)intent preventingAutomaticPlayback:(BOOL)playback completionHandler:(id /* block */)handler;
- (void)setPlaybackEngineDelegate:(id)delegate;
- (id)_playerRequest;
- (id)_playerPath;
- (void)setSystemMusicApplication:(BOOL)application;
- (BOOL)isSystemMusicApplication;
- (void)_setupPlaybackEngineIfNecessary;
- (void)engine:(id)engine didFailToActivateWithError:(id)error resolution:(id /* block */)resolution;
- (void)engineDidPauseForLeaseEnd:(id)end;
- (void)engine:(id)engine didFailToPlayFirstItem:(id)item withError:(id)error;
- (void)engine:(id)engine didFailToPlayItem:(id)item withError:(id)error;
- (id)_defaultFallbackPlaybackIntent;
- (void)performMediaRemoteCommand:(unsigned int)command completionHandler:(id /* block */)handler;
- (void)performMediaRemoteCommand:(unsigned int)command options:(id)options completionHandler:(id /* block */)handler;
- (id)_playerCommandRequestWithPlayerResponse:(id)response command:(unsigned int)command options:(id)options;
@end

#endif /* NMCMediaPlayerModelPlaybackController_h */