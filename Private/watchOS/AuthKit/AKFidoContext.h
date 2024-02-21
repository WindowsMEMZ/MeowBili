//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKFidoContext_h
#define AKFidoContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface AKFidoContext : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSString *originalChallenge;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) NSData *userIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *credentialName;
@property (readonly, nonatomic) NSArray *credentials;
@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptHeader;
@property (copy, nonatomic) NSString *promptBody;
@property (copy, nonatomic) NSString *incorrectKeyPresentedMessage;
@property (nonatomic) BOOL useAlternativeKeysIcon;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParameters:(id)parameters;
- (id)initWithChallengeString:(id)string relyingPartyIdentifier:(id)identifier userIdentifierString:(id)string displayName:(id)name credentialName:(id)name credentials:(id)credentials;
- (id)initWithChallenge:(id)challenge relyingPartyIdentifier:(id)identifier userIdentifier:(id)identifier displayName:(id)name credentialName:(id)name credentials:(id)credentials;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
@end

#endif /* AKFidoContext_h */