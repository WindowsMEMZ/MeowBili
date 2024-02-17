//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOAuth2Credential_h
#define WFOAuth2Credential_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface WFOAuth2Credential : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *responseObject;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSString *tokenType;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) BOOL expired;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResponseObject:(id)object;
- (BOOL)isValid;
- (BOOL)isExpired;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFOAuth2Credential_h */