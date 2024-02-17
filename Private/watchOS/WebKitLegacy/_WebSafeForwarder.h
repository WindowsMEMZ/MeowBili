//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WebSafeForwarder_h
#define _WebSafeForwarder_h
@import Foundation;

#include "_WebSafeAsyncForwarder.h"

@interface _WebSafeForwarder : NSObject {
  /* instance variables */
  id _target;
  id _defaultTarget;
}

@property (readonly, nonatomic) id asyncForwarder;

/* instance methods */
- (id)initWithTarget:(id)target defaultTarget:(id)target;
- (void)dealloc;
- (void)clearTarget;
- (void)forwardInvocation:(id)invocation;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* _WebSafeForwarder_h */