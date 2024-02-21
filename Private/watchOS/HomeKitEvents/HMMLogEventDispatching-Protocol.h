//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMLogEventDispatching_Protocol_h
#define HMMLogEventDispatching_Protocol_h
@import Foundation;

@protocol HMMLogEventDispatching <HMMLogEventSubmitting>

@property (readonly, nonatomic) OS_dispatch_queue *clientQueue;
@property (weak) NSObject<HMMLogEventDispatchingDataSource> *dataSource;

/* instance methods */
- (void)addObserver:(id)observer forEventClass:(Class)class;
- (void)addObserver:(id)observer forEventClasses:(id)classes;
- (void)addObserver:(id)observer forProtocol:(id)protocol;
- (void)removeObserver:(id)observer;
@end

#endif /* HMMLogEventDispatching_Protocol_h */