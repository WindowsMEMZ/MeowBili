//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSMPFullAccountIdentityCluster_h
#define IDSMPFullAccountIdentityCluster_h
@import Foundation;

#include "IDSMPIdentity.h"
#include "IDSMPFullAccountIdentity.h"

@class ENGroupID, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesAdmin;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesSigning;
@property (readonly, nonatomic) struct __SecKey * publicKey;
@property (readonly, nonatomic) NSData *forwardingTicket;

/* class methods */
+ (id)clusterWithFullAccountIdentity:(id)identity fullAdminServiceIdentities:(id)identities fullSigningServiceIdentities:(id)identities error:(id *)error;
+ (id)clusterWithDataRepresentation:(id)representation error:(id *)error;

/* instance methods */
- (id)publicAccountClusterWithError:(id *)error;
- (id)dataRepresentationWithError:(id *)error;
- (id)clusterByUpdatingGroupID:(id)id error:(id *)error;
- (id)rolledClusterWithFullAccountIdentity:(id)identity fullAdminServiceIdentities:(id)identities fullSigningServiceIdentities:(id)identities error:(id *)error;
- (BOOL)isParentOfCluster:(id)cluster;
- (id)adminServiceIdentityWithType:(long long)type;
- (id)signingServiceIdentityWithType:(long long)type;
- (id)signData:(id)data withError:(id *)error;
@end

#endif /* IDSMPFullAccountIdentityCluster_h */