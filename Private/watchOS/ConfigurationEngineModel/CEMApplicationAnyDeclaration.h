//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMApplicationAnyDeclaration_h
#define CEMApplicationAnyDeclaration_h
@import Foundation;

#include "CEMAssetBase.h"
#include "CEMAssetBaseDescriptor.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSString;

@interface CEMApplicationAnyDeclaration : CEMAssetBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadDesignatedRequirement;
@property (copy, nonatomic) NSString *payloadSigningIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withDescriptor:(id)descriptor withBundleIdentifier:(id)identifier withDesignatedRequirement:(id)requirement withSigningIdentifier:(id)identifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withDescriptor:(id)descriptor withBundleIdentifier:(id)identifier;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMApplicationAnyDeclaration_h */