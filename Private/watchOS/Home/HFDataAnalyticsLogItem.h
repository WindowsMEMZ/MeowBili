//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDataAnalyticsLogItem_h
#define HFDataAnalyticsLogItem_h
@import Foundation;

#include "HFItem.h"
#include "HFMediaProfileContainer-Protocol.h"
#include "NAIdentifiable-Protocol.h"

@class NSString;

@interface HFDataAnalyticsLogItem : HFItem<NAIdentifiable>

@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (id)initWithMediaProfileContainer:(id)container name:(id)name;
- (id)init;
- (id)fetchLog;
- (id)_subclass_updateWithOptions:(id)options;
- (BOOL)isDisplayDisabled;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFDataAnalyticsLogItem_h */