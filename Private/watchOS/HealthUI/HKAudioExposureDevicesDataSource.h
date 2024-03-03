//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAudioExposureDevicesDataSource_h
#define HKAudioExposureDevicesDataSource_h
@import Foundation;

@class HKHealthStore, HKObserverSet, HKQuery, NSDictionary, NSSet;

@interface HKAudioExposureDevicesDataSource : NSObject

@property (nonatomic) BOOL ready;
@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSSet *devices;
@property (copy, nonatomic) NSDictionary *devicesByName;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverSet *observers;
@property (retain, nonatomic) HKQuery *query;
@property (readonly, nonatomic) long long deviceCount;

/* instance methods */
- (id)initWithDeviceType:(unsigned long long)type healthStore:(id)store;
- (void)startQuery;
- (void)cancelQuery;
- (void)_cleanUp;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_notify_dataSourceIsReady;
- (id)_makeDeviceQueryForDeviceType;
- (id)_sampleTypeForDeviceType;
- (id)_localizedNameForDevice:(id)device;
- (BOOL)isReady;
@end

#endif /* HKAudioExposureDevicesDataSource_h */