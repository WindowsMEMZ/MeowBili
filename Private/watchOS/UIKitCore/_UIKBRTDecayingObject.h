//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBRTDecayingObject_h
#define _UIKBRTDecayingObject_h
@import Foundation;

@class NSMutableArray;

@interface _UIKBRTDecayingObject : NSObject {
  /* instance variables */
  NSMutableArray *_resetBlocks;
}

@property (readonly, nonatomic) double lastUpdate;
@property (nonatomic) double timeoutDuration;
@property (readonly, nonatomic) BOOL isDecaying;
@property (readonly, nonatomic) BOOL isHolding;
@property (readonly, nonatomic) BOOL isActive;

/* instance methods */
- (id)initWithTimeoutDuration:(double)duration;
- (void)startDecaying;
- (void)resetDecayTo:(double)to;
- (void)reset;
- (void)updateDecay;
- (void)startOrUpdateDecay;
- (void)resetActiveDecayTo:(double)to;
- (void)onResetDo:(id /* block */)do;
@end

#endif /* _UIKBRTDecayingObject_h */