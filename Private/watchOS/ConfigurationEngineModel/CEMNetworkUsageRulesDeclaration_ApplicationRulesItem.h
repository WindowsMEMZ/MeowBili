//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMNetworkUsageRulesDeclaration_ApplicationRulesItem_h
#define CEMNetworkUsageRulesDeclaration_ApplicationRulesItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSArray, NSNumber;

@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches;
@property (copy, nonatomic) NSNumber *payloadAllowRoamingCellularData;
@property (copy, nonatomic) NSNumber *payloadAllowCellularData;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithAppIdentifierMatches:(id)matches withAllowRoamingCellularData:(id)data withAllowCellularData:(id)data;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMNetworkUsageRulesDeclaration_ApplicationRulesItem_h */