//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSDrivingTriggerManager_h
#define DNDSDrivingTriggerManager_h
@import Foundation;

#include "DNDSBiomeTriggerManager-Protocol.h"

@class NSString;
@protocol DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource, OS_dispatch_queue;

@interface DNDSDrivingTriggerManager : NSObject<DNDSBiomeTriggerManager> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_biomeQueue;
}

@property (weak, nonatomic) NSObject<DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)refresh;
@end

#endif /* DNDSDrivingTriggerManager_h */