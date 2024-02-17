//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRITask_Protocol_h
#define TRITask_Protocol_h
@import Foundation;

@protocol TRITask <NSObject, NSSecureCoding>

@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;

/* class methods */
+ (id)parseFromData:(id)data;
/* instance methods */
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (void)runEnqueueHandlerUsingContext:(id)context;
- (void)runDequeueHandlerUsingContext:(id)context;
- (unsigned long long)requiredCapabilities;
- (id)serialize;
@end

#endif /* TRITask_Protocol_h */