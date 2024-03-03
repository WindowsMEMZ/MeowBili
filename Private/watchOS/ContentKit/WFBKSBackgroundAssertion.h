//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFBKSBackgroundAssertion_h
#define WFBKSBackgroundAssertion_h
@import Foundation;

#include "WFBackgroundAssertion.h"

@class BKSProcessAssertion, NSString;

@interface WFBKSBackgroundAssertion : WFBackgroundAssertion

@property (readonly, copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (retain, nonatomic) id observer;

/* class methods */
+ (id)backgroundAssertionWithName:(id)name expirationHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithName:(id)name expirationHandler:(id /* block */)handler;
- (void)end;
@end

#endif /* WFBKSBackgroundAssertion_h */