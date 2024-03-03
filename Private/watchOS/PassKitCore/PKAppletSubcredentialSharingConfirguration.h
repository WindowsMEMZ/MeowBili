//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAppletSubcredentialSharingConfirguration_h
#define PKAppletSubcredentialSharingConfirguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPassShareActivationOptions.h"

@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject<NSSecureCoding> {
  /* instance variables */
  NSArray *_entitlements;
}

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (nonatomic) BOOL sharingRequiresPassword;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)asDictionary;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKAppletSubcredentialSharingConfirguration_h */