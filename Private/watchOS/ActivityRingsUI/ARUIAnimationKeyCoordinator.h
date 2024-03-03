//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIAnimationKeyCoordinator_h
#define ARUIAnimationKeyCoordinator_h
@import Foundation;

@interface ARUIAnimationKeyCoordinator : NSObject
/* class methods */
+ (id)animationKeyForType:(unsigned long long)type ringIndex:(long long)index;
+ (id)animationKeyCache;
+ (id)animationKeyFormatForType:(unsigned long long)type;
@end

#endif /* ARUIAnimationKeyCoordinator_h */