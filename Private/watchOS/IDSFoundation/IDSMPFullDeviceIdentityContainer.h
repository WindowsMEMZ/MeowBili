//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSMPFullDeviceIdentityContainer_h
#define IDSMPFullDeviceIdentityContainer_h
@import Foundation;

#include "IDSMPFullLegacyIdentity.h"
#include "IDSNGMFullDeviceIdentity.h"

@class NSData, NSNumber;

@interface IDSMPFullDeviceIdentityContainer : NSObject

@property (retain, nonatomic) NSData *cachedLegacySerializedData;
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyFullIdentity;
@property (readonly, nonatomic) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

/* class methods */
+ (id)identityWithLegacyFullIdentity:(id)identity ngmFullDeviceIdentity:(id)identity ngmVersion:(id)version error:(id *)error;
+ (id)identityWithDataRepresentation:(id)representation error:(id *)error;
+ (id)_identityWithLegacyFullIdentity:(id)identity ngmFullDeviceIdentity:(id)identity ngmVersion:(id)version legacyFullIdentitySerializedData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithFullLegacyIdentity:(id)identity ngmFullDeviceidentity:(id)deviceidentity ngmVersion:(id)version legacyFullIdentitySerializedData:(id)data;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)publicIdentityWithError:(id *)error;
- (id)dataRepresentationWithError:(id *)error;
- (id)unsealMessage:(id)message signedByPublicIdentity:(id)identity usingIdentityWithIdentifier:(id)identifier error:(id *)error;
- (id)unsealMessage:(id)message guid:(id)guid sendingURI:(id)uri sendingPushToken:(id)token receivingURI:(id)uri receivingPushToken:(id)token signedByPublicIdentity:(id)identity usingIdentityWithIdentifier:(id)identifier;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)identity forMessage:(id)message;
- (id)_ngmSynchronouslyUnsealMessage:(id)message signedByPublicIdentity:(id)identity error:(id *)error;
- (id)_ngmUnsealMessage:(id)message guid:(id)guid sendingURI:(id)uri sendingPushToken:(id)token receivingURI:(id)uri receivingPushToken:(id)token signedByPublicIdentity:(id)identity;
- (id)_legacyUnsealMessage:(id)message signedByPublicIdentity:(id)identity error:(id *)error;
- (id)description;
- (id)debugDescription;
@end

#endif /* IDSMPFullDeviceIdentityContainer_h */