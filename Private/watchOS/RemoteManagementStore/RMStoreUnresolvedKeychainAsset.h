//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMStoreUnresolvedKeychainAsset_h
#define RMStoreUnresolvedKeychainAsset_h
@import Foundation;

#include "RMStoreUnresolvedAsset.h"
#include "RMStoreDeclarationKey.h"

@class NSString;

@interface RMStoreUnresolvedKeychainAsset : RMStoreUnresolvedAsset

@property (readonly, copy, nonatomic) RMStoreDeclarationKey *assetKey;
@property (readonly, copy, nonatomic) RMStoreDeclarationKey *configurationKey;
@property (readonly, copy, nonatomic) NSString *keychainGroup;
@property (readonly, copy, nonatomic) NSString *keychainDefaultAccessibility;
@property (readonly, nonatomic) BOOL useSystemKeychain;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAsset:(id)asset assetKey:(id)key configurationKey:(id)key group:(id)group defaultAccessibility:(id)accessibility;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToUnresolvedKeychainAsset:(id)asset;
@end

#endif /* RMStoreUnresolvedKeychainAsset_h */