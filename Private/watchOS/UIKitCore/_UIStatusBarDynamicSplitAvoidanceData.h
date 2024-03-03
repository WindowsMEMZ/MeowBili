//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarDynamicSplitAvoidanceData_h
#define _UIStatusBarDynamicSplitAvoidanceData_h
@import Foundation;

@class NSMutableDictionary;

@interface _UIStatusBarDynamicSplitAvoidanceData : NSObject

@property (nonatomic) double leadingDelta;
@property (nonatomic) double trailingDelta;
@property (retain, nonatomic) NSMutableDictionary *avoidanceFrameAbsoluteFrames;

/* instance methods */
- (id)init;
- (id)initWithLeadingDelta:(double)delta trailingDelta:(double)delta;
@end

#endif /* _UIStatusBarDynamicSplitAvoidanceData_h */