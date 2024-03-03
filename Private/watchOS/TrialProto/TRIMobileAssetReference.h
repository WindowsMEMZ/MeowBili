//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIMobileAssetReference_h
#define TRIMobileAssetReference_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSString;

@interface TRIMobileAssetReference : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *assetType;
@property (@dynamic, nonatomic) BOOL hasAssetType;
@property (copy, @dynamic, nonatomic) NSString *assetSpecifier;
@property (@dynamic, nonatomic) BOOL hasAssetSpecifier;
@property (copy, @dynamic, nonatomic) NSString *assetVersion;
@property (@dynamic, nonatomic) BOOL hasAssetVersion;
@property (@dynamic, nonatomic) BOOL isOnDemand;
@property (@dynamic, nonatomic) BOOL hasIsOnDemand;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (@dynamic, nonatomic) unsigned long long size;
@property (@dynamic, nonatomic) BOOL hasSize;
@property (@dynamic, nonatomic) BOOL isFileFactor;
@property (@dynamic, nonatomic) BOOL hasIsFileFactor;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIMobileAssetReference_h */