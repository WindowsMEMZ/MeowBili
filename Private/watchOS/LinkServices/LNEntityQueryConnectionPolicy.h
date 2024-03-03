//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNEntityQueryConnectionPolicy_h
#define LNEntityQueryConnectionPolicy_h
@import Foundation;

@class LNEffectiveBundleIdentifier, NSString;

@interface LNEntityQueryConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *entityQueryIdentifier;
@property (readonly, nonatomic) NSString *entityQueryMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEntityQueryIdentifier:(id)identifier entityQueryMangledTypeName:(id)name effectiveBundleIdentifier:(id)identifier appBundleIdentifier:(id)identifier;
- (id)connectionWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LNEntityQueryConnectionPolicy_h */