//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NHSWatchGesturesActionHandler_h
#define NHSWatchGesturesActionHandler_h
@import Foundation;

#include "PUICWatchGesturesSceneHostComponentDelegate-Protocol.h"

@class FBSScene, NSString;

@interface NHSWatchGesturesActionHandler : NSObject<PUICWatchGesturesSceneHostComponentDelegate>

@property (weak, nonatomic) FBSScene *homeScreenScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)handleAction:(id)action forScene:(id)scene;
@end

#endif /* NHSWatchGesturesActionHandler_h */