//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNWeakProxy_h
#define CNWeakProxy_h
@import Foundation;

#include "NSProxy.h"

@interface CNWeakProxy : NSProxy {
  /* instance variables */
  Class _targetClass;
  id _weakReference;
}

/* class methods */
+ (id)weakProxyWithObject:(id)object;

/* instance methods */
- (id)initWithObject:(id)object;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)conformsToProtocol:(id)protocol;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (Class)class;
- (BOOL)isKindOfClass:(Class)class;
- (id)description;
@end

#endif /* CNWeakProxy_h */