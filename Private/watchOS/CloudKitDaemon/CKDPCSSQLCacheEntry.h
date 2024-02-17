//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPCSSQLCacheEntry_h
#define CKDPCSSQLCacheEntry_h
@import Foundation;

#include "CKSQLiteCacheTableEntry.h"

@class NSNumber, NSString;

@interface CKDPCSSQLCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (retain, nonatomic) NSNumber *itemType;
@property (retain, nonatomic) id CKDPCSData;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *zoneID;
@property (retain, nonatomic) NSString *shareID;
@property (retain, nonatomic) NSString *parentID;

/* instance methods */
@end

#endif /* CKDPCSSQLCacheEntry_h */