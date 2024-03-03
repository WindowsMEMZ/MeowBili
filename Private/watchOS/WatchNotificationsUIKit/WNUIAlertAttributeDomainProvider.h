//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertAttributeDomainProvider_h
#define WNUIAlertAttributeDomainProvider_h
@import Foundation;

#include "WNUIAlertAttributeDomainProvider-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface WNUIAlertAttributeDomainProvider : NSObject<WNUIAlertAttributeDomainProvider>

@property (readonly, nonatomic) NSDictionary *attributesForDomains;
@property (retain, nonatomic) NSArray *validationErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allowedAttributeClassNames;
+ (id)legacyAlertsDomainProvider;
+ (id)modernAlertsDomainProvider;
+ (id)domainProviderWithPropertyListNamed:(id)named;

/* instance methods */
- (id)initWithPropertyList:(id)list;
- (void)_parsePropertyList:(id)list;
- (void)_parsePropertyList:(id)list attributesForDomains:(id)domains validationErrors:(id)errors;
- (id)attributeForDictionary:(id)dictionary validationErrors:(id)errors;
- (id)alertAttributesForDomain:(id)domain;
@end

#endif /* WNUIAlertAttributeDomainProvider_h */