//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKMatchedPlayers_h
#define GKMatchedPlayers_h
@import Foundation;

@class NSArray, NSDictionary;

@interface GKMatchedPlayers : NSObject

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *players;
@property (readonly, nonatomic) NSDictionary *playerProperties;

/* instance methods */
- (id)initWithMatch:(id)match players:(id)players;
- (id)description;
@end

#endif /* GKMatchedPlayers_h */