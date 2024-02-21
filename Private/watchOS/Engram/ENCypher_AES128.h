//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef ENCypher_AES128_h
#define ENCypher_AES128_h
@import Foundation;

#include "ENCypher-Protocol.h"

@class NSData, NSString;

@interface ENCypher_AES128 : NSObject<ENCypher>

@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_randomDataWithLength:(long long)length;
+ (id)_encryptData:(id)data withKey:(id)key;
+ (id)_decryptData:(id)data withKey:(id)key;

/* instance methods */
- (id)initWithRandomKey;
- (id)initWithKey:(id)key;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)cypherData:(id)data withAccountIdentity:(id)identity identifier:(id *)identifier error:(id *)error;
- (id)decypherData:(id)data withAccountIdentity:(id)identity signingDevicePublicKey:(id)key identifier:(id)identifier error:(id *)error;
@end

#endif /* ENCypher_AES128_h */