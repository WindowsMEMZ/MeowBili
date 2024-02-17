//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCMediaRemoteNullController_h
#define _MPCMediaRemoteNullController_h
@import Foundation;

#include "MPCMediaRemoteController.h"
#include "MPCFuture.h"

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
  /* instance variables */
  MPCFuture *_playQueueIdentifiersFuture;
  MPCFuture *_contentItemForIdentifierFuture;
  MPCFuture *_contentItemArtworkForIdentifierFuture;
  MPCFuture *_contentItemRemoteArtworkForIdentifierFuture;
  MPCFuture *_participantsFuture;
}

/* class methods */
+ (BOOL)_shouldRegisterForNotifications;

/* instance methods */
- (id)_init;
- (long long)playbackStateCacheState;
- (id)playbackState;
- (long long)supportedCommandsCacheState;
- (id)supportedCommands;
- (void)sendCommand:(unsigned int)command options:(id)options completion:(id /* block */)completion;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x0; long long x1; })range;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })range;
- (id)playQueueIdentifiersForRequest:(void *)request;
- (long long)playingIdentifierCacheState;
- (id)playingIdentifier;
- (long long)contentItemCacheStateForIdentifier:(id)identifier;
- (id)contentItemForIdentifier:(id)identifier;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)identifier size:(struct CGSize { double x0; double x1; })size;
- (id)contentItemArtworkForContentItemIdentifier:(id)identifier artworkIdentifier:(id)identifier size:(struct CGSize { double x0; double x1; })size;
- (id)contentItemRemoteArtworkForContentItemIdentifier:(id)identifier artworkIdentifier:(id)identifier size:(struct CGSize { double x0; double x1; })size artworkFormat:(id)format;
- (long long)playbackQueueParticipantsCacheState;
- (id)playbackQueueParticipants;
- (void)invalidateAllTokens;
@end

#endif /* _MPCMediaRemoteNullController_h */