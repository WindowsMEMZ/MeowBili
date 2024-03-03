//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStoreFileAssetFairPlayInfo_h
#define ICStoreFileAssetFairPlayInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData, NSDictionary;

@interface ICStoreFileAssetFairPlayInfo : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSData *sinfData;
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;

/* instance methods */
- (id)initWithResponseSinfDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICStoreFileAssetFairPlayInfo_h */