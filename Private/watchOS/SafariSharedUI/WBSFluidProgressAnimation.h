//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSFluidProgressAnimation_h
#define WBSFluidProgressAnimation_h
@import Foundation;

@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject

@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double initialPosition;
@property (nonatomic) double destinationPosition;
@property (nonatomic) double animationDuration;

/* instance methods */
@end

#endif /* WBSFluidProgressAnimation_h */