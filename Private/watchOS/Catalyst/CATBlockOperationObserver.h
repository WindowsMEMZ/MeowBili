//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATBlockOperationObserver_h
#define CATBlockOperationObserver_h
@import Foundation;

#include "CATOperationObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CATBlockOperationObserver : NSObject<CATOperationObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *mQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didProgress;
@property (copy, nonatomic) id /* block */ didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)operationDidStart:(id)start;
- (void)operationDidProgress:(id)progress;
- (void)operationDidFinish:(id)finish;
- (void)invokeBlock:(id /* block */)block operation:(id)operation;
@end

#endif /* CATBlockOperationObserver_h */