//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAsset_h
#define TRIAsset_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSString;

@interface TRIAsset : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *assetId;
@property (@dynamic, nonatomic) BOOL hasAssetId;
@property (@dynamic, nonatomic) unsigned int cloudKitIndex;
@property (@dynamic, nonatomic) BOOL hasCloudKitIndex;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (@dynamic, nonatomic) BOOL signed_p;
@property (@dynamic, nonatomic) BOOL hasSigned_p;
@property (@dynamic, nonatomic) unsigned long long size;
@property (@dynamic, nonatomic) BOOL hasSize;
@property (copy, @dynamic, nonatomic) NSString *treatmentId;
@property (@dynamic, nonatomic) BOOL hasTreatmentId;
@property (@dynamic, nonatomic) int cloudKitContainer;
@property (@dynamic, nonatomic) BOOL hasCloudKitContainer;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIAsset_h */