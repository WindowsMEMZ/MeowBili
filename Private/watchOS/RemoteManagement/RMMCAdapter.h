//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMMCAdapter_h
#define RMMCAdapter_h
@import Foundation;

@interface RMMCAdapter : NSObject
/* class methods */
+ (void)fetchDataAtURL:(id)url completionHandler:(id /* block */)handler;
+ (void)downloadDataAtURL:(id)url downloadURL:(id)url completionHandler:(id /* block */)handler;
@end

#endif /* RMMCAdapter_h */