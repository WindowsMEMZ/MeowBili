//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACRoutingController_Protocol_h
#define NACRoutingController_Protocol_h
@import Foundation;

@protocol NACRoutingController <NSObject>

@property (readonly, nonatomic) NACAudioRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *availableAudioRoutes;
@property (weak, nonatomic) NSObject<NACRoutingControllerDelegate> *delegate;

/* instance methods */
- (id)initWithAudioCategory:(id)category;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;
- (void)pickAudioRoute:(id)route;
@end

#endif /* NACRoutingController_Protocol_h */