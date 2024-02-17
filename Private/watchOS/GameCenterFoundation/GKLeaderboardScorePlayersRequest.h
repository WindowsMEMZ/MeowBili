//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKLeaderboardScorePlayersRequest_h
#define GKLeaderboardScorePlayersRequest_h
@import Foundation;

#include "GKLeaderboardScoreRequest.h"

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest

@property (copy, nonatomic) NSArray *playerInternals;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* GKLeaderboardScorePlayersRequest_h */