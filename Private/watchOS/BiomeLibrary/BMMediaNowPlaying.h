//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMediaNowPlaying_h
#define BMMediaNowPlaying_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BMMediaNowPlaying : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_absoluteTimestamp;
  double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) int playbackState;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned int elapsed;
@property (nonatomic) BOOL hasElapsed;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *iTunesStoreIdentifier;
@property (readonly, nonatomic) NSString *iTunesSubscriptionIdentifier;
@property (readonly, nonatomic) BOOL isAirPlayVideo;
@property (nonatomic) BOOL hasIsAirPlayVideo;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *iTunesArtistIdentifier;
@property (readonly, nonatomic) NSString *iTunesAlbumIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) BOOL isRemoteControl;
@property (nonatomic) BOOL hasIsRemoteControl;
@property (readonly, nonatomic) int itemMediaType;
@property (readonly, nonatomic) int itemMediaSubtype;
@property (readonly, nonatomic) BOOL isAirPlayActive;
@property (nonatomic) BOOL hasIsAirPlayActive;
@property (readonly, nonatomic) BOOL parentGroupContainsDiscoverableGroupLeader;
@property (nonatomic) BOOL hasParentGroupContainsDiscoverableGroupLeader;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithUniqueID:(id)id absoluteTimestamp:(id)timestamp playbackState:(int)state album:(id)album artist:(id)artist duration:(id)duration genre:(id)genre title:(id)title elapsed:(id)elapsed mediaType:(id)type iTunesStoreIdentifier:(id)identifier iTunesSubscriptionIdentifier:(id)identifier isAirPlayVideo:(id)video outputDevices:(id)devices bundleID:(id)id iTunesArtistIdentifier:(id)identifier iTunesAlbumIdentifier:(id)identifier groupIdentifier:(id)identifier isRemoteControl:(id)control itemMediaType:(int)type itemMediaSubtype:(int)subtype;
- (id)initWithUniqueID:(id)id absoluteTimestamp:(id)timestamp playbackState:(int)state album:(id)album artist:(id)artist duration:(id)duration genre:(id)genre title:(id)title elapsed:(id)elapsed mediaType:(id)type iTunesStoreIdentifier:(id)identifier iTunesSubscriptionIdentifier:(id)identifier isAirPlayVideo:(id)video outputDevices:(id)devices bundleID:(id)id iTunesArtistIdentifier:(id)identifier iTunesAlbumIdentifier:(id)identifier groupIdentifier:(id)identifier isRemoteControl:(id)control itemMediaType:(int)type itemMediaSubtype:(int)subtype isAirPlayActive:(id)active parentGroupContainsDiscoverableGroupLeader:(id)leader;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_outputDevicesJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMediaNowPlaying_h */