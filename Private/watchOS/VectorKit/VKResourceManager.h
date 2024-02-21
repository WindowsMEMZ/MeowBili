//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKResourceManager_h
#define VKResourceManager_h
@import Foundation;

@class NSBundle;

@interface VKResourceManager : NSObject {
  /* instance variables */
  NSBundle *_vkBundle;
}

/* instance methods */
- (id)init;
- (id)_localNameForResourceName:(id)name;
- (id)dataForResourceWithName:(id)name;
- (id)dataForResourceWithName:(id)name fallbackNameHandler:(id /* block */)handler;
- (id)pathForResourceWithName:(id)name;
- (BOOL)isDevResourceWithName:(id)name;
@end

#endif /* VKResourceManager_h */