//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOGuideLocationSuggestionResults_h
#define GEOGuideLocationSuggestionResults_h
@import Foundation;

@class NSArray;

@interface GEOGuideLocationSuggestionResults : NSObject

@property (readonly, nonatomic) NSArray *guideLocations;

/* instance methods */
- (id)initWithGuideLocationSuggestionResult:(id)result mapsResults:(id)results;
@end

#endif /* GEOGuideLocationSuggestionResults_h */