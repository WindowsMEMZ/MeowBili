//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMContainerIdentityMinimal_h
#define MCMContainerIdentityMinimal_h
@import Foundation;

#include "MCMUserIdentity.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface MCMContainerIdentityMinimal : NSObject<NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;

/* class methods */
+ (id)minimalContainerIdentityFromPlist:(id)plist userIdentityCache:(id)cache error:(unsigned long long *)error;

/* instance methods */
- (id)init;
- (id)initWithUserIdentity:(id)identity identifier:(id)identifier containerClass:(unsigned long long)class platform:(unsigned int)platform error:(unsigned long long *)error;
- (id)initWithLibsystemContainer:(struct container_object_s *)container defaultUserIdentity:(id)identity userIdentityCache:(id)cache error:(unsigned long long *)error;
- (id)plist;
- (id)initWithPlist:(id)plist userIdentityCache:(id)cache error:(unsigned long long *)error;
- (id)initWithVersion1PlistDictionary:(id)dictionary userIdentityCache:(id)cache error:(unsigned long long *)error;
- (id)minimalIdentity;
- (id)identityBySettingPlatform:(unsigned int)platform;
- (id)identityByChangingUserIdentity:(id)identity;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqualToContainerIdentity:(id)identity;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MCMContainerIdentityMinimal_h */