//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCloudKitCollectionOrdering_h
#define WFCloudKitCollectionOrdering_h
@import Foundation;

#include "WFCloudKitBaseOrdering.h"

@interface WFCloudKitCollectionOrdering : WFCloudKitBaseOrdering
/* class methods */
+ (id)recordType;
+ (id)recordBasename;
+ (BOOL)isOrderingRecordID:(id)id;
+ (id)recordIDWithZoneID:(id)id collectionIdentifier:(id)identifier;
@end

#endif /* WFCloudKitCollectionOrdering_h */