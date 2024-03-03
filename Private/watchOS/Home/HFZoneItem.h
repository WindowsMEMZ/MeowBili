//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFZoneItem_h
#define HFZoneItem_h
@import Foundation;

#include "HFItem.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFItemDeletionProtocol-Protocol.h"
#include "NAIdentifiable-Protocol.h"

@class HMHome, HMZone, NSString;

@interface HFZoneItem : HFItem<NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMZone *zone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (id)initWithHome:(id)home zone:(id)zone;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (BOOL)hf_canDeleteItem;
- (id)hf_deleteItem;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFZoneItem_h */