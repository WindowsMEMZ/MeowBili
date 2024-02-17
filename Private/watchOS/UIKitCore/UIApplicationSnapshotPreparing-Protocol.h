//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIApplicationSnapshotPreparing_Protocol_h
#define UIApplicationSnapshotPreparing_Protocol_h
@import Foundation;

@protocol UIApplicationSnapshotPreparing <NSObject>
/* instance methods */
- (void)prepareSnapshotsWithAction:(id)action forScene:(id)scene completion:(id /* block */)completion;
- (void)extendSnapshotContext:(id)context forSnapshotAction:(id)action;
@end

#endif /* UIApplicationSnapshotPreparing_Protocol_h */