//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSpotlightScoringFeatureVector_h
#define PPSpotlightScoringFeatureVector_h
@import Foundation;

@class NSMutableSet;

@interface PPSpotlightScoringFeatureVector : NSObject {
  /* instance variables */
  NSMutableSet *_features;
}

/* class methods */
+ (id)decodeFeatureVectorFromData:(id)data version:(id)version;
+ (id)featureVectorVersion;

/* instance methods */
- (id)init;
- (id)encodeAsData;
- (void)addQidString:(id)string;
- (BOOL)containsQidString:(id)string;
- (id)qidStrings;
@end

#endif /* PPSpotlightScoringFeatureVector_h */