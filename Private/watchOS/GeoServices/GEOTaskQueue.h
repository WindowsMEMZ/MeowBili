//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTaskQueue_h
#define GEOTaskQueue_h
@import Foundation;

@class NSMutableArray, NSMutableSet, geo_isolater;

@interface GEOTaskQueue : NSObject {
  /* instance variables */
  geo_isolater *_isolation;
  NSMutableSet *_inFlight;
  NSMutableArray *_pending;
}

@property (nonatomic) unsigned long long width;

/* instance methods */
- (id)init;
- (void)addTask:(id)task;
- (BOOL)removeTaskIfPending:(id)pending;
- (void)taskFinished:(id)finished;
@end

#endif /* GEOTaskQueue_h */