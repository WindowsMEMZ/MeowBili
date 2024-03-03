//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef NSNumber_AVTExtension_h
#define NSNumber_AVTExtension_h
@import Foundation;

@interface NSNumber (AVTExtension)
/* class methods */
+ (id)avt_numberWithFloat:(float)float roundingBehavior:(id)behavior;

/* instance methods */
- (id)avt_numberByRoundingWithBehavior:(id)behavior;
@end

#endif /* NSNumber_AVTExtension_h */