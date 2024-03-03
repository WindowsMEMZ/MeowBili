//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVSubscriptionResponse_h
#define SSVSubscriptionResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SSVSubscriptionResponse : NSObject<SSXPCCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_accountUniqueIdentifierToSubscriptionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)identifier;
- (void)setSubscriptionStatus:(id)status forAccountUniqueIdentifier:(unsigned long long)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
@end

#endif /* SSVSubscriptionResponse_h */