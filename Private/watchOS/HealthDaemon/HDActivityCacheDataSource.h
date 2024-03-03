//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDActivityCacheDataSource_h
#define HDActivityCacheDataSource_h
@import Foundation;

#include "HDActivityCacheHeartRateStatisticsBuilder.h"
#include "HDActivityCacheStatisticsBuilder.h"
#include "HDActivityCacheStatisticsBuilderSourceDelegate-Protocol.h"
#include "HDDataObserver-Protocol.h"
#include "HDProfile.h"

@class HKCategoryType, HKWorkoutType, NSDate, NSDateInterval, NSMutableArray, NSSet, NSString, _HKDelayedOperation;
@protocol OS_dispatch_queue, {unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>>="__table_"{__hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>>="__value_"f}}}, {vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>>="__begin_"^{HDActivityCacheStatisticsBuilderSample}"__end_"^{HDActivityCacheStatisticsBuilderSample}"__end_cap_"{__compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::allocator<HDActivityCacheStatisticsBuilderSample>>="__value_"^{HDActivityCacheStatisticsBuilderSample}}};

@interface HDActivityCacheDataSource : NSObject<HDActivityCacheStatisticsBuilderSourceDelegate, HDDataObserver> {
  /* instance variables */
  struct vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>> { struct HDActivityCacheStatisticsBuilderSample *__begin_; struct HDActivityCacheStatisticsBuilderSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::allocator<HDActivityCacheStatisticsBuilderSample>> { struct HDActivityCacheStatisticsBuilderSample *__value_; } __end_cap_; } _previousWatchActivationLogEntryVector;
  BOOL _previousWatchActivationLogEntryIsSet;
  long long _quantitySampleAnchor;
  long long _nonQuantitySampleAnchor;
  NSString *_nonQuantitySamplesQueryString;
  NSString *_quantitySamplesQueryString;
  HKCategoryType *_standHoursType;
  HKCategoryType *_deepBreathingSessionType;
  HKWorkoutType *_workoutType;
  HKCategoryType *_watchActivationType;
  NSSet *_allObservedTypes;
  _HKDelayedOperation *_updateOperation;
  _HKDelayedOperation *_rebuildOperation;
  struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _isWatchSourceCache;
  struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _isConnectedGymSourceCache;
  struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _isConnectedGymDeviceCache;
  NSMutableArray *_unfrozenSeriesCache;
  NSObject<OS_dispatch_queue> *_queue;
  HDProfile *_profile;
}

@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (readonly, copy, nonatomic) NSSet *observedQuantityTypes;
@property (retain, nonatomic) NSDateInterval *targetDayDateInterval;
@property (retain, nonatomic) NSDateInterval *previousDayDateInterval;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic) long long previousDayCacheIndex;
@property (copy, nonatomic) NSString *targetDayStatisticsBuilderTag;
@property (copy, nonatomic) NSString *previousDayStatisticsBuilderTag;
@property (copy, nonatomic) NSDate *activeDevicePairedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile observedQuantityTypes:(id)types updateOperation:(id)operation rebuildOperation:(id)operation queue:(id)queue;
- (void)dealloc;
- (void)invalidate;
- (BOOL)updateWithError:(id *)error;
- (void)samplesAdded:(id)added anchor:(id)anchor;
- (void)samplesOfTypesWereRemoved:(id)removed anchor:(id)anchor;
- (void)pauseUpdates;
- (void)resumeUpdates;
- (long long)localDeviceSourceIdentifier;
- (id)activityCacheStatisticsBuilder:(id)builder sourceOrderForObjectType:(id)type;
- (void)_samplesAddedToWorkoutNotification:(id)notification;
- (void)reportTargetDayHeartRateAnalytics;
@end

#endif /* HDActivityCacheDataSource_h */