//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUNotifyObserver_Protocol_h
#define TUNotifyObserver_Protocol_h
@import Foundation;

#include "TUNotifyObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@protocol TUNotifyObserver <NSObject>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL observing;

/* instance methods */
- (void)beginObserving;
- (void)endObserving;
- (BOOL)isObserving;
@end

#endif /* TUNotifyObserver_Protocol_h */