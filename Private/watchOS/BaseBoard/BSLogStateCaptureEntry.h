//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSLogStateCaptureEntry_h
#define BSLogStateCaptureEntry_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface BSLogStateCaptureEntry : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) id /* block */ captureBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
@end

#endif /* BSLogStateCaptureEntry_h */