//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWeakDisplayLinkTarget_h
#define _UIWeakDisplayLinkTarget_h
@import Foundation;

@interface _UIWeakDisplayLinkTarget : NSObject {
  /* instance variables */
  id _target;
  SEL _action;
}

/* class methods */
+ (SEL)displayLinkAction;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)_displayLinkTick:(id)tick;
@end

#endif /* _UIWeakDisplayLinkTarget_h */