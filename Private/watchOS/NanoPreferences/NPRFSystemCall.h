//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFSystemCall_h
#define NPRFSystemCall_h
@import Foundation;

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface NPRFSystemCall : NSObject

@property (retain) NSString *program;
@property (retain) NSArray *args;
@property (copy) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *waitQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) int pid;
@property (readonly) unsigned long long dispatchState;
@property (readonly) int spawnReturnValue;
@property (readonly) int waitPidStatusValue;
@property (readonly) int exitStatus;
@property (readonly) NSArray *errors;

/* class methods */
+ (id)dispatchProgram:(id)program;
+ (id)dispatchProgram:(id)program synchronous:(BOOL)synchronous;
+ (id)dispatchProgram:(id)program completion:(id /* block */)completion;
+ (id)dispatchProgram:(id)program completion:(id /* block */)completion synchronous:(BOOL)synchronous;
+ (id)dispatchProgram:(id)program args:(id)args;
+ (id)dispatchProgram:(id)program args:(id)args synchronous:(BOOL)synchronous;
+ (id)dispatchProgram:(id)program args:(id)args completion:(id /* block */)completion;
+ (id)dispatchProgram:(id)program args:(id)args completion:(id /* block */)completion synchronous:(BOOL)synchronous;
+ (id)dispatchProgram:(id)program args:(id)args waitQueue:(id)queue completionQueue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (id)init;
- (id)initWithProgram:(id)program args:(id)args waitQueue:(id)queue completionQueue:(id)queue completion:(id /* block */)completion;
- (unsigned long long)dispatch;
- (void)_waitForProcessOnWaitQueue;
- (void)_updateStatusForWaitPidStatusValue:(int)value;
- (void)_runCompletionBlockOnCompletionQueue;
- (BOOL)sendSignal:(int)signal;
- (void)kill;
- (id)description;
@end

#endif /* NPRFSystemCall_h */