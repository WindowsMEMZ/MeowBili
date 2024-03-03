//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLMindfulnessSessionSource_h
#define NLMindfulnessSessionSource_h
@import Foundation;

@class HDProfile;

@interface NLMindfulnessSessionSource : NSObject {
  /* instance variables */
  HDProfile *_profile;
}

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)mostRecentMindfulnessSessionDate;
@end

#endif /* NLMindfulnessSessionSource_h */