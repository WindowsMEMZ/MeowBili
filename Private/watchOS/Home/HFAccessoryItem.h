//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryItem_h
#define HFAccessoryItem_h
@import Foundation;

#include "HFItem.h"
#include "HFAccessoryRepresentable-Protocol.h"
#include "HFAccessoryRepresentableItem-Protocol.h"
#include "HFActionBuilderFactory-Protocol.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFCompoundItemProtocol-Protocol.h"
#include "HFGroupableItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFMediaAccessoryCommonSettingsManager.h"
#include "HFMediaAccessoryProtocol-Protocol.h"
#include "HFServiceLikeBuilderCreating-Protocol.h"
#include "HFServiceLikeItem-Protocol.h"

@class HMAccessory, HMHome, NSArray, NSSet, NSString;

@interface HFAccessoryItem : HFItem<HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>

@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSSet *serviceItems;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;
@property (readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *primaryHomeKitObject;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;

/* class methods */
+ (id)itemWithAccessoryRepresentableObject:(id)object valueSource:(id)source;

/* instance methods */
- (id)initWithAccessory:(id)accessory valueSource:(id)source;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithValueSource:(id)source;
- (id)_subclass_updateWithOptions:(id)options;
- (BOOL)shouldShowMutedMicIcon;
- (id)controlItemsForService:(id)service;
- (id)serviceItemForService:(id)service;
- (id)_buildControlItems;
- (id)_collectAllChildItems;
- (id)_buildServiceItems;
- (BOOL)containsActions;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)home;
- (id)accessories;
- (id)serviceLikeBuilderInHome:(id)home;
- (id)namingComponentForHomeKitObject;
- (BOOL)isSiriEndpointAccessory;
- (BOOL)isAnnounceEnabled;
- (id)setEnableAnnounce:(BOOL)announce;
- (BOOL)isSiriDisabled;
- (id)setSiriDisabled:(BOOL)disabled;
- (BOOL)isAudioAnalysisEnabled;
- (id)setEnableAudioAnalysis:(BOOL)analysis;
- (BOOL)isDoorbellChimeEnabled;
- (id)enableDoorbellChime:(BOOL)chime;
- (id)_buildTileDescription:(BOOL)description title:(id)title;
- (id)_buildControlDescription;
- (id)_repeatingDescriptionsToCoalesce;
- (BOOL)isMultiSensorDevice;
- (BOOL)isMultiLightDevice;
- (id)_unanimousValueForResultsKey:(id)key inServiceItems:(id)items;
- (id)_mostCommonValueForResultsKey:(id)key inServiceItems:(id)items;
- (id)_mostCommonValueInServiceItems:(id)items valueProvider:(id /* block */)provider;
- (id)_sortDescriptorsForServiceItems;
@end

#endif /* HFAccessoryItem_h */