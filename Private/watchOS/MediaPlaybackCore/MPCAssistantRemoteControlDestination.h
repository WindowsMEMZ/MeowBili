//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCAssistantRemoteControlDestination_h
#define MPCAssistantRemoteControlDestination_h
@import Foundation;

#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface MPCAssistantRemoteControlDestination : NSObject<NSMutableCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) void * origin;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *hashedOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputGroups;
@property (readonly, nonatomic) NSString *outputGroupID;
@property (readonly, nonatomic) NSString *originatingOutputDeviceUID;
@property (readonly, nonatomic) BOOL singleGroup;
@property (readonly, nonatomic) BOOL originatingDeviceControl;

/* class methods */
+ (id)systemMediaApplicationDestination;
+ (id)podcastsApplicationDestination;
+ (id)iBooksApplicationDestination;
+ (id)nowPlayingApplicationDestination;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAppBundleID:(id)id playerID:(id)id origin:(void *)origin;
- (id)initWithAppBundleID:(id)id;
- (id)init;
- (void)dealloc;
- (id)description;
- (void *)createPlayerPath;
- (void)resolveWithHashedRouteIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)resolveWithHashedRouteIdentifiers:(id)identifiers audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })info completion:(id /* block */)completion;
- (void)resolveWithRouteIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)resolveWithRouteIdentifiers:(id)identifiers audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })info completion:(id /* block */)completion;
- (void)resolveWithQueue:(id)queue hashedRouteIdentifiers:(id)identifiers localPlaybackPermitted:(BOOL)permitted completion:(id /* block */)completion;
- (void)resolveWithQueue:(id)queue hashedRouteIdentifiers:(id)identifiers localPlaybackPermitted:(BOOL)permitted audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })info completion:(id /* block */)completion;
- (void)resolveWithQueue:(id)queue routeIdentifiers:(id)identifiers localPlaybackPermitted:(BOOL)permitted completion:(id /* block */)completion;
- (void)resolveWithQueue:(id)queue routeIdentifiers:(id)identifiers localPlaybackPermitted:(BOOL)permitted audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })info completion:(id /* block */)completion;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)_copyWithZone:(struct _NSZone *)zone usingConcreteClass:(Class)class;
- (void)_getCompanionOrigin:(id /* block */)origin;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MPCAssistantRemoteControlDestination_h */