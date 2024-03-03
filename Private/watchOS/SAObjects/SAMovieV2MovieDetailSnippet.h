//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMovieV2MovieDetailSnippet_h
#define SAMovieV2MovieDetailSnippet_h
@import Foundation;

#include "SAUISnippet.h"
#include "SAMovieV2ReviewListSnippet.h"
#include "SAMovieV2ShowtimeSnippet.h"
#include "SAMovieV2TheaterShowtimeListSnippet.h"
#include "SAUIAppPunchOut.h"

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *actors;
@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSArray *alternateProviderPunchouts;
@property (copy, nonatomic) NSNumber *availableOnItunesForPurchase;
@property (copy, nonatomic) NSNumber *availableOnItunesForRent;
@property (nonatomic) BOOL canBeFavorited;
@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *genres;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (copy, nonatomic) NSURL *iTunesUri;
@property (nonatomic) BOOL is3d;
@property (nonatomic) BOOL isContainerItem;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (copy, nonatomic) NSURL *movieIdentifier;
@property (retain, nonatomic) SAMovieV2ReviewListSnippet *movieReviewListSnippet;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *playOnItunesPunchout;
@property (copy, nonatomic) NSNumber *playTrailer;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (nonatomic) long long runtimeInMinutes;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSArray *studios;
@property (copy, nonatomic) NSString *synopsis;
@property (retain, nonatomic) SAMovieV2TheaterShowtimeListSnippet *theaterShowtimeListSnippet;
@property (copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;
@property (retain, nonatomic) SAUIAppPunchOut *videosPunchout;

/* class methods */
+ (id)movieDetailSnippet;
+ (id)movieDetailSnippetWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMovieV2MovieDetailSnippet_h */