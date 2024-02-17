//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONavdClientInfo_h
#define GEONavdClientInfo_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface GEONavdClientInfo : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *canonicalName;
@property (copy, nonatomic) NSString *uniqueClientId;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)clientInfoForNavdPredictions;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCanonicalName:(id)name instanceId:(unsigned long long)id auditToken:(id)token;
- (id)initWithCanonicalName:(id)name instanceId:(unsigned long long)id;
- (BOOL)isCalendarClientInfo;
- (BOOL)isNavdClientInfo;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* GEONavdClientInfo_h */