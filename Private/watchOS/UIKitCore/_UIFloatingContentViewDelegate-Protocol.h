//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFloatingContentViewDelegate_Protocol_h
#define _UIFloatingContentViewDelegate_Protocol_h
@import Foundation;

@protocol _UIFloatingContentViewDelegate <NSObject>
/* instance methods */
- (void)floatingContentView:(id)view isTransitioningFromState:(unsigned long long)state toState:(unsigned long long)state;
@optional
/* instance methods */
- (void)floatingContentView:(id)view didFinishTransitioningToState:(unsigned long long)state;
@end

#endif /* _UIFloatingContentViewDelegate_Protocol_h */