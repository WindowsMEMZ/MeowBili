//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 93.0.0.0.0
//
#ifndef NAQueueingStrategy_Protocol_h
#define NAQueueingStrategy_Protocol_h
@import Foundation;

@protocol NAQueueingStrategy <NSObject>
/* instance methods */
- (void)enqueueObject:(id)object buffer:(id)buffer;
@end

#endif /* NAQueueingStrategy_Protocol_h */