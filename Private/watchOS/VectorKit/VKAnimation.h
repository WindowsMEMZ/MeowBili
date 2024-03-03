//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKAnimation_h
#define VKAnimation_h
@import Foundation;

#include "VKAnimationRunner-Protocol.h"

@class NSString;

@interface VKAnimation : NSObject {
  /* instance variables */
  NSObject<VKAnimationRunner> *_runner;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL running;
@property (nonatomic) BOOL runsForever;
@property (nonatomic) float frequency;
@property (readonly, nonatomic) BOOL hasFrequency;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL timed;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithPriority:(long long)priority name:(id)name;
- (id)initWithPriority:(long long)priority;
- (id)description;
- (void)startWithRunner:(id)runner;
- (void)transferToRunner:(id)runner;
- (void)stopAnimation:(BOOL)animation;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)onTimerFired:(double)fired;
@end

#endif /* VKAnimation_h */