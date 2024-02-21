//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPCPlaybackIntent_h
#define MusicKit_SoftLinking_MPCPlaybackIntent_h
@import Foundation;

@class MPCPlaybackIntent, NSData, NSString;

@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject {
  /* instance variables */
  MPCPlaybackIntent *_underlyingPlaybackIntent;
}

@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (readonly, nonatomic) id rawPlaybackIntent;

/* class methods */
+ (id)emptyPlaybackIntent;

/* instance methods */
- (id)init;
- (id)initWithStoreIDs:(id)ids startIdentifierSet:(id)set;
- (id)initWithLegacyLibraryRequest:(id)request allowedIdentifiers:(id)identifiers startIdentifierSet:(id)set onlyLibraryContent:(BOOL)content;
- (id)initWithLegacyModelStationSeeding:(id)seeding;
- (id)initWithStationSeedingIdentifierSet:(id)set;
- (id)_underlyingPlaybackIntent;
@end

#endif /* MusicKit_SoftLinking_MPCPlaybackIntent_h */