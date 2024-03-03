//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMScheduler_Protocol_h
#define FMScheduler_Protocol_h
@import Foundation;

@protocol FMScheduler <NSObject>
/* instance methods */
- (void)performBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
@end

#endif /* FMScheduler_Protocol_h */