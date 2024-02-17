//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelRadioStationTrackGenericObjectBuilder_h
#define MPCModelRadioStationTrackGenericObjectBuilder_h
@import Foundation;

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {
  /* instance variables */
  MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
  struct { unsigned int x :1 initialized; unsigned int x :1 trackNumber; unsigned int x :1 trackCount; struct { unsigned int x :1 identifiers; unsigned int x :1 bookmarkTime; unsigned int x :1 shouldRememberBookmarkTime; unsigned int x :1 hasBeenPlayed; unsigned int x :1 startTime; unsigned int x :1 stopTime; unsigned int x :1 storeUbiquitousIdentifier; unsigned int x :1 userPlayCount; } playbackPosition; } _requestedSongProperties;
}

@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties;

/* instance methods */
- (id)initWithRequestedProperties:(id)properties;
- (id)genericObjectForRadioStationTrack:(id)track radioStationContainsVideo:(BOOL)video containerUniqueID:(id)id userIdentity:(id)identity;
@end

#endif /* MPCModelRadioStationTrackGenericObjectBuilder_h */