//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef HUUtilities_h
#define HUUtilities_h
@import Foundation;

#include "HURoutesManager.h"

@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;
@property (retain, nonatomic) HURoutesManager *routesManager;

/* class methods */
+ (id)sharedUtilities;
+ (BOOL)shouldUseMultideviceV3;
+ (id)XDCObjectFromObject:(id)object;
+ (id)objectFromXDCObject:(id)xdcobject;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)hearingAidRouteAvailable;
- (void)hearingAidRouteAvailableAsync:(id /* block */)async;
- (BOOL)hearingAidRouteAvailableForAvailableRoutes:(id)routes;
- (id)currentPickableAudioRoutesIfExist;
- (id)currentPickableAudioRoutes;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)completion;
- (void)clearAudioRoutes;
- (void)checkAudioPlayingWithQueue:(id)queue origin:(void *)origin andCompletion:(id /* block */)completion;
- (void)checkAudioPlayingWithQueue:(id)queue andCompletion:(id /* block */)completion;
- (void)pauseNowPlaying:(BOOL)playing withQueue:(id)queue andCompletion:(id /* block */)completion;
- (void)addHearingFeatureUsage:(unsigned long long)usage;
- (void)updateHearingFeatureUsage;
- (BOOL)deviceIsTinker;
@end

#endif /* HUUtilities_h */