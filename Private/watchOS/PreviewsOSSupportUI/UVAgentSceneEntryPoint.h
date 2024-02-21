//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVAgentSceneEntryPoint_h
#define UVAgentSceneEntryPoint_h
@import Foundation;

#include "_UISceneComponentProviding-Protocol.h"

@class NSString, UIScene;

@interface UVAgentSceneEntryPoint : NSObject<_UISceneComponentProviding> {
  /* instance variables */
  UIScene *_scene;
}

@property (weak, nonatomic) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (void)_forceApplicationLaunchCompletion;
- (void)_setScene:(id)scene;
@end

#endif /* UVAgentSceneEntryPoint_h */