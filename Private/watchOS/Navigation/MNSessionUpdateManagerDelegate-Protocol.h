//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNSessionUpdateManagerDelegate_Protocol_h
#define MNSessionUpdateManagerDelegate_Protocol_h
@import Foundation;

@protocol MNSessionUpdateManagerDelegate <NSObject>

@property (readonly, nonatomic) unsigned long long targetLegIndex;
@property (readonly, nonatomic) int state;

/* instance methods */
- (void)updateManager:(id)manager willSendTransitUpdateRequests:(id)requests;
- (void)updateManager:(id)manager didReceiveTransitUpdateResponse:(id)response;
- (void)updateManager:(id)manager willSendTransitUpdateRequestForRouteIDs:(id)ids;
- (void)updateManager:(id)manager didReceiveTransitUpdates:(id)updates;
- (void)updateManager:(id)manager didReceiveTransitError:(id)error;
- (void)updateManager:(id)manager willSendETARequest:(id)etarequest;
- (void)updateManager:(id)manager didReceiveETAResponse:(id)etaresponse;
- (BOOL)wantsETAUpdates;
- (id)routeInfoForUpdateManager:(id)manager;
- (id)userLocationForUpdateManager:(id)manager;
- (id)recentLocationHistoryForUpdateManager:(id)manager;
@end

#endif /* MNSessionUpdateManagerDelegate_Protocol_h */