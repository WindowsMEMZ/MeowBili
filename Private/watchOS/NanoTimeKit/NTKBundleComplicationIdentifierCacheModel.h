//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBundleComplicationIdentifierCacheModel_h
#define NTKBundleComplicationIdentifierCacheModel_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface NTKBundleComplicationIdentifierCacheModel : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSDictionary *dataSourceToBundleIdentifier;
@property (copy, nonatomic) NSDictionary *legacyComplicationTypeToDataSourceIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBuildVersion:(id)version;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NTKBundleComplicationIdentifierCacheModel_h */