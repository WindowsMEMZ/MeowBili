//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNTransitAlert_h
#define MNTransitAlert_h
@import Foundation;

#include "MNActiveRouteInfo.h"
#include "NSSecureCoding-Protocol.h"

@class GEOComposedString, GEOPBTransitArtwork, GEOTransitBanner;
@protocol GEOServerFormattedString;

@interface MNTransitAlert : NSObject<NSSecureCoding> {
  /* instance variables */
  GEOTransitBanner *_banner;
}

@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *command;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *detail;
@property (readonly, nonatomic) GEOComposedString *primaryString;
@property (readonly, nonatomic) GEOComposedString *secondaryString;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) unsigned long long stopIndex;
@property (readonly, nonatomic) unsigned long long stepIndex;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTransitBanner:(id)banner transitStep:(id)step activeRoute:(id)route;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* MNTransitAlert_h */