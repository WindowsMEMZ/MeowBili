//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMStatisticsGroup_Protocol_h
#define HMMStatisticsGroup_Protocol_h
@import Foundation;

@protocol HMMStatisticsGroup <NSObject>

@property (readonly, nonatomic) NSObject<HMMCounterDatePartitionProvider> *partitionProvider;
@property (readonly, copy, nonatomic) NSArray *ephemeralContainerNames;

/* instance methods */
- (void)addMaxValueObserver:(id)observer forStatistics:(id)statistics;
- (BOOL)addEphemeralContainer:(id)container;
- (void)deactivateEphemeralContainer:(id)container;
- (void)removeEphemeralContainer:(id)container;
- (void)addValue:(long long)value toStatistics:(id)statistics;
- (id)datePartitions;
- (id)statistics:(id)statistics inDatePartition:(id)partition;
- (id)statisticsInDatePartition:(id)partition;
- (id)statistics:(id)statistics inEphemeralContainer:(id)container;
- (id)statisticsInEphemeralContainer:(id)container;
@end

#endif /* HMMStatisticsGroup_Protocol_h */