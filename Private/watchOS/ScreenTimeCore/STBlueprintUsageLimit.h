//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STBlueprintUsageLimit_h
#define STBlueprintUsageLimit_h
@import Foundation;

#include "NSManagedObject.h"
#include "STBlueprint.h"
#include "STBlueprintUsageLimitScheduleRepresentation.h"
#include "STSerializableManagedObject-Protocol.h"
#include "STSyncableSubObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface STBlueprintUsageLimit : NSManagedObject<STSerializableManagedObject, STSyncableSubObject>

@property (@dynamic, nonatomic) double day0Limit;
@property (@dynamic, nonatomic) double day1Limit;
@property (@dynamic, nonatomic) double day2Limit;
@property (@dynamic, nonatomic) double day3Limit;
@property (@dynamic, nonatomic) double day4Limit;
@property (@dynamic, nonatomic) double day5Limit;
@property (@dynamic, nonatomic) double day6Limit;
@property (readonly, @dynamic, nonatomic) STBlueprint *blueprint;
@property (copy, @dynamic, nonatomic) NSArray *applicationIdentifiers;
@property (copy, @dynamic, nonatomic) NSArray *categoryIdentifiersVersion2;
@property (copy, @dynamic, nonatomic) NSArray *websiteIdentifiers;
@property (retain, @dynamic, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintUsageLimitScheduleRepresentation *budgetLimitScheduleRepresentation;
@property (copy, @dynamic, nonatomic) NSString *usageItemType;
@property (copy, @dynamic, nonatomic) NSArray *itemIdentifiers;
@property (copy, @dynamic, nonatomic) NSArray *categoryIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;

/* class methods */
+ (id)limitKeyPaths;
+ (id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;

/* instance methods */
- (void)awakeFromFetch;
- (void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)identifiers oldCategoryIdentifiers:(id)identifiers oldCategoryIdentifiersVersion2:(id)version2 oldWebDomains:(id)domains oldItemIdentifiers:(id)identifiers oldItemType:(id)type toNewApplicationIdentifiers:(id)identifiers newCategoryIdentifiers:(id)identifiers newCategoryIdentifiersVersion2:(id)version2 newWebDomains:(id)domains newItemIdentifiers:(id)identifiers newItemType:(id)type;
- (void)setBudgetLimit:(double)limit;
- (void)setBudgetLimit:(double)limit forDay:(unsigned long long)day;
- (BOOL)updateWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
@end

#endif /* STBlueprintUsageLimit_h */