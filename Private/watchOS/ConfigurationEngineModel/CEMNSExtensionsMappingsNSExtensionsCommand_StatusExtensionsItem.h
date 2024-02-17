//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem_h
#define CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusExtensionPoint;
@property (copy, nonatomic) NSString *statusDisplayName;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:(id)identifier withExtensionPoint:(id)point withDisplayName:(id)name;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withExtensionPoint:(id)point withDisplayName:(id)name;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayload;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem_h */