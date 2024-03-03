//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCMutablePlaybackRequestEnvironment_h
#define MPCMutablePlaybackRequestEnvironment_h
@import Foundation;

#include "MPCPlaybackRequestEnvironment.h"
#include "MPCPlaybackDelegationProperties.h"

@class ICUserIdentity, NSString;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (copy, @dynamic, nonatomic) NSString *clientIdentifier;
@property (copy, @dynamic, nonatomic) NSString *clientVersion;
@property (copy, @dynamic, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *requestingBundleVersion;
@property (copy, @dynamic, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (retain, @dynamic, nonatomic) ICUserIdentity *userIdentity;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* MPCMutablePlaybackRequestEnvironment_h */