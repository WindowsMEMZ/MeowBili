//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUICountdownDisappear_h
#define ARUICountdownDisappear_h
@import Foundation;

#include "ARUICountdownDefaultAnimation.h"
#include "ARUICountdownAnimation-Protocol.h"

@interface ARUICountdownDisappear : ARUICountdownDefaultAnimation<ARUICountdownAnimation>
/* class methods */
+ (id)identifier;

/* instance methods */
- (double)delay;
- (double)duration;
- (id)identifier;
- (id)timingFunction;
- (BOOL)cancelable;
- (void)applyToCountdownView:(id)view completion:(id /* block */)completion;
@end

#endif /* ARUICountdownDisappear_h */