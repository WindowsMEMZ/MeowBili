//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPAVRoutingController_h
#define MusicKit_SoftLinking_MPAVRoutingController_h
@import Foundation;

#include "MPAVRoutingControllerDelegate-Protocol.h"

@class MPAVRoutingController, NSString;

@interface MusicKit_SoftLinking_MPAVRoutingController : NSObject<MPAVRoutingControllerDelegate> {
  /* instance variables */
  MPAVRoutingController *_underlyingRoutingController;
}

@property (copy, nonatomic) id /* block */ routesDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;
- (void)routingControllerAvailableRoutesDidChange:(id)change;
- (void)_handleRoutesDidChange:(id)change;
@end

#endif /* MusicKit_SoftLinking_MPAVRoutingController_h */