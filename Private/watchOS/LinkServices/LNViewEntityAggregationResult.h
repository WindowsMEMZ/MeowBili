//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNViewEntityAggregationResult_h
#define LNViewEntityAggregationResult_h
@import Foundation;

@class NSDictionary, NSError, NSMutableDictionary;

@interface LNViewEntityAggregationResult : NSObject {
  /* instance variables */
  NSMutableDictionary *_entitiesByBundleId;
  NSMutableDictionary *_errors;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSDictionary *entities;
@property (readonly, copy, nonatomic) NSError *error;

/* instance methods */
- (id)init;
- (void)addResults:(id)results error:(id)error forBundle:(id)bundle;
@end

#endif /* LNViewEntityAggregationResult_h */