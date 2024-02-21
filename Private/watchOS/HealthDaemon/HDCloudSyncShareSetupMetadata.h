//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncShareSetupMetadata_h
#define HDCloudSyncShareSetupMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CKShareParticipant, HKProfileIdentifier, NSArray, NSDictionary, NSString;

@interface HDCloudSyncShareSetupMetadata : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL;
@property (readonly, copy, nonatomic) NSString *ownerCloudKitEmailAddress;
@property (readonly, copy, nonatomic) CKShareParticipant *shareParticipant;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)metadata error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithSyncCircleIdentifier:(id)identifier profileIdentifier:(id)identifier shareURLs:(id)urls ownerCloudKitEmailAddress:(id)address shareParticipant:(id)participant invitationTokensByShareURL:(id)url;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)codableSharingSetupMetadataWithError:(id *)error;
- (id)description;
@end

#endif /* HDCloudSyncShareSetupMetadata_h */