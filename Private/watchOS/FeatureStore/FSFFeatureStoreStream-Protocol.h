//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef FSFFeatureStoreStream_Protocol_h
#define FSFFeatureStoreStream_Protocol_h
@import Foundation;

@protocol FSFFeatureStoreStream 
/* instance methods */
- (BOOL)insert:(id)insert withInteractionId:(id)id atTime:(double)time;
- (id)retrieve:(id)retrieve;
- (id)retrieveEvents:(id)events startDate:(id)date endDate:(id)date;
- (BOOL)deleteCurrentStream;
@end

#endif /* FSFFeatureStoreStream_Protocol_h */