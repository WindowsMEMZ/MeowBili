//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRollingBaselineRelativeDataSource_h
#define HDRollingBaselineRelativeDataSource_h
@import Foundation;

#include "HDProfile.h"
#include "HDRollingBaselineRelativeQuantityCalculator.h"
#include "_HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap.h"

@class HKQuantityType, NSDate;
@protocol {unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>>="__table_"{__hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>>="__value_"f}}};

@interface HDRollingBaselineRelativeDataSource : NSObject {
  /* instance variables */
  HKQuantityType *_quantityType;
  HDRollingBaselineRelativeQuantityCalculator *_baselineCalculator;
  _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap *_canonicalSourceMap;
  double _queryPrefetchWindow;
  NSDate *_currentDate;
  struct unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>> { struct __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>> { float __value_; } __p3_; } __table_; } _prefetchedSamplesByBaselineCompatibilityID;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) id /* block */ shouldContinueHandler;

/* instance methods */
- (id)initWithProfile:(id)profile quantityType:(id)type configuration:(id)configuration queryPrefetchWindow:(double)window currentDate:(id)date;
- (id)computeRelativeValueForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })sample error:(id *)error;
- (BOOL)_primeBaselineCalculatorWithPriorSamplesForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })sample baselineCompatibilityID:(id)id error:(id *)error;
- (BOOL)_supplementCalculatorWithSubsequentSamplesForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })sample baselineCompatibilityID:(id)id error:(id *)error;
- (BOOL)_shouldContinueWithError:(id *)error;
- (id)_predicateForSamplesStartingWithinDateInterval:(id)interval sourceID:(long long)id isIntervalStartDateInclusive:(BOOL)inclusive;
- (BOOL)_couldSampleEverResolveToDeterminateValue:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })value;
@end

#endif /* HDRollingBaselineRelativeDataSource_h */