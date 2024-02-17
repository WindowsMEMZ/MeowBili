//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationSnapshotCache_h
#define NTKComplicationSnapshotCache_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface NTKComplicationSnapshotCache : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_privateQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)readWithDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)saveWithSnapshot:(id)snapshot descriptor:(id)descriptor completion:(id /* block */)completion;
@end

#endif /* NTKComplicationSnapshotCache_h */